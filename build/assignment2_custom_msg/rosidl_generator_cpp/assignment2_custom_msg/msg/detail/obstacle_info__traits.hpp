// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from assignment2_custom_msg:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msg/msg/obstacle_info.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__TRAITS_HPP_
#define ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "assignment2_custom_msg/msg/detail/obstacle_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace assignment2_custom_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: threshold
  {
    out << "threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace assignment2_custom_msg

namespace rosidl_generator_traits
{

[[deprecated("use assignment2_custom_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const assignment2_custom_msg::msg::ObstacleInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  assignment2_custom_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use assignment2_custom_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const assignment2_custom_msg::msg::ObstacleInfo & msg)
{
  return assignment2_custom_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<assignment2_custom_msg::msg::ObstacleInfo>()
{
  return "assignment2_custom_msg::msg::ObstacleInfo";
}

template<>
inline const char * name<assignment2_custom_msg::msg::ObstacleInfo>()
{
  return "assignment2_custom_msg/msg/ObstacleInfo";
}

template<>
struct has_fixed_size<assignment2_custom_msg::msg::ObstacleInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<assignment2_custom_msg::msg::ObstacleInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<assignment2_custom_msg::msg::ObstacleInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__TRAITS_HPP_
