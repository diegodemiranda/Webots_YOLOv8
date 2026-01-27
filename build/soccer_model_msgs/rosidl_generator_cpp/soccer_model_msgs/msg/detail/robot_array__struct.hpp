// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from soccer_model_msgs:msg/RobotArray.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT_ARRAY__STRUCT_HPP_
#define SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT_ARRAY__STRUCT_HPP_

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
// Member 'robots'
#include "soccer_model_msgs/msg/detail/robot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__soccer_model_msgs__msg__RobotArray __attribute__((deprecated))
#else
# define DEPRECATED__soccer_model_msgs__msg__RobotArray __declspec(deprecated)
#endif

namespace soccer_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotArray_
{
  using Type = RobotArray_<ContainerAllocator>;

  explicit RobotArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RobotArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robots_type =
    std::vector<soccer_model_msgs::msg::Robot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<soccer_model_msgs::msg::Robot_<ContainerAllocator>>>;
  _robots_type robots;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__robots(
    const std::vector<soccer_model_msgs::msg::Robot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<soccer_model_msgs::msg::Robot_<ContainerAllocator>>> & _arg)
  {
    this->robots = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    soccer_model_msgs::msg::RobotArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const soccer_model_msgs::msg::RobotArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<soccer_model_msgs::msg::RobotArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<soccer_model_msgs::msg::RobotArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      soccer_model_msgs::msg::RobotArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<soccer_model_msgs::msg::RobotArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      soccer_model_msgs::msg::RobotArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<soccer_model_msgs::msg::RobotArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<soccer_model_msgs::msg::RobotArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<soccer_model_msgs::msg::RobotArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__soccer_model_msgs__msg__RobotArray
    std::shared_ptr<soccer_model_msgs::msg::RobotArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__soccer_model_msgs__msg__RobotArray
    std::shared_ptr<soccer_model_msgs::msg::RobotArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robots != other.robots) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotArray_

// alias to use template instance with default allocator
using RobotArray =
  soccer_model_msgs::msg::RobotArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace soccer_model_msgs

#endif  // SOCCER_MODEL_MSGS__MSG__DETAIL__ROBOT_ARRAY__STRUCT_HPP_
