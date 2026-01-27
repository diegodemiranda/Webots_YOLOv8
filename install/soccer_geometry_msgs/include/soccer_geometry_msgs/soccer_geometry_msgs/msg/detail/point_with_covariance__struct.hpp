// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from soccer_geometry_msgs:msg/PointWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__STRUCT_HPP_
#define SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__soccer_geometry_msgs__msg__PointWithCovariance __attribute__((deprecated))
#else
# define DEPRECATED__soccer_geometry_msgs__msg__PointWithCovariance __declspec(deprecated)
#endif

namespace soccer_geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointWithCovariance_
{
  using Type = PointWithCovariance_<ContainerAllocator>;

  explicit PointWithCovariance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  explicit PointWithCovariance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init),
    covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  // field types and members
  using _point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _point_type point;
  using _covariance_type =
    std::array<double, 9>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type & set__point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::array<double, 9> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    soccer_geometry_msgs::msg::PointWithCovariance_<ContainerAllocator> *;
  using ConstRawPtr =
    const soccer_geometry_msgs::msg::PointWithCovariance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<soccer_geometry_msgs::msg::PointWithCovariance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<soccer_geometry_msgs::msg::PointWithCovariance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      soccer_geometry_msgs::msg::PointWithCovariance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<soccer_geometry_msgs::msg::PointWithCovariance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      soccer_geometry_msgs::msg::PointWithCovariance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<soccer_geometry_msgs::msg::PointWithCovariance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<soccer_geometry_msgs::msg::PointWithCovariance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<soccer_geometry_msgs::msg::PointWithCovariance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__soccer_geometry_msgs__msg__PointWithCovariance
    std::shared_ptr<soccer_geometry_msgs::msg::PointWithCovariance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__soccer_geometry_msgs__msg__PointWithCovariance
    std::shared_ptr<soccer_geometry_msgs::msg::PointWithCovariance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointWithCovariance_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointWithCovariance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointWithCovariance_

// alias to use template instance with default allocator
using PointWithCovariance =
  soccer_geometry_msgs::msg::PointWithCovariance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace soccer_geometry_msgs

#endif  // SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__STRUCT_HPP_
