// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from soccer_vision_attribute_msgs:msg/Goalpost.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__GOALPOST__STRUCT_HPP_
#define SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__GOALPOST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__soccer_vision_attribute_msgs__msg__Goalpost __attribute__((deprecated))
#else
# define DEPRECATED__soccer_vision_attribute_msgs__msg__Goalpost __declspec(deprecated)
#endif

namespace soccer_vision_attribute_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Goalpost_
{
  using Type = Goalpost_<ContainerAllocator>;

  explicit Goalpost_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->side = 0;
      this->team = 0;
    }
  }

  explicit Goalpost_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->side = 0;
      this->team = 0;
    }
  }

  // field types and members
  using _side_type =
    uint8_t;
  _side_type side;
  using _team_type =
    uint8_t;
  _team_type team;

  // setters for named parameter idiom
  Type & set__side(
    const uint8_t & _arg)
  {
    this->side = _arg;
    return *this;
  }
  Type & set__team(
    const uint8_t & _arg)
  {
    this->team = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SIDE_UNKNOWN =
    0u;
  static constexpr uint8_t SIDE_LEFT =
    1u;
  static constexpr uint8_t SIDE_RIGHT =
    2u;
  static constexpr uint8_t TEAM_UNKNOWN =
    0u;
  static constexpr uint8_t TEAM_OWN =
    1u;
  static constexpr uint8_t TEAM_OPPONENT =
    2u;

  // pointer types
  using RawPtr =
    soccer_vision_attribute_msgs::msg::Goalpost_<ContainerAllocator> *;
  using ConstRawPtr =
    const soccer_vision_attribute_msgs::msg::Goalpost_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<soccer_vision_attribute_msgs::msg::Goalpost_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<soccer_vision_attribute_msgs::msg::Goalpost_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      soccer_vision_attribute_msgs::msg::Goalpost_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<soccer_vision_attribute_msgs::msg::Goalpost_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      soccer_vision_attribute_msgs::msg::Goalpost_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<soccer_vision_attribute_msgs::msg::Goalpost_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<soccer_vision_attribute_msgs::msg::Goalpost_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<soccer_vision_attribute_msgs::msg::Goalpost_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__soccer_vision_attribute_msgs__msg__Goalpost
    std::shared_ptr<soccer_vision_attribute_msgs::msg::Goalpost_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__soccer_vision_attribute_msgs__msg__Goalpost
    std::shared_ptr<soccer_vision_attribute_msgs::msg::Goalpost_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Goalpost_ & other) const
  {
    if (this->side != other.side) {
      return false;
    }
    if (this->team != other.team) {
      return false;
    }
    return true;
  }
  bool operator!=(const Goalpost_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Goalpost_

// alias to use template instance with default allocator
using Goalpost =
  soccer_vision_attribute_msgs::msg::Goalpost_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Goalpost_<ContainerAllocator>::SIDE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Goalpost_<ContainerAllocator>::SIDE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Goalpost_<ContainerAllocator>::SIDE_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Goalpost_<ContainerAllocator>::TEAM_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Goalpost_<ContainerAllocator>::TEAM_OWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Goalpost_<ContainerAllocator>::TEAM_OPPONENT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace soccer_vision_attribute_msgs

#endif  // SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__GOALPOST__STRUCT_HPP_
