// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_model_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_MODEL_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
#define SOCCER_MODEL_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_model_msgs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_model_msgs
{

namespace msg
{

namespace builder
{

class Init_Obstacle_twist
{
public:
  explicit Init_Obstacle_twist(::soccer_model_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  ::soccer_model_msgs::msg::Obstacle twist(::soccer_model_msgs::msg::Obstacle::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_model_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_pose
{
public:
  Init_Obstacle_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacle_twist pose(::soccer_model_msgs::msg::Obstacle::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Obstacle_twist(msg_);
  }

private:
  ::soccer_model_msgs::msg::Obstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_model_msgs::msg::Obstacle>()
{
  return soccer_model_msgs::msg::builder::Init_Obstacle_pose();
}

}  // namespace soccer_model_msgs

#endif  // SOCCER_MODEL_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
