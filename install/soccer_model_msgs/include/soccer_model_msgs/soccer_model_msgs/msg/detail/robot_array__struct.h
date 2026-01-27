// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_model_msgs:msg/RobotArray.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT_ARRAY__STRUCT_H_
#define SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT_ARRAY__STRUCT_H_

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
// Member 'robots'
#include "soccer_model_msgs/msg/detail/robot__struct.h"

/// Struct defined in msg/RobotArray in the package soccer_model_msgs.
/**
  * An array of robots with a header for global reference.
  * This msg type is used to publish all filtered robots from modelling modules.
 */
typedef struct soccer_model_msgs__msg__RobotArray
{
  std_msgs__msg__Header header;
  soccer_model_msgs__msg__Robot__Sequence robots;
} soccer_model_msgs__msg__RobotArray;

// Struct for a sequence of soccer_model_msgs__msg__RobotArray.
typedef struct soccer_model_msgs__msg__RobotArray__Sequence
{
  soccer_model_msgs__msg__RobotArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_model_msgs__msg__RobotArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT_ARRAY__STRUCT_H_
