// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from soccer_vision_attribute_msgs:msg/Goalpost.idl
// generated code does not contain a copyright notice
#include "soccer_vision_attribute_msgs/msg/detail/goalpost__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "soccer_vision_attribute_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "soccer_vision_attribute_msgs/msg/detail/goalpost__struct.h"
#include "soccer_vision_attribute_msgs/msg/detail/goalpost__functions.h"
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


// forward declare type support functions


using _Goalpost__ros_msg_type = soccer_vision_attribute_msgs__msg__Goalpost;

static bool _Goalpost__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Goalpost__ros_msg_type * ros_message = static_cast<const _Goalpost__ros_msg_type *>(untyped_ros_message);
  // Field name: side
  {
    cdr << ros_message->side;
  }

  // Field name: team
  {
    cdr << ros_message->team;
  }

  return true;
}

static bool _Goalpost__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Goalpost__ros_msg_type * ros_message = static_cast<_Goalpost__ros_msg_type *>(untyped_ros_message);
  // Field name: side
  {
    cdr >> ros_message->side;
  }

  // Field name: team
  {
    cdr >> ros_message->team;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soccer_vision_attribute_msgs
size_t get_serialized_size_soccer_vision_attribute_msgs__msg__Goalpost(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Goalpost__ros_msg_type * ros_message = static_cast<const _Goalpost__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name side
  {
    size_t item_size = sizeof(ros_message->side);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name team
  {
    size_t item_size = sizeof(ros_message->team);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Goalpost__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_soccer_vision_attribute_msgs__msg__Goalpost(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soccer_vision_attribute_msgs
size_t max_serialized_size_soccer_vision_attribute_msgs__msg__Goalpost(
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

  // member: side
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: team
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = soccer_vision_attribute_msgs__msg__Goalpost;
    is_plain =
      (
      offsetof(DataType, team) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Goalpost__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_soccer_vision_attribute_msgs__msg__Goalpost(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Goalpost = {
  "soccer_vision_attribute_msgs::msg",
  "Goalpost",
  _Goalpost__cdr_serialize,
  _Goalpost__cdr_deserialize,
  _Goalpost__get_serialized_size,
  _Goalpost__max_serialized_size
};

static rosidl_message_type_support_t _Goalpost__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Goalpost,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, soccer_vision_attribute_msgs, msg, Goalpost)() {
  return &_Goalpost__type_support;
}

#if defined(__cplusplus)
}
#endif
