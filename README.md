# Computer Vision, Robot Control & Distance Estimation Pipeline with Webots + ROS 2 + YOLOv8

This project demonstrates an integrated computer vision and robot control pipeline using the **Webots** simulation and the **ROS 2** framework. It allows a virtual robot (**AUREA**) to move, detect objects using **YOLOv8**, and estimate real-world distances using **Inverse Perspective Mapping (IPM)**.

## Features

- **Realistic Simulation**: Uses the **Webots** robotics simulator to create a virtual environment and a mobile robot, AUREA.
- **ROS 2 Communication**: Establishes a bidirectional connection between the Webots simulation and the ROS 2 network, enabling sensor data flow and control command transmission.
- **Object Detection with YOLOv8**: A dedicated ROS 2 node processes the robot's camera video stream to detect objects (Balls, Robots, Goalposts) and draw bounding boxes.
- **Distance Estimation (IPM)**: Implements Inverse Perspective Mapping to convert 2D pixel coordinates from detections into relative 3D coordinates (meters) in the robot's frame.
- **Teleop Control**: Controls the robot's movement and camera pan using keyboard commands.
- **Real-Time Visualization**: The processed image with bounding boxes is published to a window opened with OpenCV.

## Technologies and Dependencies

- **ROS 2 Humble**: Robotic communication middleware.
- **Webots**: Robotics simulation environment.
- **Python 3.10**: Main language for the nodes.
- **YOLOv8 & Ultralytics**: Object detection framework.
- **OpenCV & cv_bridge**: Image processing and ROS ↔ OpenCV integration.
- **IPM (Inverse Perspective Mapping)**: Technique used for projecting 2D image points to a 3D ground plane.

## Project Structure

The project consists of the main ROS 2 packages and dependencies:

- **`my_package`**
  - Contains the robot driver for Webots (`my_robot_driver.py`) and configuration files.
  - Also contains the robot control node (`keyboard_teleop.py`).
  - Manages the connection with the simulation.

- **`Webots_YOLOv8`**
  - Contains the computer vision node (`yolo_simulation.py`).
  - Uses YOLOv8 for object detection.
  - Publishes bounding boxes, processed images, and integrates with IPM logic.

- **`soccer_ipm` & `soccer_interfaces`** (Submodules)
  - Handles the mathematical projection from pixels to meters and defines custom ROS messages.

## How to Run

### Prerequisites
- **Webots** installed (version compatible with ROS 2 Humble).
- **ROS 2 Humble** installed and configured.
- A **ROS 2 workspace** (e.g., `~/ros2_ws`).

### 1. Clone the Repository
Clone the repository into the folder of your workspace:
```bash
cd ~/ros2_ws
git clone [https://github.com/ivan-josef/Webots_YOLOv8.git](https://github.com/ivan-josef/Webots_YOLOv8.git)
```

### 2. Add the YOLOv8 Model
Download your best.pt model and save it in the model folder of the Webots_YOLOv8 package.

### 3. Build de project 
```bash
cd ~/ros2_ws
colcon build
```

### 4. Setup the Environment 
```bash
source install/setup.bash
```

### 5. Run the pipeline 
open 3 terminals and run 

- Terminal 1 - robot driver and simulation
```bash
ros2 launch my_package robot_launch.py
```

- Terminal 2 - detection node and IPM
```bash
ros2 launch Webots_YOLOv8 vision.launch.py
```

- Terminal 3 - teleop control
```bash
ros2 run my_package keyboard_controller
```

### 6. View Distance Data (IPM)

To visualize the calculated distances (in meters) for detected objects in real-time, use the CLI tool to echo the topics:

first you chan choose de topic

```bash
ros2 topic list
```

All topics ending in "relative" are measures of distance from the IPM.

For Balls:

```bash
ros2 topic echo /balls_relative
```



![](https://github.com/ivan-josef/Webots_YOLOv8/blob/main/image/Screenshot%20from%202025-12-09%2022-13-23.png)

Note that the robot was designed to facilitate model testing.

## Bit-Bots-inspired vision pipeline (field boundary, obstacles, line points)

`Webots_YOLOv8/pipeline/` holds a pipe-and-filter vision pipeline inspired by *"An Open Source Vision Pipeline Approach for RoboCup Humanoid Soccer"* (Hamburg Bit-Bots). It runs inside the same `vision_node` as YOLOv8 and does not depend on ROS (`pytest` runs it standalone).

```
camera image ──▶ YOLOv8 ───────────────▶ balls / goal_posts / robots / markings_in_image ─┐
      │                                                                                    ├─▶ soccer_ipm ─▶ *_relative (m)
      └─▶ pipeline: field boundary ─────▶ field_boundary_in_image ─────────────────────────┤
                    obstacles ──────────▶ obstacles_in_image (minus what YOLO explains) ───┘
                    line points ────────▶ IPM (ipm_library) ─▶ line_points_relative (PointCloud2, base_link)
```

| Topic | Type | Frame / units |
|---|---|---|
| `field_boundary_in_image` | `soccer_vision_2d_msgs/FieldBoundary` | pixels (1080x720) → `soccer_ipm` → `field_boundary_relative` |
| `obstacles_in_image` | `soccer_vision_2d_msgs/ObstacleArray` | pixels → `soccer_ipm` → `obstacles_relative` |
| `line_points_relative` | `sensor_msgs/PointCloud2` | meters, `base_link` |

Notes:
- Obstacles already explained by a YOLO ball/goalpost/robot/crossbar box are dropped (`pipeline.fuse_with_yolo`), and line points falling on those boxes are discarded.
- Points above the horizon cannot be projected onto the ground plane (the camera is horizontal), so they are skipped by the IPM.
- An empty `FieldBoundary` is never published (`soccer_ipm` fails on 0 points).

Run (same commands as before; the launch now accepts arguments):
```bash
ros2 launch Webots_YOLOv8 vision.launch.py                       # defaults
ros2 launch Webots_YOLOv8 vision.launch.py show_window:=false    # headless
ros2 launch Webots_YOLOv8 vision.launch.py use_pipeline:=false   # YOLO only
```

Tuning (all runtime-changeable; defaults live in `config/vision_pipeline.yaml`):
```bash
ros2 param get /vision_node hsv.field_min
ros2 param set /vision_node hsv.field_min "[48, 100, 70]"
ros2 param set /vision_node pipeline.column_step 2
ros2 topic echo /line_points_relative --once
```
HSV ranges are derived from `recursos/green_pixels.csv` (+ margin) and the white thresholds in `def_white_threshold.py`. Check them against the orange boundary / cyan line points in the debug window (`processed_image_topic`).

Offline test on a saved frame, and unit tests:
```bash
python -m Webots_YOLOv8.pipeline.main_pipeline frame.png recursos/hsv_classes.csv   # writes debug_output.jpg
pytest src/Webots_YOLOv8/test/test_vision_pipeline.py
```
