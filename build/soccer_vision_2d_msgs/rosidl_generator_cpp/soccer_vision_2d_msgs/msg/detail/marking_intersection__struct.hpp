// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from soccer_vision_2d_msgs:msg/MarkingIntersection.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__STRUCT_HPP_
#define SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'center'
#include "vision_msgs/msg/detail/point2_d__struct.hpp"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__soccer_vision_2d_msgs__msg__MarkingIntersection __attribute__((deprecated))
#else
# define DEPRECATED__soccer_vision_2d_msgs__msg__MarkingIntersection __declspec(deprecated)
#endif

namespace soccer_vision_2d_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MarkingIntersection_
{
  using Type = MarkingIntersection_<ContainerAllocator>;

  explicit MarkingIntersection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_init),
    confidence(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_rays = 0l;
    }
  }

  explicit MarkingIntersection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_alloc, _init),
    confidence(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_rays = 0l;
    }
  }

  // field types and members
  using _center_type =
    vision_msgs::msg::Point2D_<ContainerAllocator>;
  _center_type center;
  using _num_rays_type =
    int32_t;
  _num_rays_type num_rays;
  using _heading_rays_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _heading_rays_type heading_rays;
  using _confidence_type =
    soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator>;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__center(
    const vision_msgs::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__num_rays(
    const int32_t & _arg)
  {
    this->num_rays = _arg;
    return *this;
  }
  Type & set__heading_rays(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->heading_rays = _arg;
    return *this;
  }
  Type & set__confidence(
    const soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator> & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    soccer_vision_2d_msgs::msg::MarkingIntersection_<ContainerAllocator> *;
  using ConstRawPtr =
    const soccer_vision_2d_msgs::msg::MarkingIntersection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<soccer_vision_2d_msgs::msg::MarkingIntersection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<soccer_vision_2d_msgs::msg::MarkingIntersection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      soccer_vision_2d_msgs::msg::MarkingIntersection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<soccer_vision_2d_msgs::msg::MarkingIntersection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      soccer_vision_2d_msgs::msg::MarkingIntersection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<soccer_vision_2d_msgs::msg::MarkingIntersection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<soccer_vision_2d_msgs::msg::MarkingIntersection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<soccer_vision_2d_msgs::msg::MarkingIntersection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__soccer_vision_2d_msgs__msg__MarkingIntersection
    std::shared_ptr<soccer_vision_2d_msgs::msg::MarkingIntersection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__soccer_vision_2d_msgs__msg__MarkingIntersection
    std::shared_ptr<soccer_vision_2d_msgs::msg::MarkingIntersection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MarkingIntersection_ & other) const
  {
    if (this->center != other.center) {
      return false;
    }
    if (this->num_rays != other.num_rays) {
      return false;
    }
    if (this->heading_rays != other.heading_rays) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const MarkingIntersection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MarkingIntersection_

// alias to use template instance with default allocator
using MarkingIntersection =
  soccer_vision_2d_msgs::msg::MarkingIntersection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace soccer_vision_2d_msgs

#endif  // SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_INTERSECTION__STRUCT_HPP_
