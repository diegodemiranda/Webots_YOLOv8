// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from soccer_vision_2d_msgs:msg/MarkingArray.idl
// generated code does not contain a copyright notice
#include "soccer_vision_2d_msgs/msg/detail/marking_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "soccer_vision_2d_msgs/msg/detail/marking_array__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace soccer_vision_2d_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const soccer_vision_2d_msgs::msg::MarkingEllipse &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  soccer_vision_2d_msgs::msg::MarkingEllipse &);
size_t get_serialized_size(
  const soccer_vision_2d_msgs::msg::MarkingEllipse &,
  size_t current_alignment);
size_t
max_serialized_size_MarkingEllipse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace soccer_vision_2d_msgs

namespace soccer_vision_2d_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const soccer_vision_2d_msgs::msg::MarkingIntersection &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  soccer_vision_2d_msgs::msg::MarkingIntersection &);
size_t get_serialized_size(
  const soccer_vision_2d_msgs::msg::MarkingIntersection &,
  size_t current_alignment);
size_t
max_serialized_size_MarkingIntersection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace soccer_vision_2d_msgs

namespace soccer_vision_2d_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const soccer_vision_2d_msgs::msg::MarkingSegment &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  soccer_vision_2d_msgs::msg::MarkingSegment &);
size_t get_serialized_size(
  const soccer_vision_2d_msgs::msg::MarkingSegment &,
  size_t current_alignment);
size_t
max_serialized_size_MarkingSegment(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace soccer_vision_2d_msgs


namespace soccer_vision_2d_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soccer_vision_2d_msgs
cdr_serialize(
  const soccer_vision_2d_msgs::msg::MarkingArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: ellipses
  {
    size_t size = ros_message.ellipses.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      soccer_vision_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ellipses[i],
        cdr);
    }
  }
  // Member: intersections
  {
    size_t size = ros_message.intersections.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      soccer_vision_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.intersections[i],
        cdr);
    }
  }
  // Member: segments
  {
    size_t size = ros_message.segments.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      soccer_vision_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.segments[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soccer_vision_2d_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  soccer_vision_2d_msgs::msg::MarkingArray & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: ellipses
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.ellipses.resize(size);
    for (size_t i = 0; i < size; i++) {
      soccer_vision_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.ellipses[i]);
    }
  }

  // Member: intersections
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.intersections.resize(size);
    for (size_t i = 0; i < size; i++) {
      soccer_vision_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.intersections[i]);
    }
  }

  // Member: segments
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.segments.resize(size);
    for (size_t i = 0; i < size; i++) {
      soccer_vision_2d_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.segments[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soccer_vision_2d_msgs
get_serialized_size(
  const soccer_vision_2d_msgs::msg::MarkingArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: ellipses
  {
    size_t array_size = ros_message.ellipses.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        soccer_vision_2d_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ellipses[index], current_alignment);
    }
  }
  // Member: intersections
  {
    size_t array_size = ros_message.intersections.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        soccer_vision_2d_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.intersections[index], current_alignment);
    }
  }
  // Member: segments
  {
    size_t array_size = ros_message.segments.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        soccer_vision_2d_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.segments[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soccer_vision_2d_msgs
max_serialized_size_MarkingArray(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ellipses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        soccer_vision_2d_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MarkingEllipse(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: intersections
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        soccer_vision_2d_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MarkingIntersection(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: segments
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        soccer_vision_2d_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MarkingSegment(
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
    using DataType = soccer_vision_2d_msgs::msg::MarkingArray;
    is_plain =
      (
      offsetof(DataType, segments) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MarkingArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const soccer_vision_2d_msgs::msg::MarkingArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MarkingArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<soccer_vision_2d_msgs::msg::MarkingArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MarkingArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const soccer_vision_2d_msgs::msg::MarkingArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MarkingArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MarkingArray(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MarkingArray__callbacks = {
  "soccer_vision_2d_msgs::msg",
  "MarkingArray",
  _MarkingArray__cdr_serialize,
  _MarkingArray__cdr_deserialize,
  _MarkingArray__get_serialized_size,
  _MarkingArray__max_serialized_size
};

static rosidl_message_type_support_t _MarkingArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MarkingArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace soccer_vision_2d_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_soccer_vision_2d_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<soccer_vision_2d_msgs::msg::MarkingArray>()
{
  return &soccer_vision_2d_msgs::msg::typesupport_fastrtps_cpp::_MarkingArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, soccer_vision_2d_msgs, msg, MarkingArray)() {
  return &soccer_vision_2d_msgs::msg::typesupport_fastrtps_cpp::_MarkingArray__handle;
}

#ifdef __cplusplus
}
#endif
