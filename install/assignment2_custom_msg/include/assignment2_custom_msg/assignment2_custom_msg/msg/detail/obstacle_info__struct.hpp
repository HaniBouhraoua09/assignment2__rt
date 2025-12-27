// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from assignment2_custom_msg:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msg/msg/obstacle_info.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__STRUCT_HPP_
#define ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__assignment2_custom_msg__msg__ObstacleInfo __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_custom_msg__msg__ObstacleInfo __declspec(deprecated)
#endif

namespace assignment2_custom_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleInfo_
{
  using Type = ObstacleInfo_<ContainerAllocator>;

  explicit ObstacleInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->direction = "";
      this->threshold = 0.0f;
    }
  }

  explicit ObstacleInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->direction = "";
      this->threshold = 0.0f;
    }
  }

  // field types and members
  using _distance_type =
    float;
  _distance_type distance;
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _direction_type direction;
  using _threshold_type =
    float;
  _threshold_type threshold;

  // setters for named parameter idiom
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__threshold(
    const float & _arg)
  {
    this->threshold = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_custom_msg::msg::ObstacleInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_custom_msg::msg::ObstacleInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_custom_msg::msg::ObstacleInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_custom_msg::msg::ObstacleInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msg::msg::ObstacleInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msg::msg::ObstacleInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msg::msg::ObstacleInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msg::msg::ObstacleInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_custom_msg::msg::ObstacleInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_custom_msg::msg::ObstacleInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_custom_msg__msg__ObstacleInfo
    std::shared_ptr<assignment2_custom_msg::msg::ObstacleInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_custom_msg__msg__ObstacleInfo
    std::shared_ptr<assignment2_custom_msg::msg::ObstacleInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleInfo_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->threshold != other.threshold) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleInfo_

// alias to use template instance with default allocator
using ObstacleInfo =
  assignment2_custom_msg::msg::ObstacleInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace assignment2_custom_msg

#endif  // ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__STRUCT_HPP_
