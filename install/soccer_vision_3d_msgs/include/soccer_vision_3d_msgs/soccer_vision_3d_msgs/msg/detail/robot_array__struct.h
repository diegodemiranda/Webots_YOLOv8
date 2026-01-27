// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_3d_msgs:msg/RobotArray.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__ROBOT_ARRAY__STRUCT_H_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__ROBOT_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'robots'
#include "soccer_vision_3d_msgs/msg/detail/robot__struct.h"

/// Struct defined in msg/RobotArray in the package soccer_vision_3d_msgs.
/**
  * An array of robots with a header for global reference.
  * This msg type is used to publish all robots detected.
 */
typedef struct soccer_vision_3d_msgs__msg__RobotArray
{
  std_msgs__msg__Header header;
  soccer_vision_3d_msgs__msg__Robot__Sequence robots;
} soccer_vision_3d_msgs__msg__RobotArray;

// Struct for a sequence of soccer_vision_3d_msgs__msg__RobotArray.
typedef struct soccer_vision_3d_msgs__msg__RobotArray__Sequence
{
  soccer_vision_3d_msgs__msg__RobotArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_3d_msgs__msg__RobotArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__ROBOT_ARRAY__STRUCT_H_
