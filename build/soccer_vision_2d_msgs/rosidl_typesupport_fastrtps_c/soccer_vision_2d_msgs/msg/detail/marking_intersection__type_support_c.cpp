// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from soccer_vision_2d_msgs:msg/MarkingIntersection.idl
// generated code does not contain a copyright notice
#include "soccer_vision_2d_msgs/msg/detail/marking_intersection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "soccer_vision_2d_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "soccer_vision_2d_msgs/msg/detail/marking_intersection__struct.h"
#include "soccer_vision_2d_msgs/msg/detail/marking_intersection__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // heading_rays
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // heading_rays
#include "soccer_vision_attribute_msgs/msg/detail/confidence__functions.h"  // confidence
#include "vision_msgs/msg/detail/point2_d__functions.h"  // center

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_2d_msgs
size_t get_serialized_size_soccer_vision_attribute_msgs__msg__Confidence(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_2d_msgs
size_t max_serialized_size_soccer_vision_attribute_msgs__msg__Confidence(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_2d_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, soccer_vision_attribute_msgs, msg, Confidence)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_2d_msgs
size_t get_serialized_size_vision_msgs__msg__Point2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_2d_msgs
size_t max_serialized_size_vision_msgs__msg__Point2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soccer_vision_2d_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vision_msgs, msg, Point2D)();


using _MarkingIntersection__ros_msg_type = soccer_vision_2d_msgs__msg__MarkingIntersection;

static bool _MarkingIntersection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MarkingIntersection__ros_msg_type * ros_message = static_cast<const _MarkingIntersection__ros_msg_type *>(untyped_ros_message);
  // Field name: center
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, vision_msgs, msg, Point2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->center, cdr))
    {
      return false;
    }
  }

  // Field name: num_rays
  {
    cdr << ros_message->num_rays;
  }

  // Field name: heading_rays
  {
    size_t size = ros_message->heading_rays.size;
    auto array_ptr = ros_message->heading_rays.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
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

static bool _MarkingIntersection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MarkingIntersection__ros_msg_type * ros_message = static_cast<_MarkingIntersection__ros_msg_type *>(untyped_ros_message);
  // Field name: center
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, vision_msgs, msg, Point2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->center))
    {
      return false;
    }
  }

  // Field name: num_rays
  {
    cdr >> ros_message->num_rays;
  }

  // Field name: heading_rays
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->heading_rays.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->heading_rays);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->heading_rays, size)) {
      fprintf(stderr, "failed to create array for field 'heading_rays'");
      return false;
    }
    auto array_ptr = ros_message->heading_rays.data;
    cdr.deserializeArray(array_ptr, size);
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soccer_vision_2d_msgs
size_t get_serialized_size_soccer_vision_2d_msgs__msg__MarkingIntersection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MarkingIntersection__ros_msg_type * ros_message = static_cast<const _MarkingIntersection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name center

  current_alignment += get_serialized_size_vision_msgs__msg__Point2D(
    &(ros_message->center), current_alignment);
  // field.name num_rays
  {
    size_t item_size = sizeof(ros_message->num_rays);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_rays
  {
    size_t array_size = ros_message->heading_rays.size;
    auto array_ptr = ros_message->heading_rays.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confidence

  current_alignment += get_serialized_size_soccer_vision_attribute_msgs__msg__Confidence(
    &(ros_message->confidence), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MarkingIntersection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_soccer_vision_2d_msgs__msg__MarkingIntersection(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soccer_vision_2d_msgs
size_t max_serialized_size_soccer_vision_2d_msgs__msg__MarkingIntersection(
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

  // member: center
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_vision_msgs__msg__Point2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: num_rays
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading_rays
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
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
    using DataType = soccer_vision_2d_msgs__msg__MarkingIntersection;
    is_plain =
      (
      offsetof(DataType, confidence) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MarkingIntersection__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_soccer_vision_2d_msgs__msg__MarkingIntersection(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MarkingIntersection = {
  "soccer_vision_2d_msgs::msg",
  "MarkingIntersection",
  _MarkingIntersection__cdr_serialize,
  _MarkingIntersection__cdr_deserialize,
  _MarkingIntersection__get_serialized_size,
  _MarkingIntersection__max_serialized_size
};

static rosidl_message_type_support_t _MarkingIntersection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MarkingIntersection,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, soccer_vision_2d_msgs, msg, MarkingIntersection)() {
  return &_MarkingIntersection__type_support;
}

#if defined(__cplusplus)
}
#endif
