// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_vision_3d_msgs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__ROBOT__BUILDER_HPP_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_vision_3d_msgs/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_vision_3d_msgs
{

namespace msg
{

namespace builder
{

class Init_Robot_confidence
{
public:
  explicit Init_Robot_confidence(::soccer_vision_3d_msgs::msg::Robot & msg)
  : msg_(msg)
  {}
  ::soccer_vision_3d_msgs::msg::Robot confidence(::soccer_vision_3d_msgs::msg::Robot::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::Robot msg_;
};

class Init_Robot_attributes
{
public:
  explicit Init_Robot_attributes(::soccer_vision_3d_msgs::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_confidence attributes(::soccer_vision_3d_msgs::msg::Robot::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return Init_Robot_confidence(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::Robot msg_;
};

class Init_Robot_bb
{
public:
  Init_Robot_bb()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robot_attributes bb(::soccer_vision_3d_msgs::msg::Robot::_bb_type arg)
  {
    msg_.bb = std::move(arg);
    return Init_Robot_attributes(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::Robot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_vision_3d_msgs::msg::Robot>()
{
  return soccer_vision_3d_msgs::msg::builder::Init_Robot_bb();
}

}  // namespace soccer_vision_3d_msgs

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__ROBOT__BUILDER_HPP_
