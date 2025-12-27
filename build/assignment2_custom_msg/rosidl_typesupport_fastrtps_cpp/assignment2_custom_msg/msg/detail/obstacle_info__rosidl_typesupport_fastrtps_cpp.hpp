// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from assignment2_custom_msg:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "assignment2_custom_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "assignment2_custom_msg/msg/detail/obstacle_info__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace assignment2_custom_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assignment2_custom_msg
cdr_serialize(
  const assignment2_custom_msg::msg::ObstacleInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assignment2_custom_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  assignment2_custom_msg::msg::ObstacleInfo & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assignment2_custom_msg
get_serialized_size(
  const assignment2_custom_msg::msg::ObstacleInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assignment2_custom_msg
max_serialized_size_ObstacleInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assignment2_custom_msg
cdr_serialize_key(
  const assignment2_custom_msg::msg::ObstacleInfo & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assignment2_custom_msg
get_serialized_size_key(
  const assignment2_custom_msg::msg::ObstacleInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assignment2_custom_msg
max_serialized_size_key_ObstacleInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace assignment2_custom_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assignment2_custom_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment2_custom_msg, msg, ObstacleInfo)();

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
