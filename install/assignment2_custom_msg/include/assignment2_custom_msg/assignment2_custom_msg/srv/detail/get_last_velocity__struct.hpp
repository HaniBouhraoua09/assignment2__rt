// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from assignment2_custom_msg:srv/GetLastVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "assignment2_custom_msg/srv/get_last_velocity.hpp"


#ifndef ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__GET_LAST_VELOCITY__STRUCT_HPP_
#define ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__GET_LAST_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__assignment2_custom_msg__srv__GetLastVelocity_Request __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_custom_msg__srv__GetLastVelocity_Request __declspec(deprecated)
#endif

namespace assignment2_custom_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLastVelocity_Request_
{
  using Type = GetLastVelocity_Request_<ContainerAllocator>;

  explicit GetLastVelocity_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetLastVelocity_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_custom_msg__srv__GetLastVelocity_Request
    std::shared_ptr<assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_custom_msg__srv__GetLastVelocity_Request
    std::shared_ptr<assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLastVelocity_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLastVelocity_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLastVelocity_Request_

// alias to use template instance with default allocator
using GetLastVelocity_Request =
  assignment2_custom_msg::srv::GetLastVelocity_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace assignment2_custom_msg


#ifndef _WIN32
# define DEPRECATED__assignment2_custom_msg__srv__GetLastVelocity_Response __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_custom_msg__srv__GetLastVelocity_Response __declspec(deprecated)
#endif

namespace assignment2_custom_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLastVelocity_Response_
{
  using Type = GetLastVelocity_Response_<ContainerAllocator>;

  explicit GetLastVelocity_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->avg_linear = 0.0f;
      this->avg_angular = 0.0f;
    }
  }

  explicit GetLastVelocity_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->avg_linear = 0.0f;
      this->avg_angular = 0.0f;
    }
  }

  // field types and members
  using _avg_linear_type =
    float;
  _avg_linear_type avg_linear;
  using _avg_angular_type =
    float;
  _avg_angular_type avg_angular;

  // setters for named parameter idiom
  Type & set__avg_linear(
    const float & _arg)
  {
    this->avg_linear = _arg;
    return *this;
  }
  Type & set__avg_angular(
    const float & _arg)
  {
    this->avg_angular = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_custom_msg__srv__GetLastVelocity_Response
    std::shared_ptr<assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_custom_msg__srv__GetLastVelocity_Response
    std::shared_ptr<assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLastVelocity_Response_ & other) const
  {
    if (this->avg_linear != other.avg_linear) {
      return false;
    }
    if (this->avg_angular != other.avg_angular) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLastVelocity_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLastVelocity_Response_

// alias to use template instance with default allocator
using GetLastVelocity_Response =
  assignment2_custom_msg::srv::GetLastVelocity_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace assignment2_custom_msg


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__assignment2_custom_msg__srv__GetLastVelocity_Event __attribute__((deprecated))
#else
# define DEPRECATED__assignment2_custom_msg__srv__GetLastVelocity_Event __declspec(deprecated)
#endif

namespace assignment2_custom_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLastVelocity_Event_
{
  using Type = GetLastVelocity_Event_<ContainerAllocator>;

  explicit GetLastVelocity_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetLastVelocity_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<assignment2_custom_msg::srv::GetLastVelocity_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<assignment2_custom_msg::srv::GetLastVelocity_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assignment2_custom_msg::srv::GetLastVelocity_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const assignment2_custom_msg::srv::GetLastVelocity_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assignment2_custom_msg::srv::GetLastVelocity_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assignment2_custom_msg::srv::GetLastVelocity_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msg::srv::GetLastVelocity_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msg::srv::GetLastVelocity_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assignment2_custom_msg::srv::GetLastVelocity_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assignment2_custom_msg::srv::GetLastVelocity_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assignment2_custom_msg::srv::GetLastVelocity_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assignment2_custom_msg::srv::GetLastVelocity_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assignment2_custom_msg__srv__GetLastVelocity_Event
    std::shared_ptr<assignment2_custom_msg::srv::GetLastVelocity_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assignment2_custom_msg__srv__GetLastVelocity_Event
    std::shared_ptr<assignment2_custom_msg::srv::GetLastVelocity_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLastVelocity_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLastVelocity_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLastVelocity_Event_

// alias to use template instance with default allocator
using GetLastVelocity_Event =
  assignment2_custom_msg::srv::GetLastVelocity_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace assignment2_custom_msg

namespace assignment2_custom_msg
{

namespace srv
{

struct GetLastVelocity
{
  using Request = assignment2_custom_msg::srv::GetLastVelocity_Request;
  using Response = assignment2_custom_msg::srv::GetLastVelocity_Response;
  using Event = assignment2_custom_msg::srv::GetLastVelocity_Event;
};

}  // namespace srv

}  // namespace assignment2_custom_msg

#endif  // ASSIGNMENT2_CUSTOM_MSG__SRV__DETAIL__GET_LAST_VELOCITY__STRUCT_HPP_
