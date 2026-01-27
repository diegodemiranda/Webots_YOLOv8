// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_model_msgs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT__BUILDER_HPP_
#define SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_model_msgs/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_model_msgs
{

namespace msg
{

namespace builder
{

class Init_Robot_attributes
{
public:
  explicit Init_Robot_attributes(::soccer_model_msgs::msg::Robot & msg)
  : msg_(msg)
  {}
  ::soccer_model_msgs::msg::Robot attributes(::soccer_model_msgs::msg::Robot::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_model_msgs::msg::Robot msg_;
};

class Init_Robot_twist
{
public:
  explicit Init_Robot_twist(::soccer_model_msgs::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_attributes twist(::soccer_model_msgs::msg::Robot::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_Robot_attributes(msg_);
  }

private:
  ::soccer_model_msgs::msg::Robot msg_;
};

class Init_Robot_pose
{
public:
  Init_Robot_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robot_twist pose(::soccer_model_msgs::msg::Robot::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Robot_twist(msg_);
  }

private:
  ::soccer_model_msgs::msg::Robot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_model_msgs::msg::Robot>()
{
  return soccer_model_msgs::msg::builder::Init_Robot_pose();
}

}  // namespace soccer_model_msgs

#endif  // SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT__BUILDER_HPP_
