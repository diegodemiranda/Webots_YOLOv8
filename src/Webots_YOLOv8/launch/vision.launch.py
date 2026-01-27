# vision.launch.py 

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.conditions import IfCondition, UnlessCondition

def generate_launch_description():
    	
    sim_node = Node(
        package='Webots_YOLOv8',
        executable='finder',
        name='vision_node',
        output='screen',
        emulate_tty=True,
        
    )

    soccer_ipm = Node(
        package='soccer_ipm',
        executable='ipm',
        name='soccer_ipm_node',
        output='screen',
        parameters=[
            {'use_sim_time': True},
            {'output_frame': 'base_link'},
            {'camera_frame': 'camera_optical_frame',},
            {'balls.ball_diameter': 0.14}, 
            {'use_distortion': False},     
            {'balls{.footpoint_out_of_image_threshold': 0.8},
        ],
        remappings=[
            ('camera/image_raw', '/AUREA/camera_optical_frame/image_color'),
            ('camera_info', '/AUREA/camera_optical_frame/camera_info')

        ]

    )
    


    return LaunchDescription([
        sim_node,
        soccer_ipm,
    ])
