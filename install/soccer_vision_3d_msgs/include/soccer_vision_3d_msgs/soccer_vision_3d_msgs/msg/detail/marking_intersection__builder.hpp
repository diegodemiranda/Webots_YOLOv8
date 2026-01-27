// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_vision_3d_msgs:msg/MarkingIntersection.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__BUILDER_HPP_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_vision_3d_msgs/msg/detail/marking_intersection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_vision_3d_msgs
{

namespace msg
{

namespace builder
{

class Init_MarkingIntersection_confidence
{
public:
  explicit Init_MarkingIntersection_confidence(::soccer_vision_3d_msgs::msg::MarkingIntersection & msg)
  : msg_(msg)
  {}
  ::soccer_vision_3d_msgs::msg::MarkingIntersection confidence(::soccer_vision_3d_msgs::msg::MarkingIntersection::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::MarkingIntersection msg_;
};

class Init_MarkingIntersection_rays
{
public:
  explicit Init_MarkingIntersection_rays(::soccer_vision_3d_msgs::msg::MarkingIntersection & msg)
  : msg_(msg)
  {}
  Init_MarkingIntersection_confidence rays(::soccer_vision_3d_msgs::msg::MarkingIntersection::_rays_type arg)
  {
    msg_.rays = std::move(arg);
    return Init_MarkingIntersection_confidence(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::MarkingIntersection msg_;
};

class Init_MarkingIntersection_num_rays
{
public:
  explicit Init_MarkingIntersection_num_rays(::soccer_vision_3d_msgs::msg::MarkingIntersection & msg)
  : msg_(msg)
  {}
  Init_MarkingIntersection_rays num_rays(::soccer_vision_3d_msgs::msg::MarkingIntersection::_num_rays_type arg)
  {
    msg_.num_rays = std::move(arg);
    return Init_MarkingIntersection_rays(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::MarkingIntersection msg_;
};

class Init_MarkingIntersection_center
{
public:
  Init_MarkingIntersection_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MarkingIntersection_num_rays center(::soccer_vision_3d_msgs::msg::MarkingIntersection::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_MarkingIntersection_num_rays(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::MarkingIntersection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_vision_3d_msgs::msg::MarkingIntersection>()
{
  return soccer_vision_3d_msgs::msg::builder::Init_MarkingIntersection_center();
}

}  // namespace soccer_vision_3d_msgs

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__BUILDER_HPP_
