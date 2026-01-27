// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_3d_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bb'
#include "vision_msgs/msg/detail/bounding_box3_d__struct.h"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__struct.h"

/// Struct defined in msg/Obstacle in the package soccer_vision_3d_msgs.
/**
  * Describes a detected obstacle from vision modules, in 3d coordinates.
  * An Obstacle is defined as anything observed on the field that could not be classified as
  * one of the known types (such as Robot or Goalpost).
 */
typedef struct soccer_vision_3d_msgs__msg__Obstacle
{
  /// A bounding box that surrounds the obstacle, this does not have to include
  /// the whole obstacle, but only the part of the obstacle that was detected.
  vision_msgs__msg__BoundingBox3D bb;
  soccer_vision_attribute_msgs__msg__Confidence confidence;
} soccer_vision_3d_msgs__msg__Obstacle;

// Struct for a sequence of soccer_vision_3d_msgs__msg__Obstacle.
typedef struct soccer_vision_3d_msgs__msg__Obstacle__Sequence
{
  soccer_vision_3d_msgs__msg__Obstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_3d_msgs__msg__Obstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
