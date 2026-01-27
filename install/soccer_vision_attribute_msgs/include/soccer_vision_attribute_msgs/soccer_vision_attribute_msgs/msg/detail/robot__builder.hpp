// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_vision_attribute_msgs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__ROBOT__BUILDER_HPP_
#define SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_vision_attribute_msgs/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_vision_attribute_msgs
{

namespace msg
{

namespace builder
{

class Init_Robot_facing
{
public:
  explicit Init_Robot_facing(::soccer_vision_attribute_msgs::msg::Robot & msg)
  : msg_(msg)
  {}
  ::soccer_vision_attribute_msgs::msg::Robot facing(::soccer_vision_attribute_msgs::msg::Robot::_facing_type arg)
  {
    msg_.facing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_vision_attribute_msgs::msg::Robot msg_;
};

class Init_Robot_state
{
public:
  explicit Init_Robot_state(::soccer_vision_attribute_msgs::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_facing state(::soccer_vision_attribute_msgs::msg::Robot::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_Robot_facing(msg_);
  }

private:
  ::soccer_vision_attribute_msgs::msg::Robot msg_;
};

class Init_Robot_team
{
public:
  explicit Init_Robot_team(::soccer_vision_attribute_msgs::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_state team(::soccer_vision_attribute_msgs::msg::Robot::_team_type arg)
  {
    msg_.team = std::move(arg);
    return Init_Robot_state(msg_);
  }

private:
  ::soccer_vision_attribute_msgs::msg::Robot msg_;
};

class Init_Robot_player_number
{
public:
  Init_Robot_player_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robot_team player_number(::soccer_vision_attribute_msgs::msg::Robot::_player_number_type arg)
  {
    msg_.player_number = std::move(arg);
    return Init_Robot_team(msg_);
  }

private:
  ::soccer_vision_attribute_msgs::msg::Robot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_vision_attribute_msgs::msg::Robot>()
{
  return soccer_vision_attribute_msgs::msg::builder::Init_Robot_player_number();
}

}  // namespace soccer_vision_attribute_msgs

#endif  // SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__ROBOT__BUILDER_HPP_
