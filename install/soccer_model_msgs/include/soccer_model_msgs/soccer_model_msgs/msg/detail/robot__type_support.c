// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from soccer_model_msgs:msg/Robot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "soccer_model_msgs/msg/detail/robot__rosidl_typesupport_introspection_c.h"
#include "soccer_model_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "soccer_model_msgs/msg/detail/robot__functions.h"
#include "soccer_model_msgs/msg/detail/robot__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose_with_covariance.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `twist`
#include "geometry_msgs/msg/twist_with_covariance.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `attributes`
#include "soccer_vision_attribute_msgs/msg/robot.h"
// Member `attributes`
#include "soccer_vision_attribute_msgs/msg/detail/robot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  soccer_model_msgs__msg__Robot__init(message_memory);
}

void soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_fini_function(void * message_memory)
{
  soccer_model_msgs__msg__Robot__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_member_array[3] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_model_msgs__msg__Robot, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_model_msgs__msg__Robot, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attributes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_model_msgs__msg__Robot, attributes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_members = {
  "soccer_model_msgs__msg",  // message namespace
  "Robot",  // message name
  3,  // number of fields
  sizeof(soccer_model_msgs__msg__Robot),
  soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_member_array,  // message members
  soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_init_function,  // function to initialize message memory (memory has to be allocated)
  soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_type_support_handle = {
  0,
  &soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_soccer_model_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soccer_model_msgs, msg, Robot)() {
  soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovariance)();
  soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistWithCovariance)();
  soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soccer_vision_attribute_msgs, msg, Robot)();
  if (!soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_type_support_handle.typesupport_identifier) {
    soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &soccer_model_msgs__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
