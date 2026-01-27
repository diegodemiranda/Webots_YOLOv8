// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_attribute_msgs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__ROBOT__STRUCT_H_
#define SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NUMBER_UNKNOWN'.
enum
{
  soccer_vision_attribute_msgs__msg__Robot__NUMBER_UNKNOWN = 0
};

/// Constant 'TEAM_UNKNOWN'.
enum
{
  soccer_vision_attribute_msgs__msg__Robot__TEAM_UNKNOWN = 0
};

/// Constant 'TEAM_OWN'.
enum
{
  soccer_vision_attribute_msgs__msg__Robot__TEAM_OWN = 1
};

/// Constant 'TEAM_OPPONENT'.
enum
{
  soccer_vision_attribute_msgs__msg__Robot__TEAM_OPPONENT = 2
};

/// Constant 'STATE_UNKNOWN'.
enum
{
  soccer_vision_attribute_msgs__msg__Robot__STATE_UNKNOWN = 0
};

/// Constant 'STATE_STANDING'.
enum
{
  soccer_vision_attribute_msgs__msg__Robot__STATE_STANDING = 1
};

/// Constant 'STATE_FALLEN'.
enum
{
  soccer_vision_attribute_msgs__msg__Robot__STATE_FALLEN = 2
};

/// Constant 'STATE_KICKING'.
enum
{
  soccer_vision_attribute_msgs__msg__Robot__STATE_KICKING = 3
};

/// Constant 'STATE_INACTIVE'.
enum
{
  soccer_vision_attribute_msgs__msg__Robot__STATE_INACTIVE = 4
};

/// Constant 'FACING_UNKNOWN'.
enum
{
  soccer_vision_attribute_msgs__msg__Robot__FACING_UNKNOWN = 0
};

/// Constant 'FACING_THIS_WAY'.
enum
{
  soccer_vision_attribute_msgs__msg__Robot__FACING_THIS_WAY = 1
};

/// Constant 'FACING_AWAY'.
enum
{
  soccer_vision_attribute_msgs__msg__Robot__FACING_AWAY = 2
};

/// Constant 'FACING_LEFT'.
enum
{
  soccer_vision_attribute_msgs__msg__Robot__FACING_LEFT = 3
};

/// Constant 'FACING_RIGHT'.
enum
{
  soccer_vision_attribute_msgs__msg__Robot__FACING_RIGHT = 4
};

/// Struct defined in msg/Robot in the package soccer_vision_attribute_msgs.
typedef struct soccer_vision_attribute_msgs__msg__Robot
{
  /// The number of the robot, if it can be read from the image.
  /// Values can range from NUMBER_UNKNOWN(0) up to 255.
  uint8_t player_number;
  /// Which team's robot it is.
  /// Value can be TEAM_UNKNOWN, TEAM_OWN or TEAM_OPPONENT
  uint8_t team;
  /// State of the robot.
  /// Value can be one of the STATE_* constants defined in this msg
  uint8_t state;
  /// An approximate direction the robot is facing in the image.
  /// Value can be one of the FACING_* constants defined in this msg
  uint8_t facing;
} soccer_vision_attribute_msgs__msg__Robot;

// Struct for a sequence of soccer_vision_attribute_msgs__msg__Robot.
typedef struct soccer_vision_attribute_msgs__msg__Robot__Sequence
{
  soccer_vision_attribute_msgs__msg__Robot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_attribute_msgs__msg__Robot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__ROBOT__STRUCT_H_
