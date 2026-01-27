// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from soccer_vision_3d_msgs:msg/MarkingSegment.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_SEGMENT__STRUCT_HPP_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_SEGMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start'
// Member 'end'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__soccer_vision_3d_msgs__msg__MarkingSegment __attribute__((deprecated))
#else
# define DEPRECATED__soccer_vision_3d_msgs__msg__MarkingSegment __declspec(deprecated)
#endif

namespace soccer_vision_3d_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MarkingSegment_
{
  using Type = MarkingSegment_<ContainerAllocator>;

  explicit MarkingSegment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_init),
    end(_init),
    confidence(_init)
  {
    (void)_init;
  }

  explicit MarkingSegment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_alloc, _init),
    end(_alloc, _init),
    confidence(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _start_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _start_type start;
  using _end_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _end_type end;
  using _confidence_type =
    soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator>;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__start(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__end(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->end = _arg;
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
    soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator> *;
  using ConstRawPtr =
    const soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__soccer_vision_3d_msgs__msg__MarkingSegment
    std::shared_ptr<soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__soccer_vision_3d_msgs__msg__MarkingSegment
    std::shared_ptr<soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MarkingSegment_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->end != other.end) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const MarkingSegment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MarkingSegment_

// alias to use template instance with default allocator
using MarkingSegment =
  soccer_vision_3d_msgs::msg::MarkingSegment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace soccer_vision_3d_msgs

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_SEGMENT__STRUCT_HPP_
