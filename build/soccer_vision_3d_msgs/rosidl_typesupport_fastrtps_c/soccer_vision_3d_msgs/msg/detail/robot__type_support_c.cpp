// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from soccer_vision_3d_msgs:msg/Robot.idl
// generated code does not contain a copyright notice
#include "soccer_vision_3d_msgs/msg/detail/robot__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "soccer_vision_3d_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "soccer_vision_3d_msgs/msg/detail/robot__struct.h"
#include "soccer_vision_3d_msgs/msg/detail/robot__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "soccer_vision_attribute_msgs/msg/detail/confidence__functions.h"  // confidence
#include "soccer_vision_attribute_msgs/msg/detail/robot__functions.h"  // attributes
#include "vision_msgs/msg/detail/bounding_box3_d__functions.h"  // bb

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_3d_msgs
size_t get_serialized_size_soccer_vision_attribute_msgs__msg__Confidence(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_3d_msgs
size_t max_serialized_size_soccer_vision_attribute_msgs__msg__Confidence(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_3d_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, soccer_vision_attribute_msgs, msg, Confidence)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_3d_msgs
size_t get_serialized_size_soccer_vision_attribute_msgs__msg__Robot(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_3d_msgs
size_t max_serialized_size_soccer_vision_attribute_msgs__msg__Robot(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_3d_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, soccer_vision_attribute_msgs, msg, Robot)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_3d_msgs
size_t get_serialized_size_vision_msgs__msg__BoundingBox3D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_3d_msgs
size_t max_serialized_size_vision_msgs__msg__BoundingBox3D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_3d_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vision_msgs, msg, BoundingBox3D)();


using _Robot__ros_msg_type = soccer_vision_3d_msgs__msg__Robot;

static bool _Robot__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Robot__ros_msg_type * ros_message = static_cast<const _Robot__ros_msg_type *>(untyped_ros_message);
  // Field name: bb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, vision_msgs, msg, BoundingBox3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bb, cdr))
    {
      return false;
    }
  }

  // Field name: attributes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, soccer_vision_attribute_msgs, msg, Robot
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->attributes, cdr))
    {
      return false;
    }
  }

  // Field name: confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, soccer_vision_attribute_msgs, msg, Confidence
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->confidence, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Robot__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Robot__ros_msg_type * ros_message = static_cast<_Robot__ros_msg_type *>(untyped_ros_message);
  // Field name: bb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, vision_msgs, msg, BoundingBox3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bb))
    {
      return false;
    }
  }

  // Field name: attributes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, soccer_vision_attribute_msgs, msg, Robot
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->attributes))
    {
      return false;
    }
  }

  // Field name: confidence
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, soccer_vision_attribute_msgs, msg, Confidence
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->confidence))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soccer_vision_3d_msgs
size_t get_serialized_size_soccer_vision_3d_msgs__msg__Robot(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Robot__ros_msg_type * ros_message = static_cast<const _Robot__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bb

  current_alignment += get_serialized_size_vision_msgs__msg__BoundingBox3D(
    &(ros_message->bb), current_alignment);
  // field.name attributes

  current_alignment += get_serialized_size_soccer_vision_attribute_msgs__msg__Robot(
    &(ros_message->attributes), current_alignment);
  // field.name confidence

  current_alignment += get_serialized_size_soccer_vision_attribute_msgs__msg__Confidence(
    &(ros_message->confidence), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Robot__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_soccer_vision_3d_msgs__msg__Robot(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soccer_vision_3d_msgs
size_t max_serialized_size_soccer_vision_3d_msgs__msg__Robot(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: bb
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_vision_msgs__msg__BoundingBox3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: attributes
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_soccer_vision_attribute_msgs__msg__Robot(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: confidence
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_soccer_vision_attribute_msgs__msg__Confidence(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = soccer_vision_3d_msgs__msg__Robot;
    is_plain =
      (
      offsetof(DataType, confidence) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Robot__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_soccer_vision_3d_msgs__msg__Robot(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Robot = {
  "soccer_vision_3d_msgs::msg",
  "Robot",
  _Robot__cdr_serialize,
  _Robot__cdr_deserialize,
  _Robot__get_serialized_size,
  _Robot__max_serialized_size
};

static rosidl_message_type_support_t _Robot__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Robot,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, soccer_vision_3d_msgs, msg, Robot)() {
  return &_Robot__type_support;
}

#if defined(__cplusplus)
}
#endif
