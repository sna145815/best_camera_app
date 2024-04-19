// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from oneday_msgs:srv/Snapshot.idl
// generated code does not contain a copyright notice

#ifndef ONEDAY_MSGS__SRV__DETAIL__SNAPSHOT__STRUCT_H_
#define ONEDAY_MSGS__SRV__DETAIL__SNAPSHOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Snapshot in the package oneday_msgs.
typedef struct oneday_msgs__srv__Snapshot_Request
{
  rosidl_runtime_c__String name;
} oneday_msgs__srv__Snapshot_Request;

// Struct for a sequence of oneday_msgs__srv__Snapshot_Request.
typedef struct oneday_msgs__srv__Snapshot_Request__Sequence
{
  oneday_msgs__srv__Snapshot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} oneday_msgs__srv__Snapshot_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Snapshot in the package oneday_msgs.
typedef struct oneday_msgs__srv__Snapshot_Response
{
  uint8_t structure_needs_at_least_one_member;
} oneday_msgs__srv__Snapshot_Response;

// Struct for a sequence of oneday_msgs__srv__Snapshot_Response.
typedef struct oneday_msgs__srv__Snapshot_Response__Sequence
{
  oneday_msgs__srv__Snapshot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} oneday_msgs__srv__Snapshot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ONEDAY_MSGS__SRV__DETAIL__SNAPSHOT__STRUCT_H_
