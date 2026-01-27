// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_3d_msgs:msg/Ball.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__BALL__STRUCT_H_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__BALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__struct.h"

/// Struct defined in msg/Ball in the package soccer_vision_3d_msgs.
/**
  * Describes a detected ball from vision modules, in 3d coordinates.
 */
typedef struct soccer_vision_3d_msgs__msg__Ball
{
  /// Center point of the ball (in meters)
  geometry_msgs__msg__Point center;
  /// Confidence that the detected object is a ball
  soccer_vision_attribute_msgs__msg__Confidence confidence;
} soccer_vision_3d_msgs__msg__Ball;

// Struct for a sequence of soccer_vision_3d_msgs__msg__Ball.
typedef struct soccer_vision_3d_msgs__msg__Ball__Sequence
{
  soccer_vision_3d_msgs__msg__Ball * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_3d_msgs__msg__Ball__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__BALL__STRUCT_H_
