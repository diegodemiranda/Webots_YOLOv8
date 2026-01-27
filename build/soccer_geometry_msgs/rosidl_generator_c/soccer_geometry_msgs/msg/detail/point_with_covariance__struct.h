// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_geometry_msgs:msg/PointWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__STRUCT_H_
#define SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/PointWithCovariance in the package soccer_geometry_msgs.
/**
  * This represents a point in free space with uncertainty.
 */
typedef struct soccer_geometry_msgs__msg__PointWithCovariance
{
  geometry_msgs__msg__Point point;
  /// Row-major representation of the 3x3 covariance matrix
  /// The orientation parameters use a fixed-axis representation.
  /// In order, the parameters are:
  /// (x, y, z)
  double covariance[9];
} soccer_geometry_msgs__msg__PointWithCovariance;

// Struct for a sequence of soccer_geometry_msgs__msg__PointWithCovariance.
typedef struct soccer_geometry_msgs__msg__PointWithCovariance__Sequence
{
  soccer_geometry_msgs__msg__PointWithCovariance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_geometry_msgs__msg__PointWithCovariance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__STRUCT_H_
