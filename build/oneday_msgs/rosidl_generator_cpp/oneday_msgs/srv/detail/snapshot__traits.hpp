// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from oneday_msgs:srv/Snapshot.idl
// generated code does not contain a copyright notice

#ifndef ONEDAY_MSGS__SRV__DETAIL__SNAPSHOT__TRAITS_HPP_
#define ONEDAY_MSGS__SRV__DETAIL__SNAPSHOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "oneday_msgs/srv/detail/snapshot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace oneday_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Snapshot_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Snapshot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Snapshot_Request & msg, bool use_flow_style = false)
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

}  // namespace oneday_msgs

namespace rosidl_generator_traits
{

[[deprecated("use oneday_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const oneday_msgs::srv::Snapshot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  oneday_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use oneday_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const oneday_msgs::srv::Snapshot_Request & msg)
{
  return oneday_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<oneday_msgs::srv::Snapshot_Request>()
{
  return "oneday_msgs::srv::Snapshot_Request";
}

template<>
inline const char * name<oneday_msgs::srv::Snapshot_Request>()
{
  return "oneday_msgs/srv/Snapshot_Request";
}

template<>
struct has_fixed_size<oneday_msgs::srv::Snapshot_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<oneday_msgs::srv::Snapshot_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<oneday_msgs::srv::Snapshot_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace oneday_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Snapshot_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Snapshot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Snapshot_Response & msg, bool use_flow_style = false)
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

}  // namespace oneday_msgs

namespace rosidl_generator_traits
{

[[deprecated("use oneday_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const oneday_msgs::srv::Snapshot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  oneday_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use oneday_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const oneday_msgs::srv::Snapshot_Response & msg)
{
  return oneday_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<oneday_msgs::srv::Snapshot_Response>()
{
  return "oneday_msgs::srv::Snapshot_Response";
}

template<>
inline const char * name<oneday_msgs::srv::Snapshot_Response>()
{
  return "oneday_msgs/srv/Snapshot_Response";
}

template<>
struct has_fixed_size<oneday_msgs::srv::Snapshot_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<oneday_msgs::srv::Snapshot_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<oneday_msgs::srv::Snapshot_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<oneday_msgs::srv::Snapshot>()
{
  return "oneday_msgs::srv::Snapshot";
}

template<>
inline const char * name<oneday_msgs::srv::Snapshot>()
{
  return "oneday_msgs/srv/Snapshot";
}

template<>
struct has_fixed_size<oneday_msgs::srv::Snapshot>
  : std::integral_constant<
    bool,
    has_fixed_size<oneday_msgs::srv::Snapshot_Request>::value &&
    has_fixed_size<oneday_msgs::srv::Snapshot_Response>::value
  >
{
};

template<>
struct has_bounded_size<oneday_msgs::srv::Snapshot>
  : std::integral_constant<
    bool,
    has_bounded_size<oneday_msgs::srv::Snapshot_Request>::value &&
    has_bounded_size<oneday_msgs::srv::Snapshot_Response>::value
  >
{
};

template<>
struct is_service<oneday_msgs::srv::Snapshot>
  : std::true_type
{
};

template<>
struct is_service_request<oneday_msgs::srv::Snapshot_Request>
  : std::true_type
{
};

template<>
struct is_service_response<oneday_msgs::srv::Snapshot_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ONEDAY_MSGS__SRV__DETAIL__SNAPSHOT__TRAITS_HPP_
