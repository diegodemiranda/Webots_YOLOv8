// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_3d_msgs:msg/Goalpost.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__GOALPOST__STRUCT_H_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__GOALPOST__STRUCT_H_

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
#include "vision_msgs/msg/detail/bounding_box3_d__struct.h"
// Member 'attributes'
#include "soccer_vision_attribute_msgs/msg/detail/goalpost__struct.h"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__struct.h"

/// Struct defined in msg/Goalpost in the package soccer_vision_3d_msgs.
/**
  * A bounding box that surrounds the goalpost in 3d space.
  * This does not have to include the whole goalpost, but only the 
  * part of the goalpost that was detected.
 */
typedef struct soccer_vision_3d_msgs__msg__Goalpost
{
  vision_msgs__msg__BoundingBox3D bb;
  soccer_vision_attribute_msgs__msg__Goalpost attributes;
  soccer_vision_attribute_msgs__msg__Confidence confidence;
} soccer_vision_3d_msgs__msg__Goalpost;

// Struct for a sequence of soccer_vision_3d_msgs__msg__Goalpost.
typedef struct soccer_vision_3d_msgs__msg__Goalpost__Sequence
{
  soccer_vision_3d_msgs__msg__Goalpost * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_3d_msgs__msg__Goalpost__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__GOALPOST__STRUCT_H_
