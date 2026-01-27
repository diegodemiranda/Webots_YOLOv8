// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_3d_msgs:msg/BallArray.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__BALL_ARRAY__STRUCT_H_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__BALL_ARRAY__STRUCT_H_

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
// Member 'balls'
#include "soccer_vision_3d_msgs/msg/detail/ball__struct.h"

/// Struct defined in msg/BallArray in the package soccer_vision_3d_msgs.
/**
  * An array of balls with a header for global reference.
  * This msg type is used to publish all balls detected.
 */
typedef struct soccer_vision_3d_msgs__msg__BallArray
{
  std_msgs__msg__Header header;
  soccer_vision_3d_msgs__msg__Ball__Sequence balls;
} soccer_vision_3d_msgs__msg__BallArray;

// Struct for a sequence of soccer_vision_3d_msgs__msg__BallArray.
typedef struct soccer_vision_3d_msgs__msg__BallArray__Sequence
{
  soccer_vision_3d_msgs__msg__BallArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_3d_msgs__msg__BallArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__BALL_ARRAY__STRUCT_H_
