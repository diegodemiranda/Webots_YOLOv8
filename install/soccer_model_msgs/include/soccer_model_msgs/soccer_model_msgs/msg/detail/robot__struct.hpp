// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from soccer_model_msgs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT__STRUCT_HPP_
#define SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"
// Member 'attributes'
#include "soccer_vision_attribute_msgs/msg/detail/robot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__soccer_model_msgs__msg__Robot __attribute__((deprecated))
#else
# define DEPRECATED__soccer_model_msgs__msg__Robot __declspec(deprecated)
#endif

namespace soccer_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Robot_
{
  using Type = Robot_<ContainerAllocator>;

  explicit Robot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    twist(_init),
    attributes(_init)
  {
    (void)_init;
  }

  explicit Robot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    twist(_alloc, _init),
    attributes(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _twist_type twist;
  using _attributes_type =
    soccer_vision_attribute_msgs::msg::Robot_<ContainerAllocator>;
  _attributes_type attributes;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__attributes(
    const soccer_vision_attribute_msgs::msg::Robot_<ContainerAllocator> & _arg)
  {
    this->attributes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    soccer_model_msgs::msg::Robot_<ContainerAllocator> *;
  using ConstRawPtr =
    const soccer_model_msgs::msg::Robot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<soccer_model_msgs::msg::Robot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<soccer_model_msgs::msg::Robot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      soccer_model_msgs::msg::Robot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<soccer_model_msgs::msg::Robot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      soccer_model_msgs::msg::Robot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<soccer_model_msgs::msg::Robot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<soccer_model_msgs::msg::Robot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<soccer_model_msgs::msg::Robot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__soccer_model_msgs__msg__Robot
    std::shared_ptr<soccer_model_msgs::msg::Robot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__soccer_model_msgs__msg__Robot
    std::shared_ptr<soccer_model_msgs::msg::Robot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robot_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->attributes != other.attributes) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robot_

// alias to use template instance with default allocator
using Robot =
  soccer_model_msgs::msg::Robot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace soccer_model_msgs

#endif  // SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT__STRUCT_HPP_
