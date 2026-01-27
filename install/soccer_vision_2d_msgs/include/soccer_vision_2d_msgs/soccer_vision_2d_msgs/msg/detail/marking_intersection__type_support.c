// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from soccer_vision_2d_msgs:msg/MarkingIntersection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "soccer_vision_2d_msgs/msg/detail/marking_intersection__rosidl_typesupport_introspection_c.h"
#include "soccer_vision_2d_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "soccer_vision_2d_msgs/msg/detail/marking_intersection__functions.h"
#include "soccer_vision_2d_msgs/msg/detail/marking_intersection__struct.h"


// Include directives for member types
// Member `center`
#include "vision_msgs/msg/point2_d.h"
// Member `center`
#include "vision_msgs/msg/detail/point2_d__rosidl_typesupport_introspection_c.h"
// Member `heading_rays`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `confidence`
#include "soccer_vision_attribute_msgs/msg/confidence.h"
// Member `confidence`
#include "soccer_vision_attribute_msgs/msg/detail/confidence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__MarkingIntersection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  soccer_vision_2d_msgs__msg__MarkingIntersection__init(message_memory);
}

void soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__MarkingIntersection_fini_function(void * message_memory)
{
  soccer_vision_2d_msgs__msg__MarkingIntersection__fini(message_memory);
}

size_t soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__size_function__MarkingIntersection__heading_rays(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__get_const_function__MarkingIntersection__heading_rays(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__get_function__MarkingIntersection__heading_rays(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__fetch_function__MarkingIntersection__heading_rays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__get_const_function__MarkingIntersection__heading_rays(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__assign_function__MarkingIntersection__heading_rays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__get_function__MarkingIntersection__heading_rays(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__resize_function__MarkingIntersection__heading_rays(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__MarkingIntersection_message_member_array[4] = {
  {
    "center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs__msg__MarkingIntersection, center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_rays",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs__msg__MarkingIntersection, num_rays),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading_rays",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs__msg__MarkingIntersection, heading_rays),  // bytes offset in struct
    NULL,  // default value
    soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__size_function__MarkingIntersection__heading_rays,  // size() function pointer
    soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__get_const_function__MarkingIntersection__heading_rays,  // get_const(index) function pointer
    soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__get_function__MarkingIntersection__heading_rays,  // get(index) function pointer
    soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__fetch_function__MarkingIntersection__heading_rays,  // fetch(index, &value) function pointer
    soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__assign_function__MarkingIntersection__heading_rays,  // assign(index, value) function pointer
    soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__resize_function__MarkingIntersection__heading_rays  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs__msg__MarkingIntersection, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__MarkingIntersection_message_members = {
  "soccer_vision_2d_msgs__msg",  // message namespace
  "MarkingIntersection",  // message name
  4,  // number of fields
  sizeof(soccer_vision_2d_msgs__msg__MarkingIntersection),
  soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__MarkingIntersection_message_member_array,  // message members
  soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__MarkingIntersection_init_function,  // function to initialize message memory (memory has to be allocated)
  soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__MarkingIntersection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__MarkingIntersection_message_type_support_handle = {
  0,
  &soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__MarkingIntersection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_soccer_vision_2d_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soccer_vision_2d_msgs, msg, MarkingIntersection)() {
  soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__MarkingIntersection_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_msgs, msg, Point2D)();
  soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__MarkingIntersection_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soccer_vision_attribute_msgs, msg, Confidence)();
  if (!soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__MarkingIntersection_message_type_support_handle.typesupport_identifier) {
    soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__MarkingIntersection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &soccer_vision_2d_msgs__msg__MarkingIntersection__rosidl_typesupport_introspection_c__MarkingIntersection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
