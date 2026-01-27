// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_vision_2d_msgs:msg/Ball.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_2D_MSGS__MSG__DETAIL__BALL__BUILDER_HPP_
#define SOCCER_VISION_2D_MSGS__MSG__DETAIL__BALL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_vision_2d_msgs/msg/detail/ball__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_vision_2d_msgs
{

namespace msg
{

namespace builder
{

class Init_Ball_confidence
{
public:
  explicit Init_Ball_confidence(::soccer_vision_2d_msgs::msg::Ball & msg)
  : msg_(msg)
  {}
  ::soccer_vision_2d_msgs::msg::Ball confidence(::soccer_vision_2d_msgs::msg::Ball::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_vision_2d_msgs::msg::Ball msg_;
};

class Init_Ball_center
{
public:
  explicit Init_Ball_center(::soccer_vision_2d_msgs::msg::Ball & msg)
  : msg_(msg)
  {}
  Init_Ball_confidence center(::soccer_vision_2d_msgs::msg::Ball::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Ball_confidence(msg_);
  }

private:
  ::soccer_vision_2d_msgs::msg::Ball msg_;
};

class Init_Ball_bb
{
public:
  Init_Ball_bb()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ball_center bb(::soccer_vision_2d_msgs::msg::Ball::_bb_type arg)
  {
    msg_.bb = std::move(arg);
    return Init_Ball_center(msg_);
  }

private:
  ::soccer_vision_2d_msgs::msg::Ball msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_vision_2d_msgs::msg::Ball>()
{
  return soccer_vision_2d_msgs::msg::builder::Init_Ball_bb();
}

}  // namespace soccer_vision_2d_msgs

#endif  // SOCCER_VISION_2D_MSGS__MSG__DETAIL__BALL__BUILDER_HPP_
