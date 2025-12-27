// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assignment2_custom_msg:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msg/msg/obstacle_info.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__BUILDER_HPP_
#define ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assignment2_custom_msg/msg/detail/obstacle_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assignment2_custom_msg
{

namespace msg
{

namespace builder
{

class Init_ObstacleInfo_threshold
{
public:
  explicit Init_ObstacleInfo_threshold(::assignment2_custom_msg::msg::ObstacleInfo & msg)
  : msg_(msg)
  {}
  ::assignment2_custom_msg::msg::ObstacleInfo threshold(::assignment2_custom_msg::msg::ObstacleInfo::_threshold_type arg)
  {
    msg_.threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msg::msg::ObstacleInfo msg_;
};

class Init_ObstacleInfo_direction
{
public:
  explicit Init_ObstacleInfo_direction(::assignment2_custom_msg::msg::ObstacleInfo & msg)
  : msg_(msg)
  {}
  Init_ObstacleInfo_threshold direction(::assignment2_custom_msg::msg::ObstacleInfo::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_ObstacleInfo_threshold(msg_);
  }

private:
  ::assignment2_custom_msg::msg::ObstacleInfo msg_;
};

class Init_ObstacleInfo_distance
{
public:
  Init_ObstacleInfo_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleInfo_direction distance(::assignment2_custom_msg::msg::ObstacleInfo::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_ObstacleInfo_direction(msg_);
  }

private:
  ::assignment2_custom_msg::msg::ObstacleInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msg::msg::ObstacleInfo>()
{
  return assignment2_custom_msg::msg::builder::Init_ObstacleInfo_distance();
}

}  // namespace assignment2_custom_msg

#endif  // ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__BUILDER_HPP_
