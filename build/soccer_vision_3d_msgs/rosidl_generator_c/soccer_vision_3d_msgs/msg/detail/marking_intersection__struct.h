// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_3d_msgs:msg/MarkingIntersection.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__STRUCT_H_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__STRUCT_H_

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
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'rays'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__struct.h"

/// Struct defined in msg/MarkingIntersection in the package soccer_vision_3d_msgs.
/**
  * Describes a detected marking intersection from vision modules, in 3d coordinates.
  * An intersection is defined as a point where two or more line markings intersect.
  * The term ray is used to describe the outgoing rays from the center of the
  * intersection.
 */
typedef struct soccer_vision_3d_msgs__msg__MarkingIntersection
{
  /// Center point of the intersection
  geometry_msgs__msg__Point center;
  /// The number of rays outgoing from an intersection. This is 3 for a T-Junction and
  /// 4 for an X-Junction
  int32_t num_rays;
  /// NOTE: The length of the array should either:
  /// - Match the number of rays specified with num_rays OR
  /// - Be empty, if the headings are unknown
  geometry_msgs__msg__Vector3__Sequence rays;
  soccer_vision_attribute_msgs__msg__Confidence confidence;
} soccer_vision_3d_msgs__msg__MarkingIntersection;

// Struct for a sequence of soccer_vision_3d_msgs__msg__MarkingIntersection.
typedef struct soccer_vision_3d_msgs__msg__MarkingIntersection__Sequence
{
  soccer_vision_3d_msgs__msg__MarkingIntersection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_3d_msgs__msg__MarkingIntersection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__STRUCT_H_
