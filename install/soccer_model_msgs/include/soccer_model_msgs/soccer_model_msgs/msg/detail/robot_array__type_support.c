// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from soccer_model_msgs:msg/RobotArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "soccer_model_msgs/msg/detail/robot_array__rosidl_typesupport_introspection_c.h"
#include "soccer_model_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "soccer_model_msgs/msg/detail/robot_array__functions.h"
#include "soccer_model_msgs/msg/detail/robot_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `robots`
#include "soccer_model_msgs/msg/robot.h"
// Member `robots`
#include "soccer_model_msgs/msg/detail/robot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  soccer_model_msgs__msg__RobotArray__init(message_memory);
}

void soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_fini_function(void * message_memory)
{
  soccer_model_msgs__msg__RobotArray__fini(message_memory);
}

size_t soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__size_function__RobotArray__robots(
  const void * untyped_member)
{
  const soccer_model_msgs__msg__Robot__Sequence * member =
    (const soccer_model_msgs__msg__Robot__Sequence *)(untyped_member);
  return member->size;
}

const void * soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__get_const_function__RobotArray__robots(
  const void * untyped_member, size_t index)
{
  const soccer_model_msgs__msg__Robot__Sequence * member =
    (const soccer_model_msgs__msg__Robot__Sequence *)(untyped_member);
  return &member->data[index];
}

void * soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__get_function__RobotArray__robots(
  void * untyped_member, size_t index)
{
  soccer_model_msgs__msg__Robot__Sequence * member =
    (soccer_model_msgs__msg__Robot__Sequence *)(untyped_member);
  return &member->data[index];
}

void soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__fetch_function__RobotArray__robots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const soccer_model_msgs__msg__Robot * item =
    ((const soccer_model_msgs__msg__Robot *)
    soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__get_const_function__RobotArray__robots(untyped_member, index));
  soccer_model_msgs__msg__Robot * value =
    (soccer_model_msgs__msg__Robot *)(untyped_value);
  *value = *item;
}

void soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__assign_function__RobotArray__robots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  soccer_model_msgs__msg__Robot * item =
    ((soccer_model_msgs__msg__Robot *)
    soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__get_function__RobotArray__robots(untyped_member, index));
  const soccer_model_msgs__msg__Robot * value =
    (const soccer_model_msgs__msg__Robot *)(untyped_value);
  *item = *value;
}

bool soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__resize_function__RobotArray__robots(
  void * untyped_member, size_t size)
{
  soccer_model_msgs__msg__Robot__Sequence * member =
    (soccer_model_msgs__msg__Robot__Sequence *)(untyped_member);
  soccer_model_msgs__msg__Robot__Sequence__fini(member);
  return soccer_model_msgs__msg__Robot__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_model_msgs__msg__RobotArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_model_msgs__msg__RobotArray, robots),  // bytes offset in struct
    NULL,  // default value
    soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__size_function__RobotArray__robots,  // size() function pointer
    soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__get_const_function__RobotArray__robots,  // get_const(index) function pointer
    soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__get_function__RobotArray__robots,  // get(index) function pointer
    soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__fetch_function__RobotArray__robots,  // fetch(index, &value) function pointer
    soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__assign_function__RobotArray__robots,  // assign(index, value) function pointer
    soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__resize_function__RobotArray__robots  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_members = {
  "soccer_model_msgs__msg",  // message namespace
  "RobotArray",  // message name
  2,  // number of fields
  sizeof(soccer_model_msgs__msg__RobotArray),
  soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_member_array,  // message members
  soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_init_function,  // function to initialize message memory (memory has to be allocated)
  soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_type_support_handle = {
  0,
  &soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_soccer_model_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soccer_model_msgs, msg, RobotArray)() {
  soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soccer_model_msgs, msg, Robot)();
  if (!soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_type_support_handle.typesupport_identifier) {
    soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &soccer_model_msgs__msg__RobotArray__rosidl_typesupport_introspection_c__RobotArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
