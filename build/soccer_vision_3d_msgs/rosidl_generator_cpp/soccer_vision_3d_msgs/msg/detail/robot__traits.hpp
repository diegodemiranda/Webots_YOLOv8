// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from soccer_vision_3d_msgs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__ROBOT__TRAITS_HPP_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "soccer_vision_3d_msgs/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bb'
#include "vision_msgs/msg/detail/bounding_box3_d__traits.hpp"
// Member 'attributes'
#include "soccer_vision_attribute_msgs/msg/detail/robot__traits.hpp"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__traits.hpp"

namespace soccer_vision_3d_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Robot & msg,
  std::ostream & out)
{
  out << "{";
  // member: bb
  {
    out << "bb: ";
    to_flow_style_yaml(msg.bb, out);
    out << ", ";
  }

  // member: attributes
  {
    out << "attributes: ";
    to_flow_style_yaml(msg.attributes, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    to_flow_style_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bb:\n";
    to_block_style_yaml(msg.bb, out, indentation + 2);
  }

  // member: attributes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attributes:\n";
    to_block_style_yaml(msg.attributes, out, indentation + 2);
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence:\n";
    to_block_style_yaml(msg.confidence, out, indentation + 2);
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

}  // namespace soccer_vision_3d_msgs

namespace rosidl_generator_traits
{

[[deprecated("use soccer_vision_3d_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const soccer_vision_3d_msgs::msg::Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  soccer_vision_3d_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use soccer_vision_3d_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const soccer_vision_3d_msgs::msg::Robot & msg)
{
  return soccer_vision_3d_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<soccer_vision_3d_msgs::msg::Robot>()
{
  return "soccer_vision_3d_msgs::msg::Robot";
}

template<>
inline const char * name<soccer_vision_3d_msgs::msg::Robot>()
{
  return "soccer_vision_3d_msgs/msg/Robot";
}

template<>
struct has_fixed_size<soccer_vision_3d_msgs::msg::Robot>
  : std::integral_constant<bool, has_fixed_size<soccer_vision_attribute_msgs::msg::Confidence>::value && has_fixed_size<soccer_vision_attribute_msgs::msg::Robot>::value && has_fixed_size<vision_msgs::msg::BoundingBox3D>::value> {};

template<>
struct has_bounded_size<soccer_vision_3d_msgs::msg::Robot>
  : std::integral_constant<bool, has_bounded_size<soccer_vision_attribute_msgs::msg::Confidence>::value && has_bounded_size<soccer_vision_attribute_msgs::msg::Robot>::value && has_bounded_size<vision_msgs::msg::BoundingBox3D>::value> {};

template<>
struct is_message<soccer_vision_3d_msgs::msg::Robot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__ROBOT__TRAITS_HPP_
