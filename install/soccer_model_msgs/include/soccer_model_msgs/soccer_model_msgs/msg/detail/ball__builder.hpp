// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_model_msgs:msg/Ball.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_MODEL_MSGS__MSG__DETAIL__BALL__BUILDER_HPP_
#define SOCCER_MODEL_MSGS__MSG__DETAIL__BALL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_model_msgs/msg/detail/ball__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_model_msgs
{

namespace msg
{

namespace builder
{

class Init_Ball_twist
{
public:
  explicit Init_Ball_twist(::soccer_model_msgs::msg::Ball & msg)
  : msg_(msg)
  {}
  ::soccer_model_msgs::msg::Ball twist(::soccer_model_msgs::msg::Ball::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_model_msgs::msg::Ball msg_;
};

class Init_Ball_point
{
public:
  explicit Init_Ball_point(::soccer_model_msgs::msg::Ball & msg)
  : msg_(msg)
  {}
  Init_Ball_twist point(::soccer_model_msgs::msg::Ball::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_Ball_twist(msg_);
  }

private:
  ::soccer_model_msgs::msg::Ball msg_;
};

class Init_Ball_header
{
public:
  Init_Ball_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ball_point header(::soccer_model_msgs::msg::Ball::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Ball_point(msg_);
  }

private:
  ::soccer_model_msgs::msg::Ball msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_model_msgs::msg::Ball>()
{
  return soccer_model_msgs::msg::builder::Init_Ball_header();
}

}  // namespace soccer_model_msgs

#endif  // SOCCER_MODEL_MSGS__MSG__DETAIL__BALL__BUILDER_HPP_
