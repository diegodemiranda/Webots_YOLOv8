// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from soccer_model_msgs:msg/Ball.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_MODEL_MSGS__MSG__DETAIL__BALL__STRUCT_HPP_
#define SOCCER_MODEL_MSGS__MSG__DETAIL__BALL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'point'
#include "soccer_geometry_msgs/msg/detail/point_with_covariance__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__soccer_model_msgs__msg__Ball __attribute__((deprecated))
#else
# define DEPRECATED__soccer_model_msgs__msg__Ball __declspec(deprecated)
#endif

namespace soccer_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ball_
{
  using Type = Ball_<ContainerAllocator>;

  explicit Ball_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    point(_init),
    twist(_init)
  {
    (void)_init;
  }

  explicit Ball_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    point(_alloc, _init),
    twist(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _point_type =
    soccer_geometry_msgs::msg::PointWithCovariance_<ContainerAllocator>;
  _point_type point;
  using _twist_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _twist_type twist;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__point(
    const soccer_geometry_msgs::msg::PointWithCovariance_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    soccer_model_msgs::msg::Ball_<ContainerAllocator> *;
  using ConstRawPtr =
    const soccer_model_msgs::msg::Ball_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<soccer_model_msgs::msg::Ball_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<soccer_model_msgs::msg::Ball_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      soccer_model_msgs::msg::Ball_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<soccer_model_msgs::msg::Ball_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      soccer_model_msgs::msg::Ball_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<soccer_model_msgs::msg::Ball_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<soccer_model_msgs::msg::Ball_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<soccer_model_msgs::msg::Ball_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__soccer_model_msgs__msg__Ball
    std::shared_ptr<soccer_model_msgs::msg::Ball_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__soccer_model_msgs__msg__Ball
    std::shared_ptr<soccer_model_msgs::msg::Ball_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ball_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->point != other.point) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ball_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ball_

// alias to use template instance with default allocator
using Ball =
  soccer_model_msgs::msg::Ball_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace soccer_model_msgs

#endif  // SOCCER_MODEL_MSGS__MSG__DETAIL__BALL__STRUCT_HPP_
