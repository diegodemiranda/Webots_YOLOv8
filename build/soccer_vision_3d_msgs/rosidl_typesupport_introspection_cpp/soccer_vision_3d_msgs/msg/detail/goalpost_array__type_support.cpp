// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from soccer_vision_3d_msgs:msg/GoalpostArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "soccer_vision_3d_msgs/msg/detail/goalpost_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace soccer_vision_3d_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GoalpostArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) soccer_vision_3d_msgs::msg::GoalpostArray(_init);
}

void GoalpostArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<soccer_vision_3d_msgs::msg::GoalpostArray *>(message_memory);
  typed_message->~GoalpostArray();
}

size_t size_function__GoalpostArray__posts(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<soccer_vision_3d_msgs::msg::Goalpost> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GoalpostArray__posts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<soccer_vision_3d_msgs::msg::Goalpost> *>(untyped_member);
  return &member[index];
}

void * get_function__GoalpostArray__posts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<soccer_vision_3d_msgs::msg::Goalpost> *>(untyped_member);
  return &member[index];
}

void fetch_function__GoalpostArray__posts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const soccer_vision_3d_msgs::msg::Goalpost *>(
    get_const_function__GoalpostArray__posts(untyped_member, index));
  auto & value = *reinterpret_cast<soccer_vision_3d_msgs::msg::Goalpost *>(untyped_value);
  value = item;
}

void assign_function__GoalpostArray__posts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<soccer_vision_3d_msgs::msg::Goalpost *>(
    get_function__GoalpostArray__posts(untyped_member, index));
  const auto & value = *reinterpret_cast<const soccer_vision_3d_msgs::msg::Goalpost *>(untyped_value);
  item = value;
}

void resize_function__GoalpostArray__posts(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<soccer_vision_3d_msgs::msg::Goalpost> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GoalpostArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_3d_msgs::msg::GoalpostArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "posts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<soccer_vision_3d_msgs::msg::Goalpost>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_3d_msgs::msg::GoalpostArray, posts),  // bytes offset in struct
    nullptr,  // default value
    size_function__GoalpostArray__posts,  // size() function pointer
    get_const_function__GoalpostArray__posts,  // get_const(index) function pointer
    get_function__GoalpostArray__posts,  // get(index) function pointer
    fetch_function__GoalpostArray__posts,  // fetch(index, &value) function pointer
    assign_function__GoalpostArray__posts,  // assign(index, value) function pointer
    resize_function__GoalpostArray__posts  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GoalpostArray_message_members = {
  "soccer_vision_3d_msgs::msg",  // message namespace
  "GoalpostArray",  // message name
  2,  // number of fields
  sizeof(soccer_vision_3d_msgs::msg::GoalpostArray),
  GoalpostArray_message_member_array,  // message members
  GoalpostArray_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalpostArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GoalpostArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoalpostArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace soccer_vision_3d_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<soccer_vision_3d_msgs::msg::GoalpostArray>()
{
  return &::soccer_vision_3d_msgs::msg::rosidl_typesupport_introspection_cpp::GoalpostArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, soccer_vision_3d_msgs, msg, GoalpostArray)() {
  return &::soccer_vision_3d_msgs::msg::rosidl_typesupport_introspection_cpp::GoalpostArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
