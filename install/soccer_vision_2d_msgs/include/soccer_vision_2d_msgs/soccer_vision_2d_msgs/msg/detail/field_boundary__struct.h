// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_2d_msgs:msg/FieldBoundary.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_2D_MSGS__MSG__DETAIL__FIELD_BOUNDARY__STRUCT_H_
#define SOCCER_VISION_2D_MSGS__MSG__DETAIL__FIELD_BOUNDARY__STRUCT_H_

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
// Member 'points'
#include "vision_msgs/msg/detail/point2_d__struct.h"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__struct.h"

/// Struct defined in msg/FieldBoundary in the package soccer_vision_2d_msgs.
/**
  * Describes a detected field boundary from vision modules, in image coordinates.
  * The field boundary is defined as the line that separates the field of play, to
  * outside the field of play. Field of play is a sports terminology.
  * Usually, this is where the field carpet ends, or meets a field border.
  * If no field boundary was detected, leave the "points" vector empty.
 */
typedef struct soccer_vision_2d_msgs__msg__FieldBoundary
{
  std_msgs__msg__Header header;
  /// The points along the field boundary detected in the image, are stored as a line strip.
  /// You can think of the field boundary as a line between every two consecutive points,
  /// so 0-1, 1-2, 2-3, 3-4, 4-5...
  /// 2D points (in pixel)
  vision_msgs__msg__Point2D__Sequence points;
  soccer_vision_attribute_msgs__msg__Confidence confidence;
} soccer_vision_2d_msgs__msg__FieldBoundary;

// Struct for a sequence of soccer_vision_2d_msgs__msg__FieldBoundary.
typedef struct soccer_vision_2d_msgs__msg__FieldBoundary__Sequence
{
  soccer_vision_2d_msgs__msg__FieldBoundary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_2d_msgs__msg__FieldBoundary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_2D_MSGS__MSG__DETAIL__FIELD_BOUNDARY__STRUCT_H_
