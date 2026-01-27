// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_2d_msgs:msg/ObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_2D_MSGS__MSG__DETAIL__OBSTACLE_ARRAY__STRUCT_H_
#define SOCCER_VISION_2D_MSGS__MSG__DETAIL__OBSTACLE_ARRAY__STRUCT_H_

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
// Member 'obstacles'
#include "soccer_vision_2d_msgs/msg/detail/obstacle__struct.h"

/// Struct defined in msg/ObstacleArray in the package soccer_vision_2d_msgs.
/**
  * An array of obstacles with a header for global reference.
  * This msg type is used to publish all obstacles detected in an image.
 */
typedef struct soccer_vision_2d_msgs__msg__ObstacleArray
{
  std_msgs__msg__Header header;
  soccer_vision_2d_msgs__msg__Obstacle__Sequence obstacles;
} soccer_vision_2d_msgs__msg__ObstacleArray;

// Struct for a sequence of soccer_vision_2d_msgs__msg__ObstacleArray.
typedef struct soccer_vision_2d_msgs__msg__ObstacleArray__Sequence
{
  soccer_vision_2d_msgs__msg__ObstacleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_2d_msgs__msg__ObstacleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_2D_MSGS__MSG__DETAIL__OBSTACLE_ARRAY__STRUCT_H_
