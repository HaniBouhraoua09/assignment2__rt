// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assignment2_custom_msg:srv/SetThreshold.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msg/srv/set_threshold.h"


#ifndef ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__SET_THRESHOLD__STRUCT_H_
#define ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__SET_THRESHOLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetThreshold in the package assignment2_custom_msg.
typedef struct assignment2_custom_msg__srv__SetThreshold_Request
{
  float new_threshold;
} assignment2_custom_msg__srv__SetThreshold_Request;

// Struct for a sequence of assignment2_custom_msg__srv__SetThreshold_Request.
typedef struct assignment2_custom_msg__srv__SetThreshold_Request__Sequence
{
  assignment2_custom_msg__srv__SetThreshold_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_custom_msg__srv__SetThreshold_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetThreshold in the package assignment2_custom_msg.
typedef struct assignment2_custom_msg__srv__SetThreshold_Response
{
  bool success;
} assignment2_custom_msg__srv__SetThreshold_Response;

// Struct for a sequence of assignment2_custom_msg__srv__SetThreshold_Response.
typedef struct assignment2_custom_msg__srv__SetThreshold_Response__Sequence
{
  assignment2_custom_msg__srv__SetThreshold_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_custom_msg__srv__SetThreshold_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  assignment2_custom_msg__srv__SetThreshold_Event__request__MAX_SIZE = 1
};
// response
enum
{
  assignment2_custom_msg__srv__SetThreshold_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetThreshold in the package assignment2_custom_msg.
typedef struct assignment2_custom_msg__srv__SetThreshold_Event
{
  service_msgs__msg__ServiceEventInfo info;
  assignment2_custom_msg__srv__SetThreshold_Request__Sequence request;
  assignment2_custom_msg__srv__SetThreshold_Response__Sequence response;
} assignment2_custom_msg__srv__SetThreshold_Event;

// Struct for a sequence of assignment2_custom_msg__srv__SetThreshold_Event.
typedef struct assignment2_custom_msg__srv__SetThreshold_Event__Sequence
{
  assignment2_custom_msg__srv__SetThreshold_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment2_custom_msg__srv__SetThreshold_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__SET_THRESHOLD__STRUCT_H_
