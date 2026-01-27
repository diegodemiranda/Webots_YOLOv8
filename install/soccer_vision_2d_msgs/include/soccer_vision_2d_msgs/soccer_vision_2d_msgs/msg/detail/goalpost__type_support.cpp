// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from soccer_vision_2d_msgs:msg/Goalpost.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "soccer_vision_2d_msgs/msg/detail/goalpost__struct.hpp"
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

void Goalpost_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) soccer_vision_2d_msgs::msg::Goalpost(_init);
}

void Goalpost_fini_function(void * message_memory)
{
  auto typed_message = static_cast<soccer_vision_2d_msgs::msg::Goalpost *>(message_memory);
  typed_message->~Goalpost();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Goalpost_message_member_array[3] = {
  {
    "bb",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vision_msgs::msg::BoundingBox2D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs::msg::Goalpost, bb),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "attributes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<soccer_vision_attribute_msgs::msg::Goalpost>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs::msg::Goalpost, attributes),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<soccer_vision_attribute_msgs::msg::Confidence>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs::msg::Goalpost, confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Goalpost_message_members = {
  "soccer_vision_2d_msgs::msg",  // message namespace
  "Goalpost",  // message name
  3,  // number of fields
  sizeof(soccer_vision_2d_msgs::msg::Goalpost),
  Goalpost_message_member_array,  // message members
  Goalpost_init_function,  // function to initialize message memory (memory has to be allocated)
  Goalpost_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Goalpost_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Goalpost_message_members,
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
get_message_type_support_handle<soccer_vision_2d_msgs::msg::Goalpost>()
{
  return &::soccer_vision_2d_msgs::msg::rosidl_typesupport_introspection_cpp::Goalpost_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, soccer_vision_2d_msgs, msg, Goalpost)() {
  return &::soccer_vision_2d_msgs::msg::rosidl_typesupport_introspection_cpp::Goalpost_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
