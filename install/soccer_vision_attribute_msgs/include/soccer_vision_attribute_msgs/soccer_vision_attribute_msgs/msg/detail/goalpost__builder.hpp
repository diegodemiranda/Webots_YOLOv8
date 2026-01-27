// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_vision_attribute_msgs:msg/Goalpost.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__GOALPOST__BUILDER_HPP_
#define SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__GOALPOST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_vision_attribute_msgs/msg/detail/goalpost__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_vision_attribute_msgs
{

namespace msg
{

namespace builder
{

class Init_Goalpost_team
{
public:
  explicit Init_Goalpost_team(::soccer_vision_attribute_msgs::msg::Goalpost & msg)
  : msg_(msg)
  {}
  ::soccer_vision_attribute_msgs::msg::Goalpost team(::soccer_vision_attribute_msgs::msg::Goalpost::_team_type arg)
  {
    msg_.team = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_vision_attribute_msgs::msg::Goalpost msg_;
};

class Init_Goalpost_side
{
public:
  Init_Goalpost_side()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Goalpost_team side(::soccer_vision_attribute_msgs::msg::Goalpost::_side_type arg)
  {
    msg_.side = std::move(arg);
    return Init_Goalpost_team(msg_);
  }

private:
  ::soccer_vision_attribute_msgs::msg::Goalpost msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_vision_attribute_msgs::msg::Goalpost>()
{
  return soccer_vision_attribute_msgs::msg::builder::Init_Goalpost_side();
}

}  // namespace soccer_vision_attribute_msgs

#endif  // SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__GOALPOST__BUILDER_HPP_
