#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import cv2
import os
from cv_bridge import CvBridge 
from sensor_msgs.msg import Image as ROS_Image
import Webots_YOLOv8.running_inference as ri
import soccer_vision_2d_msgs.msg as sv2dm 
import soccer_vision_3d_msgs.msg as sv3dm
import Webots_YOLOv8.segmentacao as seg

from ament_index_python.packages import (
    get_package_share_directory
)



class YoloSimulacao(Node):

    def __init__(self):
        package_share = get_package_share_directory(
            'Webots_YOLOv8'
        )
        super().__init__('teste_yolo_sim')
        self.get_logger().info('>> MODO TESTE VISUAL (YOLO) <<')
        self.window_name = "detection window"
        self.source_lut = os.path.join(
            package_share,
            'recursos',
            'green_pixels.csv'
        )

        self.segmentador = seg.Pixel_Segment(self.source_lut)


        # 1. Carrega IA
        self.model = ri.model

        # Visualizar classes do modelo

        self.get_logger().info(f"CLASSES DO MODELO: {self.model.names}")
        
        # 2. Ponte CV <-> ROS
        self.bridge = CvBridge()

        # 3. Subscriber (Entrada do Webots)
        self.camera_subscriber = self.create_subscription(
            ROS_Image, 
            '/AUREA/camera_optical_frame/image_color', 
            self.image_callback, 
            10
        )

        # 4. Publisher DE DEBUG 
        self.debug_pub = self.create_publisher(ROS_Image, 'processed_image_topic', 10)

        # 5. Publisher IPM

        self.pub_ball = self.create_publisher(sv2dm.BallArray,'balls_in_image',1)
        self.pub_goal = self.create_publisher(sv2dm.GoalpostArray,'goal_posts_in_image',1)
        self.pub_robot = self.create_publisher(sv2dm.RobotArray,'robots_in_image',1)
        self.pub_inter = self.create_publisher(sv2dm.MarkingArray, 'markings_in_image',1)
        


    def image_callback(self, ros_image_msg):
        try:
            # Converte entrada
            frame = self.bridge.imgmsg_to_cv2(ros_image_msg, desired_encoding="bgr8")
            
            # Roda o YOLO
            resultado = self.segmentador.processar(frame)
            classes, scores, boxes, inference_frame = ri.detect_model(self.model, frame)

            debug_img = seg.desenhar_segmentacao(
            inference_frame,
            resultado
            )

            # FUNCAO PARA DESENHAR A SEGMENTACAO

            # ROS Header

            header = ros_image_msg.header

            # Criação das mensagens vazias

            msg_ball = sv2dm.BallArray(header=header)
            msg_goal = sv2dm.GoalpostArray(header=header)
            msg_robot = sv2dm.RobotArray(header=header)
            msg_int = sv2dm.MarkingArray(header=header)

            # Loop das mensagens 
    
            for i in range(len(boxes)):
                box = boxes[i] # [x,y,w,h]
                cls = classes[i]
                conf = scores[i]

                # {0: 'ball', 1: 'goalpost', 2: 'robot', 3: 'L-Intersection', 4: 'T-Intersection', 5: 'X-Intersection', 6: 'crossbar'}

                # Bola 
                if cls == 0:
                    b = sv2dm.Ball()
                    b.center.x = float(box[0])
                    b.center.y = float(box[1])
                    b.confidence.confidence = conf
                    msg_ball.balls.append(b)

                if cls == 1:
                    g = sv2dm.Goalpost()
                    g.bb.center.position.x = float(box[0])
                    g.bb.center.position.y = float(box[1])
                    g.bb.size_x = float(box[2])
                    g.bb.size_y = float(box[3])
                    g.confidence.confidence = conf 
                    msg_goal.posts.append(g)

                if cls == 2:
                    r = sv2dm.Robot()
                    r.bb.center.position.x = float(box[0])
                    r.bb.center.position.y = float(box[1])
                    r.bb.size_x = float(box[2])
                    r.bb.size_y = float(box[3])
                    r.confidence.confidence = conf 
                    msg_robot.robots.append(r)


                if cls == 3 or cls == 4 or cls == 5:
                    i = sv2dm.MarkingIntersection()  
                    i.center.x = float(box[0])
                    i.center.y = float(box[1])  
                    i.confidence.confidence = conf 
                    if cls == 3: # L
                        i.num_rays = 2
                    elif cls == 4: # T
                        i.num_rays = 3
                    elif cls == 5: # X
                        i.num_rays = 4
                    
                    i.heading_rays = [] # vazio de acordo com a informação da mensagem
                    msg_int.intersections.append(i)
                

            # publicação

            self.pub_ball.publish(msg_ball)
            self.pub_goal.publish(msg_goal)
            self.pub_robot.publish(msg_robot)
            self.pub_inter.publish(msg_int)

            # --- VISUALIZAÇÃO ---
            # Converte a imagem desenhada de volta para ROS e publica
            debug_msg = self.bridge.cv2_to_imgmsg(debug_img, "bgr8") # PUBLICAR DEBUG_IMG (SEGMENTACAO + INFERENCIA)
            debug_msg.header = ros_image_msg.header

            self.debug_pub.publish(debug_msg)

            cv2.imshow(self.window_name, debug_img)
            cv2.waitKey(1)

        except Exception as e:
            self.get_logger().error(f'Erro: {e}')

def main(args=None):
    rclpy.init(args=args)
    node = YoloSimulacao()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
