// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from assignment2_custom_msg:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice
#ifndef ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "assignment2_custom_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "assignment2_custom_msg/msg/detail/obstacle_info__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assignment2_custom_msg
bool cdr_serialize_assignment2_custom_msg__msg__ObstacleInfo(
  const assignment2_custom_msg__msg__ObstacleInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assignment2_custom_msg
bool cdr_deserialize_assignment2_custom_msg__msg__ObstacleInfo(
  eprosima::fastcdr::Cdr &,
  assignment2_custom_msg__msg__ObstacleInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assignment2_custom_msg
size_t get_serialized_size_assignment2_custom_msg__msg__ObstacleInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assignment2_custom_msg
size_t max_serialized_size_assignment2_custom_msg__msg__ObstacleInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assignment2_custom_msg
bool cdr_serialize_key_assignment2_custom_msg__msg__ObstacleInfo(
  const assignment2_custom_msg__msg__ObstacleInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assignment2_custom_msg
size_t get_serialized_size_key_assignment2_custom_msg__msg__ObstacleInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assignment2_custom_msg
size_t max_serialized_size_key_assignment2_custom_msg__msg__ObstacleInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assignment2_custom_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, assignment2_custom_msg, msg, ObstacleInfo)();

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
