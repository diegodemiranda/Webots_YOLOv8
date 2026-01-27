// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from soccer_vision_3d_msgs:msg/MarkingSegment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "soccer_vision_3d_msgs/msg/detail/marking_segment__rosidl_typesupport_introspection_c.h"
#include "soccer_vision_3d_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "soccer_vision_3d_msgs/msg/detail/marking_segment__functions.h"
#include "soccer_vision_3d_msgs/msg/detail/marking_segment__struct.h"


// Include directives for member types
// Member `start`
// Member `end`
#include "geometry_msgs/msg/point.h"
// Member `start`
// Member `end`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `confidence`
#include "soccer_vision_attribute_msgs/msg/confidence.h"
// Member `confidence`
#include "soccer_vision_attribute_msgs/msg/detail/confidence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  soccer_vision_3d_msgs__msg__MarkingSegment__init(message_memory);
}

void soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_fini_function(void * message_memory)
{
  soccer_vision_3d_msgs__msg__MarkingSegment__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_message_member_array[3] = {
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_3d_msgs__msg__MarkingSegment, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_3d_msgs__msg__MarkingSegment, end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_3d_msgs__msg__MarkingSegment, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_message_members = {
  "soccer_vision_3d_msgs__msg",  // message namespace
  "MarkingSegment",  // message name
  3,  // number of fields
  sizeof(soccer_vision_3d_msgs__msg__MarkingSegment),
  soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_message_member_array,  // message members
  soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_init_function,  // function to initialize message memory (memory has to be allocated)
  soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_message_type_support_handle = {
  0,
  &soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_soccer_vision_3d_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soccer_vision_3d_msgs, msg, MarkingSegment)() {
  soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soccer_vision_attribute_msgs, msg, Confidence)();
  if (!soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_message_type_support_handle.typesupport_identifier) {
    soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &soccer_vision_3d_msgs__msg__MarkingSegment__rosidl_typesupport_introspection_c__MarkingSegment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
