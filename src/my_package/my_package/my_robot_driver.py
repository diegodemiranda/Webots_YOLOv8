import rclpy
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64
from sensor_msgs.msg import JointState

# A partir da análise do arquivo .wbt
HALF_DISTANCE_BETWEEN_WHEELS = 0.06
WHEEL_RADIUS = 0.04

class MyRobotDriver:
    def init(self, webots_node, properties):
        self.__robot = webots_node.robot

        # Corrigindo os nomes dos motores para corresponderem ao arquivo Webots
        self.__motor_1 = self.__robot.getDevice('wheel_fl_motor')
        self.__motor_2 = self.__robot.getDevice('wheel_fr_motor')
        self.__motor_3 = self.__robot.getDevice('wheel_rl_motor')
        self.__motor_4 = self.__robot.getDevice('wheel_rr_motor')

        # Configura os motores para controle de velocidade
        self.__motor_1.setPosition(float('inf'))
        self.__motor_2.setPosition(float('inf'))
        self.__motor_3.setPosition(float('inf'))
        self.__motor_4.setPosition(float('inf'))
        
        self.__motor_1.setVelocity(0)
        self.__motor_2.setVelocity(0)
        self.__motor_3.setVelocity(0)
        self.__motor_4.setVelocity(0)

        # Motor da câmera
        self.__camera_motor = self.__robot.getDevice('cam_pan_motor')
        self.__camera_motor.setPosition(float('inf'))
        self.__camera_motor.setVelocity(0)

        # sensores 

        self.__timestep = int(self.__robot.getBasicTimeStep())

        self.__sensor_1 = self.__robot.getDevice('wheel_fl_sensor')
        self.__sensor_2 = self.__robot.getDevice('wheel_fr_sensor')
        self.__sensor_3 = self.__robot.getDevice('wheel_rl_sensor')
        self.__sensor_4 = self.__robot.getDevice('wheel_rr_sensor')
        self.__camera_sensor = self.__robot.getDevice('cam_pan_sensor')

        self.__sensor_1.enable(self.__timestep)
        self.__sensor_2.enable(self.__timestep)
        self.__sensor_3.enable(self.__timestep)
        self.__sensor_4.enable(self.__timestep)
        self.__camera_sensor.enable(self.__timestep)

        self.__target_twist = Twist()
        self.__target_cam_pan_velocity = 0.0

        rclpy.init(args=None)
        self.__node = rclpy.create_node('my_robot_driver')
        self.__node.create_subscription(Twist, 'cmd_vel', self.__cmd_vel_callback, 1)
        self.__node.create_subscription(Float64, 'cam_pan_cmd', self.__cam_pan_callback, 1)
        self.__joint_state_pub = self.__node.create_publisher(JointState, '/joint_states',10)

    def __cmd_vel_callback(self, twist):
        self.__target_twist = twist

    def __cam_pan_callback(self, msg):
        self.__target_cam_pan_velocity = msg.data

    def step(self):
        rclpy.spin_once(self.__node, timeout_sec=0)

        # Controle das rodas
        forward_speed = self.__target_twist.linear.x
        angular_speed = self.__target_twist.angular.z

        # Lógica para 4 rodas (diferencial)
        # Rodas da frente e de trás no mesmo lado devem ter a mesma velocidade
        left_wheel_speed = (forward_speed - angular_speed * HALF_DISTANCE_BETWEEN_WHEELS) / WHEEL_RADIUS
        right_wheel_speed = (forward_speed + angular_speed * HALF_DISTANCE_BETWEEN_WHEELS) / WHEEL_RADIUS

        self.__motor_1.setVelocity(left_wheel_speed)
        self.__motor_3.setVelocity(left_wheel_speed)
        self.__motor_2.setVelocity(right_wheel_speed)
        self.__motor_4.setVelocity(right_wheel_speed)

        # Controle da câmera
        self.__camera_motor.setVelocity(self.__target_cam_pan_velocity)

        msg = JointState()
        msg.header.stamp = self.__node.get_clock().now().to_msg()

        msg.name = [
            'wheel_fl_motor','wheel_fr_motor','wheel_rl_motor','wheel_rr_motor','camera_pan_motor'
        ]

        msg.position = [
            self.__sensor_1.getValue(),
            self.__sensor_2.getValue(),
            self.__sensor_3.getValue(),
            self.__sensor_4.getValue(),
            self.__camera_sensor.getValue()

        ]

        self.__joint_state_pub.publish(msg)

