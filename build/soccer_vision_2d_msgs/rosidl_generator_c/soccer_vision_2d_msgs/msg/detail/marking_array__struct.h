// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_2d_msgs:msg/MarkingArray.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_ARRAY__STRUCT_H_
#define SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_ARRAY__STRUCT_H_

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
// Member 'ellipses'
#include "soccer_vision_2d_msgs/msg/detail/marking_ellipse__struct.h"
// Member 'intersections'
#include "soccer_vision_2d_msgs/msg/detail/marking_intersection__struct.h"
// Member 'segments'
#include "soccer_vision_2d_msgs/msg/detail/marking_segment__struct.h"

/// Struct defined in msg/MarkingArray in the package soccer_vision_2d_msgs.
/**
  * An array of markings with a header for global reference.
  * This msg type is used to publish all markings detected in an image.
 */
typedef struct soccer_vision_2d_msgs__msg__MarkingArray
{
  std_msgs__msg__Header header;
  soccer_vision_2d_msgs__msg__MarkingEllipse__Sequence ellipses;
  soccer_vision_2d_msgs__msg__MarkingIntersection__Sequence intersections;
  soccer_vision_2d_msgs__msg__MarkingSegment__Sequence segments;
} soccer_vision_2d_msgs__msg__MarkingArray;

// Struct for a sequence of soccer_vision_2d_msgs__msg__MarkingArray.
typedef struct soccer_vision_2d_msgs__msg__MarkingArray__Sequence
{
  soccer_vision_2d_msgs__msg__MarkingArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_2d_msgs__msg__MarkingArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_ARRAY__STRUCT_H_
