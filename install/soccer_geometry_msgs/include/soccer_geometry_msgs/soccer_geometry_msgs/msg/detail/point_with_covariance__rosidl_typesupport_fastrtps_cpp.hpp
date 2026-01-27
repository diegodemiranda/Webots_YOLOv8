// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from soccer_geometry_msgs:msg/PointWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "soccer_geometry_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "soccer_geometry_msgs/msg/detail/point_with_covariance__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace soccer_geometry_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soccer_geometry_msgs
cdr_serialize(
  const soccer_geometry_msgs::msg::PointWithCovariance & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soccer_geometry_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  soccer_geometry_msgs::msg::PointWithCovariance & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soccer_geometry_msgs
get_serialized_size(
  const soccer_geometry_msgs::msg::PointWithCovariance & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soccer_geometry_msgs
max_serialized_size_PointWithCovariance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace soccer_geometry_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soccer_geometry_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, soccer_geometry_msgs, msg, PointWithCovariance)();

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
