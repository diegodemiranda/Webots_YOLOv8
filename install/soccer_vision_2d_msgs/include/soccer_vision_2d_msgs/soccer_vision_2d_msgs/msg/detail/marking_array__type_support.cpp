// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from soccer_vision_2d_msgs:msg/MarkingArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "soccer_vision_2d_msgs/msg/detail/marking_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace soccer_vision_2d_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MarkingArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) soccer_vision_2d_msgs::msg::MarkingArray(_init);
}

void MarkingArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<soccer_vision_2d_msgs::msg::MarkingArray *>(message_memory);
  typed_message->~MarkingArray();
}

size_t size_function__MarkingArray__ellipses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<soccer_vision_2d_msgs::msg::MarkingEllipse> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MarkingArray__ellipses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<soccer_vision_2d_msgs::msg::MarkingEllipse> *>(untyped_member);
  return &member[index];
}

void * get_function__MarkingArray__ellipses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<soccer_vision_2d_msgs::msg::MarkingEllipse> *>(untyped_member);
  return &member[index];
}

void fetch_function__MarkingArray__ellipses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const soccer_vision_2d_msgs::msg::MarkingEllipse *>(
    get_const_function__MarkingArray__ellipses(untyped_member, index));
  auto & value = *reinterpret_cast<soccer_vision_2d_msgs::msg::MarkingEllipse *>(untyped_value);
  value = item;
}

void assign_function__MarkingArray__ellipses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<soccer_vision_2d_msgs::msg::MarkingEllipse *>(
    get_function__MarkingArray__ellipses(untyped_member, index));
  const auto & value = *reinterpret_cast<const soccer_vision_2d_msgs::msg::MarkingEllipse *>(untyped_value);
  item = value;
}

void resize_function__MarkingArray__ellipses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<soccer_vision_2d_msgs::msg::MarkingEllipse> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MarkingArray__intersections(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<soccer_vision_2d_msgs::msg::MarkingIntersection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MarkingArray__intersections(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<soccer_vision_2d_msgs::msg::MarkingIntersection> *>(untyped_member);
  return &member[index];
}

void * get_function__MarkingArray__intersections(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<soccer_vision_2d_msgs::msg::MarkingIntersection> *>(untyped_member);
  return &member[index];
}

void fetch_function__MarkingArray__intersections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const soccer_vision_2d_msgs::msg::MarkingIntersection *>(
    get_const_function__MarkingArray__intersections(untyped_member, index));
  auto & value = *reinterpret_cast<soccer_vision_2d_msgs::msg::MarkingIntersection *>(untyped_value);
  value = item;
}

void assign_function__MarkingArray__intersections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<soccer_vision_2d_msgs::msg::MarkingIntersection *>(
    get_function__MarkingArray__intersections(untyped_member, index));
  const auto & value = *reinterpret_cast<const soccer_vision_2d_msgs::msg::MarkingIntersection *>(untyped_value);
  item = value;
}

void resize_function__MarkingArray__intersections(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<soccer_vision_2d_msgs::msg::MarkingIntersection> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MarkingArray__segments(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<soccer_vision_2d_msgs::msg::MarkingSegment> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MarkingArray__segments(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<soccer_vision_2d_msgs::msg::MarkingSegment> *>(untyped_member);
  return &member[index];
}

void * get_function__MarkingArray__segments(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<soccer_vision_2d_msgs::msg::MarkingSegment> *>(untyped_member);
  return &member[index];
}

void fetch_function__MarkingArray__segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const soccer_vision_2d_msgs::msg::MarkingSegment *>(
    get_const_function__MarkingArray__segments(untyped_member, index));
  auto & value = *reinterpret_cast<soccer_vision_2d_msgs::msg::MarkingSegment *>(untyped_value);
  value = item;
}

void assign_function__MarkingArray__segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<soccer_vision_2d_msgs::msg::MarkingSegment *>(
    get_function__MarkingArray__segments(untyped_member, index));
  const auto & value = *reinterpret_cast<const soccer_vision_2d_msgs::msg::MarkingSegment *>(untyped_value);
  item = value;
}

void resize_function__MarkingArray__segments(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<soccer_vision_2d_msgs::msg::MarkingSegment> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MarkingArray_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs::msg::MarkingArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ellipses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<soccer_vision_2d_msgs::msg::MarkingEllipse>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs::msg::MarkingArray, ellipses),  // bytes offset in struct
    nullptr,  // default value
    size_function__MarkingArray__ellipses,  // size() function pointer
    get_const_function__MarkingArray__ellipses,  // get_const(index) function pointer
    get_function__MarkingArray__ellipses,  // get(index) function pointer
    fetch_function__MarkingArray__ellipses,  // fetch(index, &value) function pointer
    assign_function__MarkingArray__ellipses,  // assign(index, value) function pointer
    resize_function__MarkingArray__ellipses  // resize(index) function pointer
  },
  {
    "intersections",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<soccer_vision_2d_msgs::msg::MarkingIntersection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs::msg::MarkingArray, intersections),  // bytes offset in struct
    nullptr,  // default value
    size_function__MarkingArray__intersections,  // size() function pointer
    get_const_function__MarkingArray__intersections,  // get_const(index) function pointer
    get_function__MarkingArray__intersections,  // get(index) function pointer
    fetch_function__MarkingArray__intersections,  // fetch(index, &value) function pointer
    assign_function__MarkingArray__intersections,  // assign(index, value) function pointer
    resize_function__MarkingArray__intersections  // resize(index) function pointer
  },
  {
    "segments",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<soccer_vision_2d_msgs::msg::MarkingSegment>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs::msg::MarkingArray, segments),  // bytes offset in struct
    nullptr,  // default value
    size_function__MarkingArray__segments,  // size() function pointer
    get_const_function__MarkingArray__segments,  // get_const(index) function pointer
    get_function__MarkingArray__segments,  // get(index) function pointer
    fetch_function__MarkingArray__segments,  // fetch(index, &value) function pointer
    assign_function__MarkingArray__segments,  // assign(index, value) function pointer
    resize_function__MarkingArray__segments  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MarkingArray_message_members = {
  "soccer_vision_2d_msgs::msg",  // message namespace
  "MarkingArray",  // message name
  4,  // number of fields
  sizeof(soccer_vision_2d_msgs::msg::MarkingArray),
  MarkingArray_message_member_array,  // message members
  MarkingArray_init_function,  // function to initialize message memory (memory has to be allocated)
  MarkingArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MarkingArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MarkingArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace soccer_vision_2d_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<soccer_vision_2d_msgs::msg::MarkingArray>()
{
  return &::soccer_vision_2d_msgs::msg::rosidl_typesupport_introspection_cpp::MarkingArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, soccer_vision_2d_msgs, msg, MarkingArray)() {
  return &::soccer_vision_2d_msgs::msg::rosidl_typesupport_introspection_cpp::MarkingArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
