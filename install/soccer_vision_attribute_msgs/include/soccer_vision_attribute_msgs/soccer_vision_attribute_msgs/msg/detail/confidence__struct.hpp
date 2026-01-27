// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from soccer_vision_attribute_msgs:msg/Confidence.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__CONFIDENCE__STRUCT_HPP_
#define SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__CONFIDENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__soccer_vision_attribute_msgs__msg__Confidence __attribute__((deprecated))
#else
# define DEPRECATED__soccer_vision_attribute_msgs__msg__Confidence __declspec(deprecated)
#endif

namespace soccer_vision_attribute_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Confidence_
{
  using Type = Confidence_<ContainerAllocator>;

  explicit Confidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->confidence = -1.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->confidence = 0.0f;
    }
  }

  explicit Confidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->confidence = -1.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr float CONFIDENCE_UNKNOWN =
    -1.0;

  // pointer types
  using RawPtr =
    soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__soccer_vision_attribute_msgs__msg__Confidence
    std::shared_ptr<soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__soccer_vision_attribute_msgs__msg__Confidence
    std::shared_ptr<soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Confidence_ & other) const
  {
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Confidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Confidence_

// alias to use template instance with default allocator
using Confidence =
  soccer_vision_attribute_msgs::msg::Confidence_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr float Confidence_<ContainerAllocator>::CONFIDENCE_UNKNOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace soccer_vision_attribute_msgs

#endif  // SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__CONFIDENCE__STRUCT_HPP_
