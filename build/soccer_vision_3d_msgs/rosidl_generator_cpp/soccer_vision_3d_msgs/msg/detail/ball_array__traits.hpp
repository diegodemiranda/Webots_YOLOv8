// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from soccer_vision_3d_msgs:msg/BallArray.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__BALL_ARRAY__TRAITS_HPP_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__BALL_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "soccer_vision_3d_msgs/msg/detail/ball_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'balls'
#include "soccer_vision_3d_msgs/msg/detail/ball__traits.hpp"

namespace soccer_vision_3d_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BallArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: balls
  {
    if (msg.balls.size() == 0) {
      out << "balls: []";
    } else {
      out << "balls: [";
      size_t pending_items = msg.balls.size();
      for (auto item : msg.balls) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BallArray & msg,
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

  // member: balls
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.balls.size() == 0) {
      out << "balls: []\n";
    } else {
      out << "balls:\n";
      for (auto item : msg.balls) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BallArray & msg, bool use_flow_style = false)
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

}  // namespace soccer_vision_3d_msgs

namespace rosidl_generator_traits
{

[[deprecated("use soccer_vision_3d_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const soccer_vision_3d_msgs::msg::BallArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  soccer_vision_3d_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use soccer_vision_3d_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const soccer_vision_3d_msgs::msg::BallArray & msg)
{
  return soccer_vision_3d_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<soccer_vision_3d_msgs::msg::BallArray>()
{
  return "soccer_vision_3d_msgs::msg::BallArray";
}

template<>
inline const char * name<soccer_vision_3d_msgs::msg::BallArray>()
{
  return "soccer_vision_3d_msgs/msg/BallArray";
}

template<>
struct has_fixed_size<soccer_vision_3d_msgs::msg::BallArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<soccer_vision_3d_msgs::msg::BallArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<soccer_vision_3d_msgs::msg::BallArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__BALL_ARRAY__TRAITS_HPP_
