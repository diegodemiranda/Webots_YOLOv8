// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_vision_3d_msgs:msg/BallArray.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__BALL_ARRAY__BUILDER_HPP_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__BALL_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_vision_3d_msgs/msg/detail/ball_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_vision_3d_msgs
{

namespace msg
{

namespace builder
{

class Init_BallArray_balls
{
public:
  explicit Init_BallArray_balls(::soccer_vision_3d_msgs::msg::BallArray & msg)
  : msg_(msg)
  {}
  ::soccer_vision_3d_msgs::msg::BallArray balls(::soccer_vision_3d_msgs::msg::BallArray::_balls_type arg)
  {
    msg_.balls = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::BallArray msg_;
};

class Init_BallArray_header
{
public:
  Init_BallArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BallArray_balls header(::soccer_vision_3d_msgs::msg::BallArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BallArray_balls(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::BallArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_vision_3d_msgs::msg::BallArray>()
{
  return soccer_vision_3d_msgs::msg::builder::Init_BallArray_header();
}

}  // namespace soccer_vision_3d_msgs

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__BALL_ARRAY__BUILDER_HPP_
