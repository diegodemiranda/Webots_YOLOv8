#!/usr/bin/env python3
"""
No de visao usando a segmentacao classica (OpenCV) no lugar do YOLOv8.

Substitui o yolo_simulation.py mantendo o MESMO contrato de topicos, entao o
soccer_ipm continua funcionando sem alteracao:

  entrada : /AUREA/camera_optical_frame/image_color   (sensor_msgs/Image)
  saida   : markings_in_image        (soccer_vision_2d_msgs/MarkingArray)
            field_boundary_in_image  (soccer_vision_2d_msgs/FieldBoundary)
            processed_image_topic    (sensor_msgs/Image, overlay de debug)

O soccer_ipm ja tem o map_marking_array e o map_field_boundary implementados,
entao a saida sai projetada no chao em markings_relative / field_boundary_relative
sem escrever uma linha de IPM.

Diferenca importante em relacao ao no do YOLO: a segmentacao produz SEGMENTOS de
linha (MarkingSegment), nao so intersecoes. O no do YOLO so preenchia
msg_int.intersections. Aqui preenchemos segments E intersections.
"""

import threading

import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data

import cv2
import numpy as np
import traceback
from cv_bridge import CvBridge
from sensor_msgs.msg import Image as ROS_Image
import soccer_vision_2d_msgs.msg as sv2dm
from vision_msgs.msg import Point2D

from Webots_YOLOv8.segment_adapter import SegmentadorDeFrame


class SegmentacaoSimulacao(Node):

    def __init__(self):
        super().__init__('segmentation_node')

        self.declare_parameter('caminho_main', '')
        self.declare_parameter('lut_verde_csv', '')
        self.declare_parameter('branco_lower', [0, 0, 200])
        self.declare_parameter('branco_up', [179, 40, 255])
        self.declare_parameter('largura_processamento', 752)
        self.declare_parameter('altura_processamento', 480)
        self.declare_parameter('tpix', 20)
        self.declare_parameter('trow', 10000)
        self.declare_parameter('twin', 3000)
        self.declare_parameter('dilatar_s', 6)
        self.declare_parameter('dilatar_v', 10)
        self.declare_parameter('mostrar_janela', True)
        self.declare_parameter('topico_camera', '/AUREA/camera_optical_frame/image_color')
        self.declare_parameter('confianca', 0.8)

        p = self.get_parameter
        self.confianca = float(p('confianca').value)
        self.mostrar_janela = bool(p('mostrar_janela').value)

        self.segmentador = SegmentadorDeFrame(
            caminho_main=p('caminho_main').value,
            lut_verde_csv=p('lut_verde_csv').value,
            branco_lower=tuple(p('branco_lower').value),
            branco_up=tuple(p('branco_up').value),
            largura_processamento=p('largura_processamento').value,
            altura_processamento=p('altura_processamento').value,
            tpix=p('tpix').value,
            trow=p('trow').value,
            twin=p('twin').value,
            dilatar_s=p('dilatar_s').value,
            dilatar_v=p('dilatar_v').value,
        )
        self.get_logger().info(
            f'segmentacao pronta | processando em '
            f'{self.segmentador.largura_proc}x{self.segmentador.altura_proc} '
            f'| trow efetivo = {self.segmentador.trow:.0f}')

        self.bridge = CvBridge()

        # so processa um frame por vez: se o pipeline atrasar, os frames velhos
        # sao descartados em vez de acumular fila e desincronizar o tf do IPM
        self._processando = threading.Lock()

        self.create_subscription(
            ROS_Image, p('topico_camera').value,
            self.image_callback, qos_profile_sensor_data)

        self.pub_markings = self.create_publisher(sv2dm.MarkingArray, 'markings_in_image', 1)
        self.pub_boundary = self.create_publisher(sv2dm.FieldBoundary, 'field_boundary_in_image', 1)
        self.pub_debug = self.create_publisher(ROS_Image, 'processed_image_topic', 1)

        self.n_frames = 0
        self.n_descartados = 0

    def image_callback(self, ros_image_msg):
        if not self._processando.acquire(blocking=False):
            self.n_descartados += 1
            return
        try:
            frame = self.bridge.imgmsg_to_cv2(ros_image_msg, desired_encoding='bgr8')
            if frame.ndim == 3 and frame.shape[2] == 4:
                frame = cv2.cvtColor(frame, cv2.COLOR_BGRA2BGR)
            frame = np.ascontiguousarray(frame, dtype=np.uint8)

            desenhar = self.mostrar_janela or self.pub_debug.get_subscription_count() > 0
            resultado = self.segmentador.processar(frame, desenhar_debug=desenhar)

            header = ros_image_msg.header

            # --- markings (segmentos + intersecoes) ---
            msg_mark = sv2dm.MarkingArray(header=header)

            for (x1, y1), (x2, y2) in resultado['linhas']:
                seg = sv2dm.MarkingSegment()
                seg.start = Point2D(x=float(x1), y=float(y1))
                seg.end = Point2D(x=float(x2), y=float(y2))
                seg.confidence.confidence = self.confianca
                msg_mark.segments.append(seg)

            for c in resultado['cruzamentos']:
                if c['num_rays'] == 0:
                    continue
                inter = sv2dm.MarkingIntersection()
                inter.center = Point2D(x=float(c['x']), y=float(c['y']))
                inter.num_rays = int(c['num_rays'])
                # heading_rays vazio: o pipeline classifica o tipo mas nao
                # exporta os angulos dos ramos. O soccer_ipm aceita lista vazia.
                inter.heading_rays = []
                inter.confidence.confidence = self.confianca
                msg_mark.intersections.append(inter)

            self.pub_markings.publish(msg_mark)

            # --- borda do campo ---
            msg_bound = sv2dm.FieldBoundary(header=header)
            msg_bound.points = [Point2D(x=float(x), y=float(y))
                                for x, y in resultado['borda_campo']]
            msg_bound.confidence.confidence = self.confianca
            self.pub_boundary.publish(msg_bound)

            # --- debug ---
            if resultado['debug'] is not None:
                self.pub_debug.publish(
                    self.bridge.cv2_to_imgmsg(resultado['debug'], 'bgr8'))
                if self.mostrar_janela:
                    cv2.imshow('segmentacao', resultado['debug'])
                    cv2.waitKey(1)

            self.n_frames += 1
            if self.n_frames % 60 == 0:
                self.get_logger().info(
                    f'{self.n_frames} frames | {self.n_descartados} descartados | '
                    f'ultimo: {len(msg_mark.segments)} segmentos, '
                    f'{len(msg_mark.intersections)} intersecoes')

        except Exception as e:
            self.get_logger().error(f'erro: {type(e).__name__}: {e}\n{traceback.format_exc()}')
        finally:
            self._processando.release()


def main(args=None):
    rclpy.init(args=args)
    node = SegmentacaoSimulacao()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        cv2.destroyAllWindows()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
