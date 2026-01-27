// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from soccer_vision_2d_msgs:msg/MarkingArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "soccer_vision_2d_msgs/msg/detail/marking_array__rosidl_typesupport_introspection_c.h"
#include "soccer_vision_2d_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "soccer_vision_2d_msgs/msg/detail/marking_array__functions.h"
#include "soccer_vision_2d_msgs/msg/detail/marking_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ellipses`
#include "soccer_vision_2d_msgs/msg/marking_ellipse.h"
// Member `ellipses`
#include "soccer_vision_2d_msgs/msg/detail/marking_ellipse__rosidl_typesupport_introspection_c.h"
// Member `intersections`
#include "soccer_vision_2d_msgs/msg/marking_intersection.h"
// Member `intersections`
#include "soccer_vision_2d_msgs/msg/detail/marking_intersection__rosidl_typesupport_introspection_c.h"
// Member `segments`
#include "soccer_vision_2d_msgs/msg/marking_segment.h"
// Member `segments`
#include "soccer_vision_2d_msgs/msg/detail/marking_segment__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  soccer_vision_2d_msgs__msg__MarkingArray__init(message_memory);
}

void soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_fini_function(void * message_memory)
{
  soccer_vision_2d_msgs__msg__MarkingArray__fini(message_memory);
}

size_t soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__size_function__MarkingArray__ellipses(
  const void * untyped_member)
{
  const soccer_vision_2d_msgs__msg__MarkingEllipse__Sequence * member =
    (const soccer_vision_2d_msgs__msg__MarkingEllipse__Sequence *)(untyped_member);
  return member->size;
}

const void * soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_const_function__MarkingArray__ellipses(
  const void * untyped_member, size_t index)
{
  const soccer_vision_2d_msgs__msg__MarkingEllipse__Sequence * member =
    (const soccer_vision_2d_msgs__msg__MarkingEllipse__Sequence *)(untyped_member);
  return &member->data[index];
}

void * soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_function__MarkingArray__ellipses(
  void * untyped_member, size_t index)
{
  soccer_vision_2d_msgs__msg__MarkingEllipse__Sequence * member =
    (soccer_vision_2d_msgs__msg__MarkingEllipse__Sequence *)(untyped_member);
  return &member->data[index];
}

void soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__fetch_function__MarkingArray__ellipses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const soccer_vision_2d_msgs__msg__MarkingEllipse * item =
    ((const soccer_vision_2d_msgs__msg__MarkingEllipse *)
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_const_function__MarkingArray__ellipses(untyped_member, index));
  soccer_vision_2d_msgs__msg__MarkingEllipse * value =
    (soccer_vision_2d_msgs__msg__MarkingEllipse *)(untyped_value);
  *value = *item;
}

void soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__assign_function__MarkingArray__ellipses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  soccer_vision_2d_msgs__msg__MarkingEllipse * item =
    ((soccer_vision_2d_msgs__msg__MarkingEllipse *)
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_function__MarkingArray__ellipses(untyped_member, index));
  const soccer_vision_2d_msgs__msg__MarkingEllipse * value =
    (const soccer_vision_2d_msgs__msg__MarkingEllipse *)(untyped_value);
  *item = *value;
}

bool soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__resize_function__MarkingArray__ellipses(
  void * untyped_member, size_t size)
{
  soccer_vision_2d_msgs__msg__MarkingEllipse__Sequence * member =
    (soccer_vision_2d_msgs__msg__MarkingEllipse__Sequence *)(untyped_member);
  soccer_vision_2d_msgs__msg__MarkingEllipse__Sequence__fini(member);
  return soccer_vision_2d_msgs__msg__MarkingEllipse__Sequence__init(member, size);
}

size_t soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__size_function__MarkingArray__intersections(
  const void * untyped_member)
{
  const soccer_vision_2d_msgs__msg__MarkingIntersection__Sequence * member =
    (const soccer_vision_2d_msgs__msg__MarkingIntersection__Sequence *)(untyped_member);
  return member->size;
}

const void * soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_const_function__MarkingArray__intersections(
  const void * untyped_member, size_t index)
{
  const soccer_vision_2d_msgs__msg__MarkingIntersection__Sequence * member =
    (const soccer_vision_2d_msgs__msg__MarkingIntersection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_function__MarkingArray__intersections(
  void * untyped_member, size_t index)
{
  soccer_vision_2d_msgs__msg__MarkingIntersection__Sequence * member =
    (soccer_vision_2d_msgs__msg__MarkingIntersection__Sequence *)(untyped_member);
  return &member->data[index];
}

void soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__fetch_function__MarkingArray__intersections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const soccer_vision_2d_msgs__msg__MarkingIntersection * item =
    ((const soccer_vision_2d_msgs__msg__MarkingIntersection *)
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_const_function__MarkingArray__intersections(untyped_member, index));
  soccer_vision_2d_msgs__msg__MarkingIntersection * value =
    (soccer_vision_2d_msgs__msg__MarkingIntersection *)(untyped_value);
  *value = *item;
}

void soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__assign_function__MarkingArray__intersections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  soccer_vision_2d_msgs__msg__MarkingIntersection * item =
    ((soccer_vision_2d_msgs__msg__MarkingIntersection *)
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_function__MarkingArray__intersections(untyped_member, index));
  const soccer_vision_2d_msgs__msg__MarkingIntersection * value =
    (const soccer_vision_2d_msgs__msg__MarkingIntersection *)(untyped_value);
  *item = *value;
}

