// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_2d_msgs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_2D_MSGS__MSG__DETAIL__ROBOT__STRUCT_H_
#define SOCCER_VISION_2D_MSGS__MSG__DETAIL__ROBOT__STRUCT_H_

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
#include "vision_msgs/msg/detail/bounding_box2_d__struct.h"
// Member 'attributes'
#include "soccer_vision_attribute_msgs/msg/detail/robot__struct.h"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__struct.h"

/// Struct defined in msg/Robot in the package soccer_vision_2d_msgs.
/**
  * Describes a detected robot from vision modules, in image coordinates.
 */
typedef struct soccer_vision_2d_msgs__msg__Robot
{
  /// A bounding box that surrounds the robot in the image, this does not have to include
  /// the whole robot, but only the part of the robot that was detected.
  vision_msgs__msg__BoundingBox2D bb;
  soccer_vision_attribute_msgs__msg__Robot attributes;
  soccer_vision_attribute_msgs__msg__Confidence confidence;
} soccer_vision_2d_msgs__msg__Robot;

// Struct for a sequence of soccer_vision_2d_msgs__msg__Robot.
typedef struct soccer_vision_2d_msgs__msg__Robot__Sequence
{
  soccer_vision_2d_msgs__msg__Robot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_2d_msgs__msg__Robot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_2D_MSGS__MSG__DETAIL__ROBOT__STRUCT_H_
