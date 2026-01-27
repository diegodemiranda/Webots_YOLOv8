// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from soccer_vision_3d_msgs:msg/MarkingIntersection.idl
// generated code does not contain a copyright notice
#include "soccer_vision_3d_msgs/msg/detail/marking_intersection__rosidl_typesupport_fastrtps_cpp.hpp"
#include "soccer_vision_3d_msgs/msg/detail/marking_intersection__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace soccer_vision_attribute_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const soccer_vision_attribute_msgs::msg::Confidence &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  soccer_vision_attribute_msgs::msg::Confidence &);
size_t get_serialized_size(
  const soccer_vision_attribute_msgs::msg::Confidence &,
  size_t current_alignment);
size_t
max_serialized_size_Confidence(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace soccer_vision_attribute_msgs


namespace soccer_vision_3d_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soccer_vision_3d_msgs
cdr_serialize(
  const soccer_vision_3d_msgs::msg::MarkingIntersection & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: center
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.center,
    cdr);
  // Member: num_rays
  cdr << ros_message.num_rays;
  // Member: rays
  {
    size_t size = ros_message.rays.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.rays[i],
        cdr);
    }
  }
  // Member: confidence
  soccer_vision_attribute_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.confidence,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soccer_vision_3d_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  soccer_vision_3d_msgs::msg::MarkingIntersection & ros_message)
{
  // Member: center
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.center);

  // Member: num_rays
  cdr >> ros_message.num_rays;

  // Member: rays
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.rays.resize(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.rays[i]);
    }
  }

  // Member: confidence
  soccer_vision_attribute_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.confidence);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soccer_vision_3d_msgs
get_serialized_size(
  const soccer_vision_3d_msgs::msg::MarkingIntersection & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: center

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.center, current_alignment);
  // Member: num_rays
  {
    size_t item_size = sizeof(ros_message.num_rays);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rays
  {
    size_t array_size = ros_message.rays.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.rays[index], current_alignment);
    }
  }
  // Member: confidence

  current_alignment +=
    soccer_vision_attribute_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.confidence, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soccer_vision_3d_msgs
max_serialized_size_MarkingIntersection(
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


  // Member: center
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: num_rays
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rays
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
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: confidence
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        soccer_vision_attribute_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Confidence(
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
    using DataType = soccer_vision_3d_msgs::msg::MarkingIntersection;
    is_plain =
      (
      offsetof(DataType, confidence) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MarkingIntersection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const soccer_vision_3d_msgs::msg::MarkingIntersection *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MarkingIntersection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<soccer_vision_3d_msgs::msg::MarkingIntersection *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MarkingIntersection__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const soccer_vision_3d_msgs::msg::MarkingIntersection *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MarkingIntersection__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MarkingIntersection(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MarkingIntersection__callbacks = {
  "soccer_vision_3d_msgs::msg",
  "MarkingIntersection",
  _MarkingIntersection__cdr_serialize,
  _MarkingIntersection__cdr_deserialize,
  _MarkingIntersection__get_serialized_size,
  _MarkingIntersection__max_serialized_size
};

static rosidl_message_type_support_t _MarkingIntersection__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MarkingIntersection__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace soccer_vision_3d_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_soccer_vision_3d_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<soccer_vision_3d_msgs::msg::MarkingIntersection>()
{
  return &soccer_vision_3d_msgs::msg::typesupport_fastrtps_cpp::_MarkingIntersection__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, soccer_vision_3d_msgs, msg, MarkingIntersection)() {
  return &soccer_vision_3d_msgs::msg::typesupport_fastrtps_cpp::_MarkingIntersection__handle;
}

#ifdef __cplusplus
}
#endif
