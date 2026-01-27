// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_vision_3d_msgs:msg/GoalpostArray.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__GOALPOST_ARRAY__BUILDER_HPP_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__GOALPOST_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_vision_3d_msgs/msg/detail/goalpost_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_vision_3d_msgs
{

namespace msg
{

namespace builder
{

class Init_GoalpostArray_posts
{
public:
  explicit Init_GoalpostArray_posts(::soccer_vision_3d_msgs::msg::GoalpostArray & msg)
  : msg_(msg)
  {}
  ::soccer_vision_3d_msgs::msg::GoalpostArray posts(::soccer_vision_3d_msgs::msg::GoalpostArray::_posts_type arg)
  {
    msg_.posts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::GoalpostArray msg_;
};

class Init_GoalpostArray_header
{
public:
  Init_GoalpostArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalpostArray_posts header(::soccer_vision_3d_msgs::msg::GoalpostArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GoalpostArray_posts(msg_);
  }

private:
  ::soccer_vision_3d_msgs::msg::GoalpostArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_vision_3d_msgs::msg::GoalpostArray>()
{
  return soccer_vision_3d_msgs::msg::builder::Init_GoalpostArray_header();
}

}  // namespace soccer_vision_3d_msgs

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__GOALPOST_ARRAY__BUILDER_HPP_
