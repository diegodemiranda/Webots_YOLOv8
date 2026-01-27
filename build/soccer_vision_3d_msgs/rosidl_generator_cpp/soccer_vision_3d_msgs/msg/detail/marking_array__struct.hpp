// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from soccer_vision_3d_msgs:msg/MarkingArray.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_ARRAY__STRUCT_HPP_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_ARRAY__STRUCT_HPP_

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
// Member 'ellipses'
#include "soccer_vision_3d_msgs/msg/detail/marking_ellipse__struct.hpp"
// Member 'intersections'
#include "soccer_vision_3d_msgs/msg/detail/marking_intersection__struct.hpp"
// Member 'segments'
#include "soccer_vision_3d_msgs/msg/detail/marking_segment__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__soccer_vision_3d_msgs__msg__MarkingArray __attribute__((deprecated))
#else
# define DEPRECATED__soccer_vision_3d_msgs__msg__MarkingArray __declspec(deprecated)
#endif

namespace soccer_vision_3d_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MarkingArray_
{
  using Type = MarkingArray_<ContainerAllocator>;

  explicit MarkingArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit MarkingArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ellipses_type =
    std::vector<soccer_vision_3d_msgs::msg::MarkingEllipse_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<soccer_vision_3d_msgs::msg::MarkingEllipse_<ContainerAllocator>>>;
  _ellipses_type ellipses;
  using _intersections_type =
    std::vector<soccer_vision_3d_msgs::msg::MarkingIntersection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<soccer_vision_3d_msgs::msg::MarkingIntersection_<ContainerAllocator>>>;
  _intersections_type intersections;
  using _segments_type =
    std::vector<soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator>>>;
  _segments_type segments;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ellipses(
    const std::vector<soccer_vision_3d_msgs::msg::MarkingEllipse_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<soccer_vision_3d_msgs::msg::MarkingEllipse_<ContainerAllocator>>> & _arg)
  {
    this->ellipses = _arg;
    return *this;
  }
  Type & set__intersections(
    const std::vector<soccer_vision_3d_msgs::msg::MarkingIntersection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<soccer_vision_3d_msgs::msg::MarkingIntersection_<ContainerAllocator>>> & _arg)
  {
    this->intersections = _arg;
    return *this;
  }
  Type & set__segments(
    const std::vector<soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<soccer_vision_3d_msgs::msg::MarkingSegment_<ContainerAllocator>>> & _arg)
  {
    this->segments = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    soccer_vision_3d_msgs::msg::MarkingArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const soccer_vision_3d_msgs::msg::MarkingArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<soccer_vision_3d_msgs::msg::MarkingArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<soccer_vision_3d_msgs::msg::MarkingArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      soccer_vision_3d_msgs::msg::MarkingArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<soccer_vision_3d_msgs::msg::MarkingArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      soccer_vision_3d_msgs::msg::MarkingArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<soccer_vision_3d_msgs::msg::MarkingArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<soccer_vision_3d_msgs::msg::MarkingArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<soccer_vision_3d_msgs::msg::MarkingArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__soccer_vision_3d_msgs__msg__MarkingArray
    std::shared_ptr<soccer_vision_3d_msgs::msg::MarkingArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__soccer_vision_3d_msgs__msg__MarkingArray
    std::shared_ptr<soccer_vision_3d_msgs::msg::MarkingArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MarkingArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ellipses != other.ellipses) {
      return false;
    }
    if (this->intersections != other.intersections) {
      return false;
    }
    if (this->segments != other.segments) {
      return false;
    }
    return true;
  }
  bool operator!=(const MarkingArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MarkingArray_

// alias to use template instance with default allocator
using MarkingArray =
  soccer_vision_3d_msgs::msg::MarkingArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace soccer_vision_3d_msgs

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__MARKING_ARRAY__STRUCT_HPP_
