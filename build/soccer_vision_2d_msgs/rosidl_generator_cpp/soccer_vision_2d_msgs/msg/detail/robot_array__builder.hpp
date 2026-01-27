// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_vision_2d_msgs:msg/RobotArray.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_2D_MSGS__MSG__DETAIL__ROBOT_ARRAY__BUILDER_HPP_
#define SOCCER_VISION_2D_MSGS__MSG__DETAIL__ROBOT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_vision_2d_msgs/msg/detail/robot_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_vision_2d_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotArray_robots
{
public:
  explicit Init_RobotArray_robots(::soccer_vision_2d_msgs::msg::RobotArray & msg)
  : msg_(msg)
  {}
  ::soccer_vision_2d_msgs::msg::RobotArray robots(::soccer_vision_2d_msgs::msg::RobotArray::_robots_type arg)
  {
    msg_.robots = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_vision_2d_msgs::msg::RobotArray msg_;
};

class Init_RobotArray_header
{
public:
  Init_RobotArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArray_robots header(::soccer_vision_2d_msgs::msg::RobotArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotArray_robots(msg_);
  }

private:
  ::soccer_vision_2d_msgs::msg::RobotArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_vision_2d_msgs::msg::RobotArray>()
{
  return soccer_vision_2d_msgs::msg::builder::Init_RobotArray_header();
}

}  // namespace soccer_vision_2d_msgs

#endif  // SOCCER_VISION_2D_MSGS__MSG__DETAIL__ROBOT_ARRAY__BUILDER_HPP_
