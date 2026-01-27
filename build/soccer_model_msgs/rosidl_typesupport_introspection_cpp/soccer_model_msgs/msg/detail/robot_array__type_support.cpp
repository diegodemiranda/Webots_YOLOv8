// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from soccer_model_msgs:msg/RobotArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "soccer_model_msgs/msg/detail/robot_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace soccer_model_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RobotArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) soccer_model_msgs::msg::RobotArray(_init);
}

void RobotArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<soccer_model_msgs::msg::RobotArray *>(message_memory);
  typed_message->~RobotArray();
}

size_t size_function__RobotArray__robots(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<soccer_model_msgs::msg::Robot> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotArray__robots(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<soccer_model_msgs::msg::Robot> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotArray__robots(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<soccer_model_msgs::msg::Robot> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotArray__robots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const soccer_model_msgs::msg::Robot *>(
    get_const_function__RobotArray__robots(untyped_member, index));
  auto & value = *reinterpret_cast<soccer_model_msgs::msg::Robot *>(untyped_value);
  value = item;
}

void assign_function__RobotArray__robots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<soccer_model_msgs::msg::Robot *>(
    get_function__RobotArray__robots(untyped_member, index));
  const auto & value = *reinterpret_cast<const soccer_model_msgs::msg::Robot *>(untyped_value);
  item = value;
}

void resize_function__RobotArray__robots(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<soccer_model_msgs::msg::Robot> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_model_msgs::msg::RobotArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<soccer_model_msgs::msg::Robot>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_model_msgs::msg::RobotArray, robots),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotArray__robots,  // size() function pointer
    get_const_function__RobotArray__robots,  // get_const(index) function pointer
    get_function__RobotArray__robots,  // get(index) function pointer
    fetch_function__RobotArray__robots,  // fetch(index, &value) function pointer
    assign_function__RobotArray__robots,  // assign(index, value) function pointer
    resize_function__RobotArray__robots  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotArray_message_members = {
  "soccer_model_msgs::msg",  // message namespace
  "RobotArray",  // message name
  2,  // number of fields
  sizeof(soccer_model_msgs::msg::RobotArray),
  RobotArray_message_member_array,  // message members
  RobotArray_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace soccer_model_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<soccer_model_msgs::msg::RobotArray>()
{
  return &::soccer_model_msgs::msg::rosidl_typesupport_introspection_cpp::RobotArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, soccer_model_msgs, msg, RobotArray)() {
  return &::soccer_model_msgs::msg::rosidl_typesupport_introspection_cpp::RobotArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
