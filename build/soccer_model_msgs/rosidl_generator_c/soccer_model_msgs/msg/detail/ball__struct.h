// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_model_msgs:msg/Ball.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_MODEL_MSGS__MSG__DETAIL__BALL__STRUCT_H_
#define SOCCER_MODEL_MSGS__MSG__DETAIL__BALL__STRUCT_H_

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
// Member 'point'
#include "soccer_geometry_msgs/msg/detail/point_with_covariance__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"

/// Struct defined in msg/Ball in the package soccer_model_msgs.
/**
  * Describes a filtered ball from modelling modules, in 3d coordinates, with a header for global reference.
  * This msg type is used to publish all filtered balls from modelling modules.
 */
typedef struct soccer_model_msgs__msg__Ball
{
  std_msgs__msg__Header header;
  soccer_geometry_msgs__msg__PointWithCovariance point;
  geometry_msgs__msg__TwistWithCovariance twist;
} soccer_model_msgs__msg__Ball;

// Struct for a sequence of soccer_model_msgs__msg__Ball.
typedef struct soccer_model_msgs__msg__Ball__Sequence
{
  soccer_model_msgs__msg__Ball * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_model_msgs__msg__Ball__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_MODEL_MSGS__MSG__DETAIL__BALL__STRUCT_H_
