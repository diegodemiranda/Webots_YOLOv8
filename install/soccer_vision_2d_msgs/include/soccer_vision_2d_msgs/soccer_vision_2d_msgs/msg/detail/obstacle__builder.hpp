// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_vision_2d_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_2D_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
#define SOCCER_VISION_2D_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_vision_2d_msgs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_vision_2d_msgs
{

namespace msg
{

namespace builder
{

class Init_Obstacle_confidence
{
public:
  explicit Init_Obstacle_confidence(::soccer_vision_2d_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  ::soccer_vision_2d_msgs::msg::Obstacle confidence(::soccer_vision_2d_msgs::msg::Obstacle::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_vision_2d_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_bb
{
public:
  Init_Obstacle_bb()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacle_confidence bb(::soccer_vision_2d_msgs::msg::Obstacle::_bb_type arg)
  {
    msg_.bb = std::move(arg);
    return Init_Obstacle_confidence(msg_);
  }

private:
  ::soccer_vision_2d_msgs::msg::Obstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_vision_2d_msgs::msg::Obstacle>()
{
  return soccer_vision_2d_msgs::msg::builder::Init_Obstacle_bb();
}

}  // namespace soccer_vision_2d_msgs

#endif  // SOCCER_VISION_2D_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
