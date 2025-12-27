// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assignment2_custom_msg:srv/SetThreshold.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msg/srv/set_threshold.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__SET_THRESHOLD__BUILDER_HPP_
#define ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__SET_THRESHOLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assignment2_custom_msg/srv/detail/set_threshold__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assignment2_custom_msg
{

namespace srv
{

namespace builder
{

class Init_SetThreshold_Request_new_threshold
{
public:
  Init_SetThreshold_Request_new_threshold()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment2_custom_msg::srv::SetThreshold_Request new_threshold(::assignment2_custom_msg::srv::SetThreshold_Request::_new_threshold_type arg)
  {
    msg_.new_threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msg::srv::SetThreshold_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msg::srv::SetThreshold_Request>()
{
  return assignment2_custom_msg::srv::builder::Init_SetThreshold_Request_new_threshold();
}

}  // namespace assignment2_custom_msg


namespace assignment2_custom_msg
{

namespace srv
{

namespace builder
{

class Init_SetThreshold_Response_success
{
public:
  Init_SetThreshold_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment2_custom_msg::srv::SetThreshold_Response success(::assignment2_custom_msg::srv::SetThreshold_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msg::srv::SetThreshold_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msg::srv::SetThreshold_Response>()
{
  return assignment2_custom_msg::srv::builder::Init_SetThreshold_Response_success();
}

}  // namespace assignment2_custom_msg


namespace assignment2_custom_msg
{

namespace srv
{

namespace builder
{

class Init_SetThreshold_Event_response
{
public:
  explicit Init_SetThreshold_Event_response(::assignment2_custom_msg::srv::SetThreshold_Event & msg)
  : msg_(msg)
  {}
  ::assignment2_custom_msg::srv::SetThreshold_Event response(::assignment2_custom_msg::srv::SetThreshold_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msg::srv::SetThreshold_Event msg_;
};

class Init_SetThreshold_Event_request
{
public:
  explicit Init_SetThreshold_Event_request(::assignment2_custom_msg::srv::SetThreshold_Event & msg)
  : msg_(msg)
  {}
  Init_SetThreshold_Event_response request(::assignment2_custom_msg::srv::SetThreshold_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetThreshold_Event_response(msg_);
  }

private:
  ::assignment2_custom_msg::srv::SetThreshold_Event msg_;
};

class Init_SetThreshold_Event_info
{
public:
  Init_SetThreshold_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetThreshold_Event_request info(::assignment2_custom_msg::srv::SetThreshold_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetThreshold_Event_request(msg_);
  }

private:
  ::assignment2_custom_msg::srv::SetThreshold_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msg::srv::SetThreshold_Event>()
{
  return assignment2_custom_msg::srv::builder::Init_SetThreshold_Event_info();
}

}  // namespace assignment2_custom_msg

#endif  // ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__SET_THRESHOLD__BUILDER_HPP_
