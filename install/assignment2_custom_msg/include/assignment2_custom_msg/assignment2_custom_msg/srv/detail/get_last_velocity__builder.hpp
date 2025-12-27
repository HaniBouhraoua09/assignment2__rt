// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assignment2_custom_msg:srv/GetLastVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msg/srv/get_last_velocity.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__GET_LAST_VELOCITY__BUILDER_HPP_
#define ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__GET_LAST_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assignment2_custom_msg/srv/detail/get_last_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assignment2_custom_msg
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msg::srv::GetLastVelocity_Request>()
{
  return ::assignment2_custom_msg::srv::GetLastVelocity_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace assignment2_custom_msg


namespace assignment2_custom_msg
{

namespace srv
{

namespace builder
{

class Init_GetLastVelocity_Response_avg_angular
{
public:
  explicit Init_GetLastVelocity_Response_avg_angular(::assignment2_custom_msg::srv::GetLastVelocity_Response & msg)
  : msg_(msg)
  {}
  ::assignment2_custom_msg::srv::GetLastVelocity_Response avg_angular(::assignment2_custom_msg::srv::GetLastVelocity_Response::_avg_angular_type arg)
  {
    msg_.avg_angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msg::srv::GetLastVelocity_Response msg_;
};

class Init_GetLastVelocity_Response_avg_linear
{
public:
  Init_GetLastVelocity_Response_avg_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLastVelocity_Response_avg_angular avg_linear(::assignment2_custom_msg::srv::GetLastVelocity_Response::_avg_linear_type arg)
  {
    msg_.avg_linear = std::move(arg);
    return Init_GetLastVelocity_Response_avg_angular(msg_);
  }

private:
  ::assignment2_custom_msg::srv::GetLastVelocity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msg::srv::GetLastVelocity_Response>()
{
  return assignment2_custom_msg::srv::builder::Init_GetLastVelocity_Response_avg_linear();
}

}  // namespace assignment2_custom_msg


namespace assignment2_custom_msg
{

namespace srv
{

namespace builder
{

class Init_GetLastVelocity_Event_response
{
public:
  explicit Init_GetLastVelocity_Event_response(::assignment2_custom_msg::srv::GetLastVelocity_Event & msg)
  : msg_(msg)
  {}
  ::assignment2_custom_msg::srv::GetLastVelocity_Event response(::assignment2_custom_msg::srv::GetLastVelocity_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment2_custom_msg::srv::GetLastVelocity_Event msg_;
};

class Init_GetLastVelocity_Event_request
{
public:
  explicit Init_GetLastVelocity_Event_request(::assignment2_custom_msg::srv::GetLastVelocity_Event & msg)
  : msg_(msg)
  {}
  Init_GetLastVelocity_Event_response request(::assignment2_custom_msg::srv::GetLastVelocity_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetLastVelocity_Event_response(msg_);
  }

private:
  ::assignment2_custom_msg::srv::GetLastVelocity_Event msg_;
};

class Init_GetLastVelocity_Event_info
{
public:
  Init_GetLastVelocity_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLastVelocity_Event_request info(::assignment2_custom_msg::srv::GetLastVelocity_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetLastVelocity_Event_request(msg_);
  }

private:
  ::assignment2_custom_msg::srv::GetLastVelocity_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment2_custom_msg::srv::GetLastVelocity_Event>()
{
  return assignment2_custom_msg::srv::builder::Init_GetLastVelocity_Event_info();
}

}  // namespace assignment2_custom_msg

#endif  // ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__GET_LAST_VELOCITY__BUILDER_HPP_
