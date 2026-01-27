// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from soccer_vision_2d_msgs:msg/MarkingEllipse.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_ELLIPSE__TRAITS_HPP_
#define SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_ELLIPSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "soccer_vision_2d_msgs/msg/detail/marking_ellipse__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bb'
#include "vision_msgs/msg/detail/bounding_box2_d__traits.hpp"
// Member 'center'
#include "vision_msgs/msg/detail/point2_d__traits.hpp"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__traits.hpp"

namespace soccer_vision_2d_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MarkingEllipse & msg,
  std::ostream & out)
{
  out << "{";
  // member: bb
  {
    out << "bb: ";
    to_flow_style_yaml(msg.bb, out);
    out << ", ";
  }

  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
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
  const MarkingEllipse & msg,
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

  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
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

inline std::string to_yaml(const MarkingEllipse & msg, bool use_flow_style = false)
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

}  // namespace soccer_vision_2d_msgs

namespace rosidl_generator_traits
{

[[deprecated("use soccer_vision_2d_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const soccer_vision_2d_msgs::msg::MarkingEllipse & msg,
  std::ostream & out, size_t indentation = 0)
{
  soccer_vision_2d_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use soccer_vision_2d_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const soccer_vision_2d_msgs::msg::MarkingEllipse & msg)
{
  return soccer_vision_2d_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<soccer_vision_2d_msgs::msg::MarkingEllipse>()
{
  return "soccer_vision_2d_msgs::msg::MarkingEllipse";
}

template<>
inline const char * name<soccer_vision_2d_msgs::msg::MarkingEllipse>()
{
  return "soccer_vision_2d_msgs/msg/MarkingEllipse";
}

template<>
struct has_fixed_size<soccer_vision_2d_msgs::msg::MarkingEllipse>
  : std::integral_constant<bool, has_fixed_size<soccer_vision_attribute_msgs::msg::Confidence>::value && has_fixed_size<vision_msgs::msg::BoundingBox2D>::value && has_fixed_size<vision_msgs::msg::Point2D>::value> {};

template<>
struct has_bounded_size<soccer_vision_2d_msgs::msg::MarkingEllipse>
  : std::integral_constant<bool, has_bounded_size<soccer_vision_attribute_msgs::msg::Confidence>::value && has_bounded_size<vision_msgs::msg::BoundingBox2D>::value && has_bounded_size<vision_msgs::msg::Point2D>::value> {};

template<>
struct is_message<soccer_vision_2d_msgs::msg::MarkingEllipse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_ELLIPSE__TRAITS_HPP_
