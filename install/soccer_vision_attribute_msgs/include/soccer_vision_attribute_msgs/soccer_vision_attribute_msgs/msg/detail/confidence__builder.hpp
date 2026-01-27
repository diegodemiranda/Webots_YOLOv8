// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_vision_attribute_msgs:msg/Confidence.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__CONFIDENCE__BUILDER_HPP_
#define SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__CONFIDENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_vision_attribute_msgs/msg/detail/confidence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_vision_attribute_msgs
{

namespace msg
{

namespace builder
{

class Init_Confidence_confidence
{
public:
  Init_Confidence_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::soccer_vision_attribute_msgs::msg::Confidence confidence(::soccer_vision_attribute_msgs::msg::Confidence::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_vision_attribute_msgs::msg::Confidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_vision_attribute_msgs::msg::Confidence>()
{
  return soccer_vision_attribute_msgs::msg::builder::Init_Confidence_confidence();
}

}  // namespace soccer_vision_attribute_msgs

#endif  // SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__CONFIDENCE__BUILDER_HPP_
