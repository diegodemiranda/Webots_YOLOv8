// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_vision_3d_msgs:msg/MarkingArray.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_ARRAY__BUILDER_HPP_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_vision_3d_msgs/msg/detail/marking_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_vision_3d_msgs
{

namespace msg
{

namespace builder
{

class Init_MarkingArray_segments
{
public:
  explicit Init_MarkingArray_segments(::soccer_vision_3d_msgs::msg::MarkingArray & msg)
  : msg_(msg)
  {}
  ::soccer_vision_3d_msgs::msg::MarkingArray segments(::soccer_vision_3d_msgs::msg::MarkingArray::_segments_type arg)
  {
    msg_.segments = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::MarkingArray msg_;
};

class Init_MarkingArray_intersections
{
public:
  explicit Init_MarkingArray_intersections(::soccer_vision_3d_msgs::msg::MarkingArray & msg)
  : msg_(msg)
  {}
  Init_MarkingArray_segments intersections(::soccer_vision_3d_msgs::msg::MarkingArray::_intersections_type arg)
  {
    msg_.intersections = std::move(arg);
    return Init_MarkingArray_segments(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::MarkingArray msg_;
};

class Init_MarkingArray_ellipses
{
public:
  explicit Init_MarkingArray_ellipses(::soccer_vision_3d_msgs::msg::MarkingArray & msg)
  : msg_(msg)
  {}
  Init_MarkingArray_intersections ellipses(::soccer_vision_3d_msgs::msg::MarkingArray::_ellipses_type arg)
  {
    msg_.ellipses = std::move(arg);
    return Init_MarkingArray_intersections(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::MarkingArray msg_;
};

class Init_MarkingArray_header
{
public:
  Init_MarkingArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MarkingArray_ellipses header(::soccer_vision_3d_msgs::msg::MarkingArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MarkingArray_ellipses(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::MarkingArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_vision_3d_msgs::msg::MarkingArray>()
{
  return soccer_vision_3d_msgs::msg::builder::Init_MarkingArray_header();
}

}  // namespace soccer_vision_3d_msgs

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_ARRAY__BUILDER_HPP_
