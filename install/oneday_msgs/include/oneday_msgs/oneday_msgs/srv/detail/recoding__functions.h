// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from oneday_msgs:srv/Recoding.idl
// generated code does not contain a copyright notice

#ifndef ONEDAY_MSGS__SRV__DETAIL__RECODING__FUNCTIONS_H_
#define ONEDAY_MSGS__SRV__DETAIL__RECODING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "oneday_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "oneday_msgs/srv/detail/recoding__struct.h"

/// Initialize srv/Recoding message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * oneday_msgs__srv__Recoding_Request
 * )) before or use
 * oneday_msgs__srv__Recoding_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
bool
oneday_msgs__srv__Recoding_Request__init(oneday_msgs__srv__Recoding_Request * msg);

/// Finalize srv/Recoding message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
void
oneday_msgs__srv__Recoding_Request__fini(oneday_msgs__srv__Recoding_Request * msg);

/// Create srv/Recoding message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * oneday_msgs__srv__Recoding_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
oneday_msgs__srv__Recoding_Request *
oneday_msgs__srv__Recoding_Request__create();

/// Destroy srv/Recoding message.
/**
 * It calls
 * oneday_msgs__srv__Recoding_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
void
oneday_msgs__srv__Recoding_Request__destroy(oneday_msgs__srv__Recoding_Request * msg);

/// Check for srv/Recoding message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
bool
oneday_msgs__srv__Recoding_Request__are_equal(const oneday_msgs__srv__Recoding_Request * lhs, const oneday_msgs__srv__Recoding_Request * rhs);

/// Copy a srv/Recoding message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
bool
oneday_msgs__srv__Recoding_Request__copy(
  const oneday_msgs__srv__Recoding_Request * input,
  oneday_msgs__srv__Recoding_Request * output);

/// Initialize array of srv/Recoding messages.
/**
 * It allocates the memory for the number of elements and calls
 * oneday_msgs__srv__Recoding_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
bool
oneday_msgs__srv__Recoding_Request__Sequence__init(oneday_msgs__srv__Recoding_Request__Sequence * array, size_t size);

/// Finalize array of srv/Recoding messages.
/**
 * It calls
 * oneday_msgs__srv__Recoding_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
void
oneday_msgs__srv__Recoding_Request__Sequence__fini(oneday_msgs__srv__Recoding_Request__Sequence * array);

/// Create array of srv/Recoding messages.
/**
 * It allocates the memory for the array and calls
 * oneday_msgs__srv__Recoding_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
oneday_msgs__srv__Recoding_Request__Sequence *
oneday_msgs__srv__Recoding_Request__Sequence__create(size_t size);

/// Destroy array of srv/Recoding messages.
/**
 * It calls
 * oneday_msgs__srv__Recoding_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
void
oneday_msgs__srv__Recoding_Request__Sequence__destroy(oneday_msgs__srv__Recoding_Request__Sequence * array);

/// Check for srv/Recoding message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
bool
oneday_msgs__srv__Recoding_Request__Sequence__are_equal(const oneday_msgs__srv__Recoding_Request__Sequence * lhs, const oneday_msgs__srv__Recoding_Request__Sequence * rhs);

/// Copy an array of srv/Recoding messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
bool
oneday_msgs__srv__Recoding_Request__Sequence__copy(
  const oneday_msgs__srv__Recoding_Request__Sequence * input,
  oneday_msgs__srv__Recoding_Request__Sequence * output);

/// Initialize srv/Recoding message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * oneday_msgs__srv__Recoding_Response
 * )) before or use
 * oneday_msgs__srv__Recoding_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
bool
oneday_msgs__srv__Recoding_Response__init(oneday_msgs__srv__Recoding_Response * msg);

/// Finalize srv/Recoding message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
void
oneday_msgs__srv__Recoding_Response__fini(oneday_msgs__srv__Recoding_Response * msg);

/// Create srv/Recoding message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * oneday_msgs__srv__Recoding_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
oneday_msgs__srv__Recoding_Response *
oneday_msgs__srv__Recoding_Response__create();

/// Destroy srv/Recoding message.
/**
 * It calls
 * oneday_msgs__srv__Recoding_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
void
oneday_msgs__srv__Recoding_Response__destroy(oneday_msgs__srv__Recoding_Response * msg);

/// Check for srv/Recoding message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
bool
oneday_msgs__srv__Recoding_Response__are_equal(const oneday_msgs__srv__Recoding_Response * lhs, const oneday_msgs__srv__Recoding_Response * rhs);

/// Copy a srv/Recoding message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
bool
oneday_msgs__srv__Recoding_Response__copy(
  const oneday_msgs__srv__Recoding_Response * input,
  oneday_msgs__srv__Recoding_Response * output);

/// Initialize array of srv/Recoding messages.
/**
 * It allocates the memory for the number of elements and calls
 * oneday_msgs__srv__Recoding_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
bool
oneday_msgs__srv__Recoding_Response__Sequence__init(oneday_msgs__srv__Recoding_Response__Sequence * array, size_t size);

/// Finalize array of srv/Recoding messages.
/**
 * It calls
 * oneday_msgs__srv__Recoding_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
void
oneday_msgs__srv__Recoding_Response__Sequence__fini(oneday_msgs__srv__Recoding_Response__Sequence * array);

/// Create array of srv/Recoding messages.
/**
 * It allocates the memory for the array and calls
 * oneday_msgs__srv__Recoding_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
oneday_msgs__srv__Recoding_Response__Sequence *
oneday_msgs__srv__Recoding_Response__Sequence__create(size_t size);

/// Destroy array of srv/Recoding messages.
/**
 * It calls
 * oneday_msgs__srv__Recoding_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
void
oneday_msgs__srv__Recoding_Response__Sequence__destroy(oneday_msgs__srv__Recoding_Response__Sequence * array);

/// Check for srv/Recoding message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
bool
oneday_msgs__srv__Recoding_Response__Sequence__are_equal(const oneday_msgs__srv__Recoding_Response__Sequence * lhs, const oneday_msgs__srv__Recoding_Response__Sequence * rhs);

/// Copy an array of srv/Recoding messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_oneday_msgs
bool
oneday_msgs__srv__Recoding_Response__Sequence__copy(
  const oneday_msgs__srv__Recoding_Response__Sequence * input,
  oneday_msgs__srv__Recoding_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ONEDAY_MSGS__SRV__DETAIL__RECODING__FUNCTIONS_H_
