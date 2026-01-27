// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_model_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_MODEL_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
#define SOCCER_MODEL_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_

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

/// Struct defined in msg/Obstacle in the package soccer_model_msgs.
/**
  * Describes a filtered obstacle from modelling modules, in 3d coordinates.
  * An Obstacle is defined as anything on the field that could not be classified as
  * one of the known types (such as Robot or Goalpost).
 */
typedef struct soccer_model_msgs__msg__Obstacle
{
  geometry_msgs__msg__PoseWithCovariance pose;
  geometry_msgs__msg__TwistWithCovariance twist;
} soccer_model_msgs__msg__Obstacle;

// Struct for a sequence of soccer_model_msgs__msg__Obstacle.
typedef struct soccer_model_msgs__msg__Obstacle__Sequence
{
  soccer_model_msgs__msg__Obstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_model_msgs__msg__Obstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_MODEL_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_H_
