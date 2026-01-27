// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_2d_msgs:msg/MarkingEllipse.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_ELLIPSE__STRUCT_H_
#define SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_ELLIPSE__STRUCT_H_

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
// Member 'center'
#include "vision_msgs/msg/detail/point2_d__struct.h"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__struct.h"

/// Struct defined in msg/MarkingEllipse in the package soccer_vision_2d_msgs.
/**
  * Describes a detected ellipse marking from vision modules, in image coordinates.
 */
typedef struct soccer_vision_2d_msgs__msg__MarkingEllipse
{
  /// A bounding box that surrounds the ellipse in the image, this does not have to include
  /// the whole ellipse, but only the part of the ellipse that was detected.
  vision_msgs__msg__BoundingBox2D bb;
  /// Center point of the ellipse in pixel coordinates
  vision_msgs__msg__Point2D center;
  soccer_vision_attribute_msgs__msg__Confidence confidence;
} soccer_vision_2d_msgs__msg__MarkingEllipse;

// Struct for a sequence of soccer_vision_2d_msgs__msg__MarkingEllipse.
typedef struct soccer_vision_2d_msgs__msg__MarkingEllipse__Sequence
{
  soccer_vision_2d_msgs__msg__MarkingEllipse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_2d_msgs__msg__MarkingEllipse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_ELLIPSE__STRUCT_H_
