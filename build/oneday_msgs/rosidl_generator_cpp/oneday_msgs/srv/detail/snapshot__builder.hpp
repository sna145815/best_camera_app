// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from oneday_msgs:srv/Snapshot.idl
// generated code does not contain a copyright notice

#ifndef ONEDAY_MSGS__SRV__DETAIL__SNAPSHOT__BUILDER_HPP_
#define ONEDAY_MSGS__SRV__DETAIL__SNAPSHOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "oneday_msgs/srv/detail/snapshot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace oneday_msgs
{

namespace srv
{

namespace builder
{

class Init_Snapshot_Request_name
{
public:
  Init_Snapshot_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::oneday_msgs::srv::Snapshot_Request name(::oneday_msgs::srv::Snapshot_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::oneday_msgs::srv::Snapshot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::oneday_msgs::srv::Snapshot_Request>()
{
  return oneday_msgs::srv::builder::Init_Snapshot_Request_name();
}

}  // namespace oneday_msgs


namespace oneday_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::oneday_msgs::srv::Snapshot_Response>()
{
  return ::oneday_msgs::srv::Snapshot_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace oneday_msgs

#endif  // ONEDAY_MSGS__SRV__DETAIL__SNAPSHOT__BUILDER_HPP_
