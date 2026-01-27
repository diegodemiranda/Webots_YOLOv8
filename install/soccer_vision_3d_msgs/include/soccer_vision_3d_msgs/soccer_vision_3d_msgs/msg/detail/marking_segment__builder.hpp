// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_vision_3d_msgs:msg/MarkingSegment.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_SEGMENT__BUILDER_HPP_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_SEGMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_vision_3d_msgs/msg/detail/marking_segment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_vision_3d_msgs
{

namespace msg
{

namespace builder
{

class Init_MarkingSegment_confidence
{
public:
  explicit Init_MarkingSegment_confidence(::soccer_vision_3d_msgs::msg::MarkingSegment & msg)
  : msg_(msg)
  {}
  ::soccer_vision_3d_msgs::msg::MarkingSegment confidence(::soccer_vision_3d_msgs::msg::MarkingSegment::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::MarkingSegment msg_;
};

class Init_MarkingSegment_end
{
public:
  explicit Init_MarkingSegment_end(::soccer_vision_3d_msgs::msg::MarkingSegment & msg)
  : msg_(msg)
  {}
  Init_MarkingSegment_confidence end(::soccer_vision_3d_msgs::msg::MarkingSegment::_end_type arg)
  {
    msg_.end = std::move(arg);
    return Init_MarkingSegment_confidence(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::MarkingSegment msg_;
};

class Init_MarkingSegment_start
{
public:
  Init_MarkingSegment_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MarkingSegment_end start(::soccer_vision_3d_msgs::msg::MarkingSegment::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_MarkingSegment_end(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::MarkingSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_vision_3d_msgs::msg::MarkingSegment>()
{
  return soccer_vision_3d_msgs::msg::builder::Init_MarkingSegment_start();
}

}  // namespace soccer_vision_3d_msgs

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_SEGMENT__BUILDER_HPP_
