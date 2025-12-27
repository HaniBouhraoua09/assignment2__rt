// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assignment2_custom_msg:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msg/msg/obstacle_info.h"


#ifndef ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__STRUCT_H_
#define ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ObstacleInfo in the package assignment2_custom_msg.
typedef struct assignment2_custom_msg__msg__ObstacleInfo
{
  float distance;
  rosidl_runtime_c__String direction;
  float threshold;
} assignment2_custom_msg__msg__ObstacleInfo;

// Struct for a sequence of assignment2_custom_msg__msg__ObstacleInfo.
typedef struct assignment2_custom_msg__msg__ObstacleInfo__Sequence
{
  assignment2_custom_msg__msg__ObstacleInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_custom_msg__msg__ObstacleInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT2_CUSTOM_MSG__MSG__DETAIL__OBSTACLE_INFO__STRUCT_H_
