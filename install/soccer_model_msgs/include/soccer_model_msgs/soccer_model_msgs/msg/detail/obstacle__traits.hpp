// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from soccer_model_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_MODEL_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
#define SOCCER_MODEL_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "soccer_model_msgs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"

namespace soccer_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Obstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Obstacle & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace soccer_model_msgs

namespace rosidl_generator_traits
{

[[deprecated("use soccer_model_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const soccer_model_msgs::msg::Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  soccer_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use soccer_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const soccer_model_msgs::msg::Obstacle & msg)
{
  return soccer_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<soccer_model_msgs::msg::Obstacle>()
{
  return "soccer_model_msgs::msg::Obstacle";
}

template<>
inline const char * name<soccer_model_msgs::msg::Obstacle>()
{
  return "soccer_model_msgs/msg/Obstacle";
}

template<>
struct has_fixed_size<soccer_model_msgs::msg::Obstacle>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseWithCovariance>::value && has_fixed_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct has_bounded_size<soccer_model_msgs::msg::Obstacle>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value && has_bounded_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct is_message<soccer_model_msgs::msg::Obstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOCCER_MODEL_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
