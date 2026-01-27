// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from soccer_vision_3d_msgs:msg/MarkingIntersection.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__TRAITS_HPP_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "soccer_vision_3d_msgs/msg/detail/marking_intersection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'rays'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__traits.hpp"

namespace soccer_vision_3d_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MarkingIntersection & msg,
  std::ostream & out)
{
  out << "{";
  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: num_rays
  {
    out << "num_rays: ";
    rosidl_generator_traits::value_to_yaml(msg.num_rays, out);
    out << ", ";
  }

  // member: rays
  {
    if (msg.rays.size() == 0) {
      out << "rays: []";
    } else {
      out << "rays: [";
      size_t pending_items = msg.rays.size();
      for (auto item : msg.rays) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const MarkingIntersection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: num_rays
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_rays: ";
    rosidl_generator_traits::value_to_yaml(msg.num_rays, out);
    out << "\n";
  }

  // member: rays
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rays.size() == 0) {
      out << "rays: []\n";
    } else {
      out << "rays:\n";
      for (auto item : msg.rays) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const MarkingIntersection & msg, bool use_flow_style = false)
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
  const soccer_vision_3d_msgs::msg::MarkingIntersection & msg,
  std::ostream & out, size_t indentation = 0)
{
  soccer_vision_3d_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use soccer_vision_3d_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const soccer_vision_3d_msgs::msg::MarkingIntersection & msg)
{
  return soccer_vision_3d_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<soccer_vision_3d_msgs::msg::MarkingIntersection>()
{
  return "soccer_vision_3d_msgs::msg::MarkingIntersection";
}

template<>
inline const char * name<soccer_vision_3d_msgs::msg::MarkingIntersection>()
{
  return "soccer_vision_3d_msgs/msg/MarkingIntersection";
}

template<>
struct has_fixed_size<soccer_vision_3d_msgs::msg::MarkingIntersection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<soccer_vision_3d_msgs::msg::MarkingIntersection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<soccer_vision_3d_msgs::msg::MarkingIntersection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__TRAITS_HPP_
