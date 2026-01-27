// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from soccer_vision_attribute_msgs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__ROBOT__STRUCT_HPP_
#define SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__soccer_vision_attribute_msgs__msg__Robot __attribute__((deprecated))
#else
# define DEPRECATED__soccer_vision_attribute_msgs__msg__Robot __declspec(deprecated)
#endif

namespace soccer_vision_attribute_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Robot_
{
  using Type = Robot_<ContainerAllocator>;

  explicit Robot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->player_number = 0;
      this->team = 0;
      this->state = 0;
      this->facing = 0;
    }
  }

  explicit Robot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->player_number = 0;
      this->team = 0;
      this->state = 0;
      this->facing = 0;
    }
  }

  // field types and members
  using _player_number_type =
    uint8_t;
  _player_number_type player_number;
  using _team_type =
    uint8_t;
  _team_type team;
  using _state_type =
    uint8_t;
  _state_type state;
  using _facing_type =
    uint8_t;
  _facing_type facing;

  // setters for named parameter idiom
  Type & set__player_number(
    const uint8_t & _arg)
  {
    this->player_number = _arg;
    return *this;
  }
  Type & set__team(
    const uint8_t & _arg)
  {
    this->team = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__facing(
    const uint8_t & _arg)
  {
    this->facing = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NUMBER_UNKNOWN =
    0u;
  static constexpr uint8_t TEAM_UNKNOWN =
    0u;
  static constexpr uint8_t TEAM_OWN =
    1u;
  static constexpr uint8_t TEAM_OPPONENT =
    2u;
  static constexpr uint8_t STATE_UNKNOWN =
    0u;
  static constexpr uint8_t STATE_STANDING =
    1u;
  static constexpr uint8_t STATE_FALLEN =
    2u;
  static constexpr uint8_t STATE_KICKING =
    3u;
  static constexpr uint8_t STATE_INACTIVE =
    4u;
  static constexpr uint8_t FACING_UNKNOWN =
    0u;
  static constexpr uint8_t FACING_THIS_WAY =
    1u;
  static constexpr uint8_t FACING_AWAY =
    2u;
  static constexpr uint8_t FACING_LEFT =
    3u;
  static constexpr uint8_t FACING_RIGHT =
    4u;

  // pointer types
  using RawPtr =
    soccer_vision_attribute_msgs::msg::Robot_<ContainerAllocator> *;
  using ConstRawPtr =
    const soccer_vision_attribute_msgs::msg::Robot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<soccer_vision_attribute_msgs::msg::Robot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<soccer_vision_attribute_msgs::msg::Robot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      soccer_vision_attribute_msgs::msg::Robot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<soccer_vision_attribute_msgs::msg::Robot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      soccer_vision_attribute_msgs::msg::Robot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<soccer_vision_attribute_msgs::msg::Robot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<soccer_vision_attribute_msgs::msg::Robot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<soccer_vision_attribute_msgs::msg::Robot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__soccer_vision_attribute_msgs__msg__Robot
    std::shared_ptr<soccer_vision_attribute_msgs::msg::Robot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__soccer_vision_attribute_msgs__msg__Robot
    std::shared_ptr<soccer_vision_attribute_msgs::msg::Robot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robot_ & other) const
  {
    if (this->player_number != other.player_number) {
      return false;
    }
    if (this->team != other.team) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->facing != other.facing) {
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
  soccer_vision_attribute_msgs::msg::Robot_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Robot_<ContainerAllocator>::NUMBER_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Robot_<ContainerAllocator>::TEAM_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Robot_<ContainerAllocator>::TEAM_OWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Robot_<ContainerAllocator>::TEAM_OPPONENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Robot_<ContainerAllocator>::STATE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Robot_<ContainerAllocator>::STATE_STANDING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Robot_<ContainerAllocator>::STATE_FALLEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Robot_<ContainerAllocator>::STATE_KICKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Robot_<ContainerAllocator>::STATE_INACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Robot_<ContainerAllocator>::FACING_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Robot_<ContainerAllocator>::FACING_THIS_WAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Robot_<ContainerAllocator>::FACING_AWAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Robot_<ContainerAllocator>::FACING_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Robot_<ContainerAllocator>::FACING_RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace soccer_vision_attribute_msgs

#endif  // SOCCER_VISION_ATTRIBUTE_MSGS__MSG__DETAIL__ROBOT__STRUCT_HPP_
