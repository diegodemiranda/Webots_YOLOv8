// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_2d_msgs:msg/MarkingIntersection.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__STRUCT_H_
#define SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "vision_msgs/msg/detail/point2_d__struct.h"
// Member 'heading_rays'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__struct.h"

/// Struct defined in msg/MarkingIntersection in the package soccer_vision_2d_msgs.
/**
  * Describes a detected marking intersection from vision modules, in image coordinates.
  * An intersection is defined as a point where two or more line markings intersect.
  * The term ray is used to describe the outgoing rays from the center of the
  * intersection.
  *
  * For example, looking down at a perfectly upright T-intersection on the ground from above, you would have:
  * - num_rays = 3
  * - heading_rays = [0, pi / 2, pi]
 */
typedef struct soccer_vision_2d_msgs__msg__MarkingIntersection
{
  /// Center point of the intersection, in pixel coordinates
  vision_msgs__msg__Point2D center;
  /// The number of rays outgoing from an intersection. This is 3 for a T-Junction and
  /// 4 for an X-Junction
  int32_t num_rays;
  /// NOTE: The length of the array should either:
  /// - Match the number of rays specified with num_rays OR
  /// - Be empty, if the headings are unknown
  /// Heading is defined as 0 along the +x axis, and pi / 2 along the +y axis.
  /// Headings should:
  /// - have an interval of [0, 2pi)
  /// - be stored in ascending order
  rosidl_runtime_c__double__Sequence heading_rays;
  soccer_vision_attribute_msgs__msg__Confidence confidence;
} soccer_vision_2d_msgs__msg__MarkingIntersection;

// Struct for a sequence of soccer_vision_2d_msgs__msg__MarkingIntersection.
typedef struct soccer_vision_2d_msgs__msg__MarkingIntersection__Sequence
{
  soccer_vision_2d_msgs__msg__MarkingIntersection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_2d_msgs__msg__MarkingIntersection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__STRUCT_H_
