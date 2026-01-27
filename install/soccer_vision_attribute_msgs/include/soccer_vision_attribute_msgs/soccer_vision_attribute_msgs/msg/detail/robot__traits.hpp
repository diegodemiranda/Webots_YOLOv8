// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from soccer_vision_attribute_msgs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__ROBOT__TRAITS_HPP_
#define SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "soccer_vision_attribute_msgs/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace soccer_vision_attribute_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Robot & msg,
  std::ostream & out)
{
  out << "{";
  // member: player_number
  {
    out << "player_number: ";
    rosidl_generator_traits::value_to_yaml(msg.player_number, out);
    out << ", ";
  }

  // member: team
  {
    out << "team: ";
    rosidl_generator_traits::value_to_yaml(msg.team, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: facing
  {
    out << "facing: ";
    rosidl_generator_traits::value_to_yaml(msg.facing, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: player_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "player_number: ";
    rosidl_generator_traits::value_to_yaml(msg.player_number, out);
    out << "\n";
  }

  // member: team
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "team: ";
    rosidl_generator_traits::value_to_yaml(msg.team, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: facing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "facing: ";
    rosidl_generator_traits::value_to_yaml(msg.facing, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robot & msg, bool use_flow_style = false)
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

}  // namespace soccer_vision_attribute_msgs

namespace rosidl_generator_traits
{

[[deprecated("use soccer_vision_attribute_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const soccer_vision_attribute_msgs::msg::Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  soccer_vision_attribute_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use soccer_vision_attribute_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const soccer_vision_attribute_msgs::msg::Robot & msg)
{
  return soccer_vision_attribute_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<soccer_vision_attribute_msgs::msg::Robot>()
{
  return "soccer_vision_attribute_msgs::msg::Robot";
}

template<>
inline const char * name<soccer_vision_attribute_msgs::msg::Robot>()
{
  return "soccer_vision_attribute_msgs/msg/Robot";
}

template<>
struct has_fixed_size<soccer_vision_attribute_msgs::msg::Robot>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<soccer_vision_attribute_msgs::msg::Robot>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<soccer_vision_attribute_msgs::msg::Robot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__ROBOT__TRAITS_HPP_