bool soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__resize_function__MarkingArray__intersections(
  void * untyped_member, size_t size)
{
  soccer_vision_2d_msgs__msg__MarkingIntersection__Sequence * member =
    (soccer_vision_2d_msgs__msg__MarkingIntersection__Sequence *)(untyped_member);
  soccer_vision_2d_msgs__msg__MarkingIntersection__Sequence__fini(member);
  return soccer_vision_2d_msgs__msg__MarkingIntersection__Sequence__init(member, size);
}

size_t soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__size_function__MarkingArray__segments(
  const void * untyped_member)
{
  const soccer_vision_2d_msgs__msg__MarkingSegment__Sequence * member =
    (const soccer_vision_2d_msgs__msg__MarkingSegment__Sequence *)(untyped_member);
  return member->size;
}

const void * soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_const_function__MarkingArray__segments(
  const void * untyped_member, size_t index)
{
  const soccer_vision_2d_msgs__msg__MarkingSegment__Sequence * member =
    (const soccer_vision_2d_msgs__msg__MarkingSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_function__MarkingArray__segments(
  void * untyped_member, size_t index)
{
  soccer_vision_2d_msgs__msg__MarkingSegment__Sequence * member =
    (soccer_vision_2d_msgs__msg__MarkingSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__fetch_function__MarkingArray__segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const soccer_vision_2d_msgs__msg__MarkingSegment * item =
    ((const soccer_vision_2d_msgs__msg__MarkingSegment *)
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_const_function__MarkingArray__segments(untyped_member, index));
  soccer_vision_2d_msgs__msg__MarkingSegment * value =
    (soccer_vision_2d_msgs__msg__MarkingSegment *)(untyped_value);
  *value = *item;
}

void soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__assign_function__MarkingArray__segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  soccer_vision_2d_msgs__msg__MarkingSegment * item =
    ((soccer_vision_2d_msgs__msg__MarkingSegment *)
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_function__MarkingArray__segments(untyped_member, index));
  const soccer_vision_2d_msgs__msg__MarkingSegment * value =
    (const soccer_vision_2d_msgs__msg__MarkingSegment *)(untyped_value);
  *item = *value;
}

bool soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__resize_function__MarkingArray__segments(
  void * untyped_member, size_t size)
{
  soccer_vision_2d_msgs__msg__MarkingSegment__Sequence * member =
    (soccer_vision_2d_msgs__msg__MarkingSegment__Sequence *)(untyped_member);
  soccer_vision_2d_msgs__msg__MarkingSegment__Sequence__fini(member);
  return soccer_vision_2d_msgs__msg__MarkingSegment__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs__msg__MarkingArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ellipses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs__msg__MarkingArray, ellipses),  // bytes offset in struct
    NULL,  // default value
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__size_function__MarkingArray__ellipses,  // size() function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_const_function__MarkingArray__ellipses,  // get_const(index) function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_function__MarkingArray__ellipses,  // get(index) function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__fetch_function__MarkingArray__ellipses,  // fetch(index, &value) function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__assign_function__MarkingArray__ellipses,  // assign(index, value) function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__resize_function__MarkingArray__ellipses  // resize(index) function pointer
  },
  {
    "intersections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs__msg__MarkingArray, intersections),  // bytes offset in struct
    NULL,  // default value
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__size_function__MarkingArray__intersections,  // size() function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_const_function__MarkingArray__intersections,  // get_const(index) function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_function__MarkingArray__intersections,  // get(index) function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__fetch_function__MarkingArray__intersections,  // fetch(index, &value) function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__assign_function__MarkingArray__intersections,  // assign(index, value) function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__resize_function__MarkingArray__intersections  // resize(index) function pointer
  },
  {
    "segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soccer_vision_2d_msgs__msg__MarkingArray, segments),  // bytes offset in struct
    NULL,  // default value
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__size_function__MarkingArray__segments,  // size() function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_const_function__MarkingArray__segments,  // get_const(index) function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__get_function__MarkingArray__segments,  // get(index) function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__fetch_function__MarkingArray__segments,  // fetch(index, &value) function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__assign_function__MarkingArray__segments,  // assign(index, value) function pointer
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__resize_function__MarkingArray__segments  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_message_members = {
  "soccer_vision_2d_msgs__msg",  // message namespace
  "MarkingArray",  // message name
  4,  // number of fields
  sizeof(soccer_vision_2d_msgs__msg__MarkingArray),
  soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_message_member_array,  // message members
  soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_init_function,  // function to initialize message memory (memory has to be allocated)
  soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_message_type_support_handle = {
  0,
  &soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_soccer_vision_2d_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soccer_vision_2d_msgs, msg, MarkingArray)() {
  soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soccer_vision_2d_msgs, msg, MarkingEllipse)();
  soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soccer_vision_2d_msgs, msg, MarkingIntersection)();
  soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soccer_vision_2d_msgs, msg, MarkingSegment)();
  if (!soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_message_type_support_handle.typesupport_identifier) {
    soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &soccer_vision_2d_msgs__msg__MarkingArray__rosidl_typesupport_introspection_c__MarkingArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
