// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from soccer_vision_3d_msgs:msg/Goalpost.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_3D_MSGS__MSG__DETAIL__GOALPOST__STRUCT_HPP_
#define SOCCER_VISION_3D_MSGS__MSG__DETAIL__GOALPOST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bb'
#include "vision_msgs/msg/detail/bounding_box3_d__struct.hpp"
// Member 'attributes'
#include "soccer_vision_attribute_msgs/msg/detail/goalpost__struct.hpp"
// Member 'confidence'
#include "soccer_vision_attribute_msgs/msg/detail/confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__soccer_vision_3d_msgs__msg__Goalpost __attribute__((deprecated))
#else
# define DEPRECATED__soccer_vision_3d_msgs__msg__Goalpost __declspec(deprecated)
#endif

namespace soccer_vision_3d_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Goalpost_
{
  using Type = Goalpost_<ContainerAllocator>;

  explicit Goalpost_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bb(_init),
    attributes(_init),
    confidence(_init)
  {
    (void)_init;
  }

  explicit Goalpost_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bb(_alloc, _init),
    attributes(_alloc, _init),
    confidence(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _bb_type =
    vision_msgs::msg::BoundingBox3D_<ContainerAllocator>;
  _bb_type bb;
  using _attributes_type =
    soccer_vision_attribute_msgs::msg::Goalpost_<ContainerAllocator>;
  _attributes_type attributes;
  using _confidence_type =
    soccer_vision_attribute_msgs::msg::Confidence_<ContainerAllocator>;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__bb(
    const vision_msgs::msg::BoundingBox3D_<ContainerAllocator> & _arg)
  {
    this->bb = _arg;
    return *this;
  }
  Type & set__attributes(
    const soccer_vision_attribute_msgs::msg::Goalpost_<ContainerAllocator> & _arg)
  {
    this->attributes = _arg;
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
    soccer_vision_3d_msgs::msg::Goalpost_<ContainerAllocator> *;
  using ConstRawPtr =
    const soccer_vision_3d_msgs::msg::Goalpost_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<soccer_vision_3d_msgs::msg::Goalpost_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<soccer_vision_3d_msgs::msg::Goalpost_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      soccer_vision_3d_msgs::msg::Goalpost_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<soccer_vision_3d_msgs::msg::Goalpost_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      soccer_vision_3d_msgs::msg::Goalpost_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<soccer_vision_3d_msgs::msg::Goalpost_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<soccer_vision_3d_msgs::msg::Goalpost_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<soccer_vision_3d_msgs::msg::Goalpost_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__soccer_vision_3d_msgs__msg__Goalpost
    std::shared_ptr<soccer_vision_3d_msgs::msg::Goalpost_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__soccer_vision_3d_msgs__msg__Goalpost
    std::shared_ptr<soccer_vision_3d_msgs::msg::Goalpost_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Goalpost_ & other) const
  {
    if (this->bb != other.bb) {
      return false;
    }
    if (this->attributes != other.attributes) {
      return false;
    }
    if (this->confidence != other.confidence) {
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
  soccer_vision_3d_msgs::msg::Goalpost_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace soccer_vision_3d_msgs

#endif  // SOCCER_VISION_3D_MSGS__MSG__DETAIL__GOALPOST__STRUCT_HPP_
