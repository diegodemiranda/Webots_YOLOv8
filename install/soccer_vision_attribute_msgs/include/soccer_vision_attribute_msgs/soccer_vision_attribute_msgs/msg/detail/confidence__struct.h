// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soccer_vision_attribute_msgs:msg/Confidence.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__CONFIDENCE__STRUCT_H_
#define SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONFIDENCE_UNKNOWN'.
static const float soccer_vision_attribute_msgs__msg__Confidence__CONFIDENCE_UNKNOWN = -1.0f;

/// Struct defined in msg/Confidence in the package soccer_vision_attribute_msgs.
typedef struct soccer_vision_attribute_msgs__msg__Confidence
{
  /// A confidence rating in the range, or -1.0(CONFIDENCE_UNKNOWN) by default.
  /// 0.0 - detection module is 0% sure
  /// 1.0 - detection module is 100% sure
  float confidence;
} soccer_vision_attribute_msgs__msg__Confidence;

// Struct for a sequence of soccer_vision_attribute_msgs__msg__Confidence.
typedef struct soccer_vision_attribute_msgs__msg__Confidence__Sequence
{
  soccer_vision_attribute_msgs__msg__Confidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soccer_vision_attribute_msgs__msg__Confidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__CONFIDENCE__STRUCT_H_
