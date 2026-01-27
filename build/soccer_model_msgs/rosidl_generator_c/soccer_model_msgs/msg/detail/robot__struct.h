// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_model_msgs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT__STRUCT_H_
#define SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"
// Member 'attributes'
#include "soccer_vision_attribute_msgs/msg/detail/robot__struct.h"

/// Struct defined in msg/Robot in the package soccer_model_msgs.
/**
  * Describes a filtered robot from modelling modules, in 3d coordinates.
 */
typedef struct soccer_model_msgs__msg__Robot
{
  geometry_msgs__msg__PoseWithCovariance pose;
  geometry_msgs__msg__TwistWithCovariance twist;
  soccer_vision_attribute_msgs__msg__Robot attributes;
} soccer_model_msgs__msg__Robot;

// Struct for a sequence of soccer_model_msgs__msg__Robot.
typedef struct soccer_model_msgs__msg__Robot__Sequence
{
  soccer_model_msgs__msg__Robot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_model_msgs__msg__Robot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT__STRUCT_H_
