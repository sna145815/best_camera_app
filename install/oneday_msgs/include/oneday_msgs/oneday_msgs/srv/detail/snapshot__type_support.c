// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from oneday_msgs:srv/Snapshot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "oneday_msgs/srv/detail/snapshot__rosidl_typesupport_introspection_c.h"
#include "oneday_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "oneday_msgs/srv/detail/snapshot__functions.h"
#include "oneday_msgs/srv/detail/snapshot__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void oneday_msgs__srv__Snapshot_Request__rosidl_typesupport_introspection_c__Snapshot_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  oneday_msgs__srv__Snapshot_Request__init(message_memory);
}

void oneday_msgs__srv__Snapshot_Request__rosidl_typesupport_introspection_c__Snapshot_Request_fini_function(void * message_memory)
{
  oneday_msgs__srv__Snapshot_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember oneday_msgs__srv__Snapshot_Request__rosidl_typesupport_introspection_c__Snapshot_Request_message_member_array[1] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oneday_msgs__srv__Snapshot_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers oneday_msgs__srv__Snapshot_Request__rosidl_typesupport_introspection_c__Snapshot_Request_message_members = {
  "oneday_msgs__srv",  // message namespace
  "Snapshot_Request",  // message name
  1,  // number of fields
  sizeof(oneday_msgs__srv__Snapshot_Request),
  oneday_msgs__srv__Snapshot_Request__rosidl_typesupport_introspection_c__Snapshot_Request_message_member_array,  // message members
  oneday_msgs__srv__Snapshot_Request__rosidl_typesupport_introspection_c__Snapshot_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  oneday_msgs__srv__Snapshot_Request__rosidl_typesupport_introspection_c__Snapshot_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t oneday_msgs__srv__Snapshot_Request__rosidl_typesupport_introspection_c__Snapshot_Request_message_type_support_handle = {
  0,
  &oneday_msgs__srv__Snapshot_Request__rosidl_typesupport_introspection_c__Snapshot_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_oneday_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oneday_msgs, srv, Snapshot_Request)() {
  if (!oneday_msgs__srv__Snapshot_Request__rosidl_typesupport_introspection_c__Snapshot_Request_message_type_support_handle.typesupport_identifier) {
    oneday_msgs__srv__Snapshot_Request__rosidl_typesupport_introspection_c__Snapshot_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &oneday_msgs__srv__Snapshot_Request__rosidl_typesupport_introspection_c__Snapshot_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "oneday_msgs/srv/detail/snapshot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "oneday_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "oneday_msgs/srv/detail/snapshot__functions.h"
// already included above
// #include "oneday_msgs/srv/detail/snapshot__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void oneday_msgs__srv__Snapshot_Response__rosidl_typesupport_introspection_c__Snapshot_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  oneday_msgs__srv__Snapshot_Response__init(message_memory);
}

void oneday_msgs__srv__Snapshot_Response__rosidl_typesupport_introspection_c__Snapshot_Response_fini_function(void * message_memory)
{
  oneday_msgs__srv__Snapshot_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember oneday_msgs__srv__Snapshot_Response__rosidl_typesupport_introspection_c__Snapshot_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(oneday_msgs__srv__Snapshot_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers oneday_msgs__srv__Snapshot_Response__rosidl_typesupport_introspection_c__Snapshot_Response_message_members = {
  "oneday_msgs__srv",  // message namespace
  "Snapshot_Response",  // message name
  1,  // number of fields
  sizeof(oneday_msgs__srv__Snapshot_Response),
  oneday_msgs__srv__Snapshot_Response__rosidl_typesupport_introspection_c__Snapshot_Response_message_member_array,  // message members
  oneday_msgs__srv__Snapshot_Response__rosidl_typesupport_introspection_c__Snapshot_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  oneday_msgs__srv__Snapshot_Response__rosidl_typesupport_introspection_c__Snapshot_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t oneday_msgs__srv__Snapshot_Response__rosidl_typesupport_introspection_c__Snapshot_Response_message_type_support_handle = {
  0,
  &oneday_msgs__srv__Snapshot_Response__rosidl_typesupport_introspection_c__Snapshot_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_oneday_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oneday_msgs, srv, Snapshot_Response)() {
  if (!oneday_msgs__srv__Snapshot_Response__rosidl_typesupport_introspection_c__Snapshot_Response_message_type_support_handle.typesupport_identifier) {
    oneday_msgs__srv__Snapshot_Response__rosidl_typesupport_introspection_c__Snapshot_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &oneday_msgs__srv__Snapshot_Response__rosidl_typesupport_introspection_c__Snapshot_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "oneday_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "oneday_msgs/srv/detail/snapshot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers oneday_msgs__srv__detail__snapshot__rosidl_typesupport_introspection_c__Snapshot_service_members = {
  "oneday_msgs__srv",  // service namespace
  "Snapshot",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // oneday_msgs__srv__detail__snapshot__rosidl_typesupport_introspection_c__Snapshot_Request_message_type_support_handle,
  NULL  // response message
  // oneday_msgs__srv__detail__snapshot__rosidl_typesupport_introspection_c__Snapshot_Response_message_type_support_handle
};

static rosidl_service_type_support_t oneday_msgs__srv__detail__snapshot__rosidl_typesupport_introspection_c__Snapshot_service_type_support_handle = {
  0,
  &oneday_msgs__srv__detail__snapshot__rosidl_typesupport_introspection_c__Snapshot_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oneday_msgs, srv, Snapshot_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oneday_msgs, srv, Snapshot_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_oneday_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oneday_msgs, srv, Snapshot)() {
  if (!oneday_msgs__srv__detail__snapshot__rosidl_typesupport_introspection_c__Snapshot_service_type_support_handle.typesupport_identifier) {
    oneday_msgs__srv__detail__snapshot__rosidl_typesupport_introspection_c__Snapshot_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)oneday_msgs__srv__detail__snapshot__rosidl_typesupport_introspection_c__Snapshot_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oneday_msgs, srv, Snapshot_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, oneday_msgs, srv, Snapshot_Response)()->data;
  }

  return &oneday_msgs__srv__detail__snapshot__rosidl_typesupport_introspection_c__Snapshot_service_type_support_handle;
}
