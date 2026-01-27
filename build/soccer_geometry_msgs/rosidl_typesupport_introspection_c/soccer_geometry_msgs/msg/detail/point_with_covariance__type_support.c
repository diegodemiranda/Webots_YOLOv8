// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from soccer_geometry_msgs:msg/PointWithCovariance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "soccer_geometry_msgs/msg/detail/point_with_covariance__rosidl_typesupport_introspection_c.h"
#include "soccer_geometry_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "soccer_geometry_msgs/msg/detail/point_with_covariance__functions.h"
#include "soccer_geometry_msgs/msg/detail/point_with_covariance__struct.h"


// Include directives for member types
// Member `point`
#include "geometry_msgs/msg/point.h"
// Member `point`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__PointWithCovariance_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  soccer_geometry_msgs__msg__PointWithCovariance__init(message_memory);
}

void soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__PointWithCovariance_fini_function(void * message_memory)
{
  soccer_geometry_msgs__msg__PointWithCovariance__fini(message_memory);
}

size_t soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__size_function__PointWithCovariance__covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__get_const_function__PointWithCovariance__covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__get_function__PointWithCovariance__covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__fetch_function__PointWithCovariance__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__get_const_function__PointWithCovariance__covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__assign_function__PointWithCovariance__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__get_function__PointWithCovariance__covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__PointWithCovariance_message_member_array[2] = {
  {
    "point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_geometry_msgs__msg__PointWithCovariance, point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(soccer_geometry_msgs__msg__PointWithCovariance, covariance),  // bytes offset in struct
    NULL,  // default value
    soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__size_function__PointWithCovariance__covariance,  // size() function pointer
    soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__get_const_function__PointWithCovariance__covariance,  // get_const(index) function pointer
    soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__get_function__PointWithCovariance__covariance,  // get(index) function pointer
    soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__fetch_function__PointWithCovariance__covariance,  // fetch(index, &value) function pointer
    soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__assign_function__PointWithCovariance__covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__PointWithCovariance_message_members = {
  "soccer_geometry_msgs__msg",  // message namespace
  "PointWithCovariance",  // message name
  2,  // number of fields
  sizeof(soccer_geometry_msgs__msg__PointWithCovariance),
  soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__PointWithCovariance_message_member_array,  // message members
  soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__PointWithCovariance_init_function,  // function to initialize message memory (memory has to be allocated)
  soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__PointWithCovariance_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__PointWithCovariance_message_type_support_handle = {
  0,
  &soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__PointWithCovariance_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_soccer_geometry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soccer_geometry_msgs, msg, PointWithCovariance)() {
  soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__PointWithCovariance_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__PointWithCovariance_message_type_support_handle.typesupport_identifier) {
    soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__PointWithCovariance_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &soccer_geometry_msgs__msg__PointWithCovariance__rosidl_typesupport_introspection_c__PointWithCovariance_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
