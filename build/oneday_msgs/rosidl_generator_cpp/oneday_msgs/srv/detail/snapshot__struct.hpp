// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from oneday_msgs:srv/Snapshot.idl
// generated code does not contain a copyright notice

#ifndef ONEDAY_MSGS__SRV__DETAIL__SNAPSHOT__STRUCT_HPP_
#define ONEDAY_MSGS__SRV__DETAIL__SNAPSHOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__oneday_msgs__srv__Snapshot_Request __attribute__((deprecated))
#else
# define DEPRECATED__oneday_msgs__srv__Snapshot_Request __declspec(deprecated)
#endif

namespace oneday_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Snapshot_Request_
{
  using Type = Snapshot_Request_<ContainerAllocator>;

  explicit Snapshot_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit Snapshot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    oneday_msgs::srv::Snapshot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const oneday_msgs::srv::Snapshot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<oneday_msgs::srv::Snapshot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<oneday_msgs::srv::Snapshot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      oneday_msgs::srv::Snapshot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<oneday_msgs::srv::Snapshot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      oneday_msgs::srv::Snapshot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<oneday_msgs::srv::Snapshot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<oneday_msgs::srv::Snapshot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<oneday_msgs::srv::Snapshot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__oneday_msgs__srv__Snapshot_Request
    std::shared_ptr<oneday_msgs::srv::Snapshot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__oneday_msgs__srv__Snapshot_Request
    std::shared_ptr<oneday_msgs::srv::Snapshot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Snapshot_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Snapshot_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Snapshot_Request_

// alias to use template instance with default allocator
using Snapshot_Request =
  oneday_msgs::srv::Snapshot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace oneday_msgs


#ifndef _WIN32
# define DEPRECATED__oneday_msgs__srv__Snapshot_Response __attribute__((deprecated))
#else
# define DEPRECATED__oneday_msgs__srv__Snapshot_Response __declspec(deprecated)
#endif

namespace oneday_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Snapshot_Response_
{
  using Type = Snapshot_Response_<ContainerAllocator>;

  explicit Snapshot_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Snapshot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    oneday_msgs::srv::Snapshot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const oneday_msgs::srv::Snapshot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<oneday_msgs::srv::Snapshot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<oneday_msgs::srv::Snapshot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      oneday_msgs::srv::Snapshot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<oneday_msgs::srv::Snapshot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      oneday_msgs::srv::Snapshot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<oneday_msgs::srv::Snapshot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<oneday_msgs::srv::Snapshot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<oneday_msgs::srv::Snapshot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__oneday_msgs__srv__Snapshot_Response
    std::shared_ptr<oneday_msgs::srv::Snapshot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__oneday_msgs__srv__Snapshot_Response
    std::shared_ptr<oneday_msgs::srv::Snapshot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Snapshot_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Snapshot_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Snapshot_Response_

// alias to use template instance with default allocator
using Snapshot_Response =
  oneday_msgs::srv::Snapshot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace oneday_msgs

namespace oneday_msgs
{

namespace srv
{

struct Snapshot
{
  using Request = oneday_msgs::srv::Snapshot_Request;
  using Response = oneday_msgs::srv::Snapshot_Response;
};

}  // namespace srv

}  // namespace oneday_msgs

#endif  // ONEDAY_MSGS__SRV__DETAIL__SNAPSHOT__STRUCT_HPP_
