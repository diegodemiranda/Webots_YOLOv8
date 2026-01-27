// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_vision_2d_msgs:msg/Goalpost.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_2D_MSGS__MSG__DETAIL__GOALPOST__BUILDER_HPP_
#define SOCCER_VISION_2D_MSGS__MSG__DETAIL__GOALPOST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_vision_2d_msgs/msg/detail/goalpost__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_vision_2d_msgs
{

namespace msg
{

namespace builder
{

class Init_Goalpost_confidence
{
public:
  explicit Init_Goalpost_confidence(::soccer_vision_2d_msgs::msg::Goalpost & msg)
  : msg_(msg)
  {}
  ::soccer_vision_2d_msgs::msg::Goalpost confidence(::soccer_vision_2d_msgs::msg::Goalpost::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_vision_2d_msgs::msg::Goalpost msg_;
};

class Init_Goalpost_attributes
{
public:
  explicit Init_Goalpost_attributes(::soccer_vision_2d_msgs::msg::Goalpost & msg)
  : msg_(msg)
  {}
  Init_Goalpost_confidence attributes(::soccer_vision_2d_msgs::msg::Goalpost::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return Init_Goalpost_confidence(msg_);
  }

private:
  ::soccer_vision_2d_msgs::msg::Goalpost msg_;
};

class Init_Goalpost_bb
{
public:
  Init_Goalpost_bb()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Goalpost_attributes bb(::soccer_vision_2d_msgs::msg::Goalpost::_bb_type arg)
  {
    msg_.bb = std::move(arg);
    return Init_Goalpost_attributes(msg_);
  }

private:
  ::soccer_vision_2d_msgs::msg::Goalpost msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_vision_2d_msgs::msg::Goalpost>()
{
  return soccer_vision_2d_msgs::msg::builder::Init_Goalpost_bb();
}

}  // namespace soccer_vision_2d_msgs

#endif  // SOCCER_VISION_2D_MSGS__MSG__DETAIL__GOALPOST__BUILDER_HPP_
