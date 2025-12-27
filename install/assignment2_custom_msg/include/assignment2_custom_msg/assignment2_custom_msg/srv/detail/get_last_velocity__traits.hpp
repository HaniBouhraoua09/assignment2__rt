// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from assignment2_custom_msg:srv/GetLastVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msg/srv/get_last_velocity.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__GET_LAST_VELOCITY__TRAITS_HPP_
#define ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__GET_LAST_VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "assignment2_custom_msg/srv/detail/get_last_velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace assignment2_custom_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLastVelocity_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLastVelocity_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLastVelocity_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace assignment2_custom_msg

namespace rosidl_generator_traits
{

[[deprecated("use assignment2_custom_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const assignment2_custom_msg::srv::GetLastVelocity_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  assignment2_custom_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use assignment2_custom_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const assignment2_custom_msg::srv::GetLastVelocity_Request & msg)
{
  return assignment2_custom_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<assignment2_custom_msg::srv::GetLastVelocity_Request>()
{
  return "assignment2_custom_msg::srv::GetLastVelocity_Request";
}

template<>
inline const char * name<assignment2_custom_msg::srv::GetLastVelocity_Request>()
{
  return "assignment2_custom_msg/srv/GetLastVelocity_Request";
}

template<>
struct has_fixed_size<assignment2_custom_msg::srv::GetLastVelocity_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<assignment2_custom_msg::srv::GetLastVelocity_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<assignment2_custom_msg::srv::GetLastVelocity_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace assignment2_custom_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLastVelocity_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: avg_linear
  {
    out << "avg_linear: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_linear, out);
    out << ", ";
  }

  // member: avg_angular
  {
    out << "avg_angular: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_angular, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLastVelocity_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: avg_linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avg_linear: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_linear, out);
    out << "\n";
  }

  // member: avg_angular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avg_angular: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_angular, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLastVelocity_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace assignment2_custom_msg

namespace rosidl_generator_traits
{

[[deprecated("use assignment2_custom_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const assignment2_custom_msg::srv::GetLastVelocity_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  assignment2_custom_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use assignment2_custom_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const assignment2_custom_msg::srv::GetLastVelocity_Response & msg)
{
  return assignment2_custom_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<assignment2_custom_msg::srv::GetLastVelocity_Response>()
{
  return "assignment2_custom_msg::srv::GetLastVelocity_Response";
}

template<>
inline const char * name<assignment2_custom_msg::srv::GetLastVelocity_Response>()
{
  return "assignment2_custom_msg/srv/GetLastVelocity_Response";
}

template<>
struct has_fixed_size<assignment2_custom_msg::srv::GetLastVelocity_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<assignment2_custom_msg::srv::GetLastVelocity_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<assignment2_custom_msg::srv::GetLastVelocity_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace assignment2_custom_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetLastVelocity_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetLastVelocity_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetLastVelocity_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace assignment2_custom_msg

namespace rosidl_generator_traits
{

[[deprecated("use assignment2_custom_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const assignment2_custom_msg::srv::GetLastVelocity_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  assignment2_custom_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use assignment2_custom_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const assignment2_custom_msg::srv::GetLastVelocity_Event & msg)
{
  return assignment2_custom_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<assignment2_custom_msg::srv::GetLastVelocity_Event>()
{
  return "assignment2_custom_msg::srv::GetLastVelocity_Event";
}

template<>
inline const char * name<assignment2_custom_msg::srv::GetLastVelocity_Event>()
{
  return "assignment2_custom_msg/srv/GetLastVelocity_Event";
}

template<>
struct has_fixed_size<assignment2_custom_msg::srv::GetLastVelocity_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<assignment2_custom_msg::srv::GetLastVelocity_Event>
  : std::integral_constant<bool, has_bounded_size<assignment2_custom_msg::srv::GetLastVelocity_Request>::value && has_bounded_size<assignment2_custom_msg::srv::GetLastVelocity_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<assignment2_custom_msg::srv::GetLastVelocity_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<assignment2_custom_msg::srv::GetLastVelocity>()
{
  return "assignment2_custom_msg::srv::GetLastVelocity";
}

template<>
inline const char * name<assignment2_custom_msg::srv::GetLastVelocity>()
{
  return "assignment2_custom_msg/srv/GetLastVelocity";
}

template<>
struct has_fixed_size<assignment2_custom_msg::srv::GetLastVelocity>
  : std::integral_constant<
    bool,
    has_fixed_size<assignment2_custom_msg::srv::GetLastVelocity_Request>::value &&
    has_fixed_size<assignment2_custom_msg::srv::GetLastVelocity_Response>::value
  >
{
};

template<>
struct has_bounded_size<assignment2_custom_msg::srv::GetLastVelocity>
  : std::integral_constant<
    bool,
    has_bounded_size<assignment2_custom_msg::srv::GetLastVelocity_Request>::value &&
    has_bounded_size<assignment2_custom_msg::srv::GetLastVelocity_Response>::value
  >
{
};

template<>
struct is_service<assignment2_custom_msg::srv::GetLastVelocity>
  : std::true_type
{
};

template<>
struct is_service_request<assignment2_custom_msg::srv::GetLastVelocity_Request>
  : std::true_type
{
};

template<>
struct is_service_response<assignment2_custom_msg::srv::GetLastVelocity_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__GET_LAST_VELOCITY__TRAITS_HPP_
