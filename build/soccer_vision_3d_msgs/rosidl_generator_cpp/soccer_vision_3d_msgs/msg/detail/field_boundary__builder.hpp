// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_vision_3d_msgs:msg/FieldBoundary.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__FIELD_BOUNDARY__BUILDER_HPP_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__FIELD_BOUNDARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_vision_3d_msgs/msg/detail/field_boundary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_vision_3d_msgs
{

namespace msg
{

namespace builder
{

class Init_FieldBoundary_confidence
{
public:
  explicit Init_FieldBoundary_confidence(::soccer_vision_3d_msgs::msg::FieldBoundary & msg)
  : msg_(msg)
  {}
  ::soccer_vision_3d_msgs::msg::FieldBoundary confidence(::soccer_vision_3d_msgs::msg::FieldBoundary::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::FieldBoundary msg_;
};

class Init_FieldBoundary_points
{
public:
  explicit Init_FieldBoundary_points(::soccer_vision_3d_msgs::msg::FieldBoundary & msg)
  : msg_(msg)
  {}
  Init_FieldBoundary_confidence points(::soccer_vision_3d_msgs::msg::FieldBoundary::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_FieldBoundary_confidence(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::FieldBoundary msg_;
};

class Init_FieldBoundary_header
{
public:
  Init_FieldBoundary_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FieldBoundary_points header(::soccer_vision_3d_msgs::msg::FieldBoundary::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FieldBoundary_points(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::FieldBoundary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_vision_3d_msgs::msg::FieldBoundary>()
{
  return soccer_vision_3d_msgs::msg::builder::Init_FieldBoundary_header();
}

}  // namespace soccer_vision_3d_msgs

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__FIELD_BOUNDARY__BUILDER_HPP_
