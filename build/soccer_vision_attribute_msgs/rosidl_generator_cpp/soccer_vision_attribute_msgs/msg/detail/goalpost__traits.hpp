// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from soccer_vision_attribute_msgs:msg/Goalpost.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__GOALPOST__TRAITS_HPP_
#define SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__GOALPOST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "soccer_vision_attribute_msgs/msg/detail/goalpost__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace soccer_vision_attribute_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Goalpost & msg,
  std::ostream & out)
{
  out << "{";
  // member: side
  {
    out << "side: ";
    rosidl_generator_traits::value_to_yaml(msg.side, out);
    out << ", ";
  }

  // member: team
  {
    out << "team: ";
    rosidl_generator_traits::value_to_yaml(msg.team, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Goalpost & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: side
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "side: ";
    rosidl_generator_traits::value_to_yaml(msg.side, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Goalpost & msg, bool use_flow_style = false)
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
  const soccer_vision_attribute_msgs::msg::Goalpost & msg,
  std::ostream & out, size_t indentation = 0)
{
  soccer_vision_attribute_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use soccer_vision_attribute_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const soccer_vision_attribute_msgs::msg::Goalpost & msg)
{
  return soccer_vision_attribute_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<soccer_vision_attribute_msgs::msg::Goalpost>()
{
  return "soccer_vision_attribute_msgs::msg::Goalpost";
}

template<>
inline const char * name<soccer_vision_attribute_msgs::msg::Goalpost>()
{
  return "soccer_vision_attribute_msgs/msg/Goalpost";
}

template<>
struct has_fixed_size<soccer_vision_attribute_msgs::msg::Goalpost>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<soccer_vision_attribute_msgs::msg::Goalpost>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<soccer_vision_attribute_msgs::msg::Goalpost>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__GOALPOST__TRAITS_HPP_
