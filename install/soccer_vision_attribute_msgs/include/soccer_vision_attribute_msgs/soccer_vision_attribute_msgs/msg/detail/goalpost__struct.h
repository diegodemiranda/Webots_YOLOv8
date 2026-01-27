// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_attribute_msgs:msg/Goalpost.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__GOALPOST__STRUCT_H_
#define SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__GOALPOST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SIDE_UNKNOWN'.
enum
{
  soccer_vision_attribute_msgs__msg__Goalpost__SIDE_UNKNOWN = 0
};

/// Constant 'SIDE_LEFT'.
enum
{
  soccer_vision_attribute_msgs__msg__Goalpost__SIDE_LEFT = 1
};

/// Constant 'SIDE_RIGHT'.
enum
{
  soccer_vision_attribute_msgs__msg__Goalpost__SIDE_RIGHT = 2
};

/// Constant 'TEAM_UNKNOWN'.
enum
{
  soccer_vision_attribute_msgs__msg__Goalpost__TEAM_UNKNOWN = 0
};

/// Constant 'TEAM_OWN'.
enum
{
  soccer_vision_attribute_msgs__msg__Goalpost__TEAM_OWN = 1
};

/// Constant 'TEAM_OPPONENT'.
enum
{
  soccer_vision_attribute_msgs__msg__Goalpost__TEAM_OPPONENT = 2
};

/// Struct defined in msg/Goalpost in the package soccer_vision_attribute_msgs.
typedef struct soccer_vision_attribute_msgs__msg__Goalpost
{
  /// Whether the post is a left or right post, when looking INTO the goal.
  /// Value can be SIDE_UNKNOWN, SIDE_LEFT or SIDE_RIGHT
  uint8_t side;
  /// Which team's goal, the goalpost is part of. A team's goal is the one
  /// they have to defend. This can be useful if the two goals have different colors,
  /// and you know whether you're looking at your own or opponent's goal.
  /// Value can be TEAM_UNKNOWN, TEAM_OWN or TEAM_OPPONENT
  uint8_t team;
} soccer_vision_attribute_msgs__msg__Goalpost;

// Struct for a sequence of soccer_vision_attribute_msgs__msg__Goalpost.
typedef struct soccer_vision_attribute_msgs__msg__Goalpost__Sequence
{
  soccer_vision_attribute_msgs__msg__Goalpost * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_attribute_msgs__msg__Goalpost__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__GOALPOST__STRUCT_H_
