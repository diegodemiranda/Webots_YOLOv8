// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_2d_msgs:msg/MarkingSegment.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_SEGMENT__STRUCT_H_
#define SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_SEGMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start'
// Member 'end'
#include "vision_msgs/msg/detail/point2_d__struct.h"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__struct.h"

/// Struct defined in msg/MarkingSegment in the package soccer_vision_2d_msgs.
/**
  * Describes a detected straight segment marking from vision modules, in image coordinates.
  * Note that curved segments can be approximated with a number of small segments, using
  * this msg.
 */
typedef struct soccer_vision_2d_msgs__msg__MarkingSegment
{
  /// Two points defining the ends of the segment.
  /// The points should be located at the centre along the width of the segment marking.
  vision_msgs__msg__Point2D start;
  vision_msgs__msg__Point2D end;
  soccer_vision_attribute_msgs__msg__Confidence confidence;
} soccer_vision_2d_msgs__msg__MarkingSegment;

// Struct for a sequence of soccer_vision_2d_msgs__msg__MarkingSegment.
typedef struct soccer_vision_2d_msgs__msg__MarkingSegment__Sequence
{
  soccer_vision_2d_msgs__msg__MarkingSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_2d_msgs__msg__MarkingSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_SEGMENT__STRUCT_H_
