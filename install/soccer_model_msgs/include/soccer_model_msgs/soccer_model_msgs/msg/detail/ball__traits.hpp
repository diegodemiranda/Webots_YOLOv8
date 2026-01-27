// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from soccer_model_msgs:msg/Ball.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_MODEL_MSGS__MSG__DETAIL__BALL__TRAITS_HPP_
#define SOCCER_MODEL_MSGS__MSG__DETAIL__BALL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "soccer_model_msgs/msg/detail/ball__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'point'
#include "soccer_geometry_msgs/msg/detail/point_with_covariance__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"

namespace soccer_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ball & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
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
  const Ball & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
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

inline std::string to_yaml(const Ball & msg, bool use_flow_style = false)
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
  const soccer_model_msgs::msg::Ball & msg,
  std::ostream & out, size_t indentation = 0)
{
  soccer_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use soccer_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const soccer_model_msgs::msg::Ball & msg)
{
  return soccer_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<soccer_model_msgs::msg::Ball>()
{
  return "soccer_model_msgs::msg::Ball";
}

template<>
inline const char * name<soccer_model_msgs::msg::Ball>()
{
  return "soccer_model_msgs/msg/Ball";
}

template<>
struct has_fixed_size<soccer_model_msgs::msg::Ball>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::TwistWithCovariance>::value && has_fixed_size<soccer_geometry_msgs::msg::PointWithCovariance>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<soccer_model_msgs::msg::Ball>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::TwistWithCovariance>::value && has_bounded_size<soccer_geometry_msgs::msg::PointWithCovariance>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<soccer_model_msgs::msg::Ball>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOCCER_MODEL_MSGS__MSG__DETAIL__BALL__TRAITS_HPP_
