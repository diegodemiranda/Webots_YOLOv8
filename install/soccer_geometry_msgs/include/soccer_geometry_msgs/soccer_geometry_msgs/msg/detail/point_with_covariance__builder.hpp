// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soccer_geometry_msgs:msg/PointWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__BUILDER_HPP_
#define SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soccer_geometry_msgs/msg/detail/point_with_covariance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soccer_geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_PointWithCovariance_covariance
{
public:
  explicit Init_PointWithCovariance_covariance(::soccer_geometry_msgs::msg::PointWithCovariance & msg)
  : msg_(msg)
  {}
  ::soccer_geometry_msgs::msg::PointWithCovariance covariance(::soccer_geometry_msgs::msg::PointWithCovariance::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soccer_geometry_msgs::msg::PointWithCovariance msg_;
};

class Init_PointWithCovariance_point
{
public:
  Init_PointWithCovariance_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointWithCovariance_covariance point(::soccer_geometry_msgs::msg::PointWithCovariance::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_PointWithCovariance_covariance(msg_);
  }

private:
  ::soccer_geometry_msgs::msg::PointWithCovariance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soccer_geometry_msgs::msg::PointWithCovariance>()
{
  return soccer_geometry_msgs::msg::builder::Init_PointWithCovariance_point();
}

}  // namespace soccer_geometry_msgs

#endif  // SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__BUILDER_HPP_
