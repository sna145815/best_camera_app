// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from oneday_msgs:srv/Snapshot.idl
// generated code does not contain a copyright notice
#include "oneday_msgs/srv/detail/snapshot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
oneday_msgs__srv__Snapshot_Request__init(oneday_msgs__srv__Snapshot_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    oneday_msgs__srv__Snapshot_Request__fini(msg);
    return false;
  }
  return true;
}

void
oneday_msgs__srv__Snapshot_Request__fini(oneday_msgs__srv__Snapshot_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
oneday_msgs__srv__Snapshot_Request__are_equal(const oneday_msgs__srv__Snapshot_Request * lhs, const oneday_msgs__srv__Snapshot_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
oneday_msgs__srv__Snapshot_Request__copy(
  const oneday_msgs__srv__Snapshot_Request * input,
  oneday_msgs__srv__Snapshot_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

oneday_msgs__srv__Snapshot_Request *
oneday_msgs__srv__Snapshot_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oneday_msgs__srv__Snapshot_Request * msg = (oneday_msgs__srv__Snapshot_Request *)allocator.allocate(sizeof(oneday_msgs__srv__Snapshot_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(oneday_msgs__srv__Snapshot_Request));
  bool success = oneday_msgs__srv__Snapshot_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
oneday_msgs__srv__Snapshot_Request__destroy(oneday_msgs__srv__Snapshot_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    oneday_msgs__srv__Snapshot_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
oneday_msgs__srv__Snapshot_Request__Sequence__init(oneday_msgs__srv__Snapshot_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oneday_msgs__srv__Snapshot_Request * data = NULL;

  if (size) {
    data = (oneday_msgs__srv__Snapshot_Request *)allocator.zero_allocate(size, sizeof(oneday_msgs__srv__Snapshot_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = oneday_msgs__srv__Snapshot_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        oneday_msgs__srv__Snapshot_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
oneday_msgs__srv__Snapshot_Request__Sequence__fini(oneday_msgs__srv__Snapshot_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      oneday_msgs__srv__Snapshot_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

oneday_msgs__srv__Snapshot_Request__Sequence *
oneday_msgs__srv__Snapshot_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oneday_msgs__srv__Snapshot_Request__Sequence * array = (oneday_msgs__srv__Snapshot_Request__Sequence *)allocator.allocate(sizeof(oneday_msgs__srv__Snapshot_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = oneday_msgs__srv__Snapshot_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
oneday_msgs__srv__Snapshot_Request__Sequence__destroy(oneday_msgs__srv__Snapshot_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    oneday_msgs__srv__Snapshot_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
oneday_msgs__srv__Snapshot_Request__Sequence__are_equal(const oneday_msgs__srv__Snapshot_Request__Sequence * lhs, const oneday_msgs__srv__Snapshot_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!oneday_msgs__srv__Snapshot_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
oneday_msgs__srv__Snapshot_Request__Sequence__copy(
  const oneday_msgs__srv__Snapshot_Request__Sequence * input,
  oneday_msgs__srv__Snapshot_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(oneday_msgs__srv__Snapshot_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    oneday_msgs__srv__Snapshot_Request * data =
      (oneday_msgs__srv__Snapshot_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!oneday_msgs__srv__Snapshot_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          oneday_msgs__srv__Snapshot_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!oneday_msgs__srv__Snapshot_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
oneday_msgs__srv__Snapshot_Response__init(oneday_msgs__srv__Snapshot_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
oneday_msgs__srv__Snapshot_Response__fini(oneday_msgs__srv__Snapshot_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
oneday_msgs__srv__Snapshot_Response__are_equal(const oneday_msgs__srv__Snapshot_Response * lhs, const oneday_msgs__srv__Snapshot_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
oneday_msgs__srv__Snapshot_Response__copy(
  const oneday_msgs__srv__Snapshot_Response * input,
  oneday_msgs__srv__Snapshot_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

oneday_msgs__srv__Snapshot_Response *
oneday_msgs__srv__Snapshot_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oneday_msgs__srv__Snapshot_Response * msg = (oneday_msgs__srv__Snapshot_Response *)allocator.allocate(sizeof(oneday_msgs__srv__Snapshot_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(oneday_msgs__srv__Snapshot_Response));
  bool success = oneday_msgs__srv__Snapshot_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
oneday_msgs__srv__Snapshot_Response__destroy(oneday_msgs__srv__Snapshot_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    oneday_msgs__srv__Snapshot_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
oneday_msgs__srv__Snapshot_Response__Sequence__init(oneday_msgs__srv__Snapshot_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oneday_msgs__srv__Snapshot_Response * data = NULL;

  if (size) {
    data = (oneday_msgs__srv__Snapshot_Response *)allocator.zero_allocate(size, sizeof(oneday_msgs__srv__Snapshot_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = oneday_msgs__srv__Snapshot_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        oneday_msgs__srv__Snapshot_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
oneday_msgs__srv__Snapshot_Response__Sequence__fini(oneday_msgs__srv__Snapshot_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      oneday_msgs__srv__Snapshot_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

oneday_msgs__srv__Snapshot_Response__Sequence *
oneday_msgs__srv__Snapshot_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  oneday_msgs__srv__Snapshot_Response__Sequence * array = (oneday_msgs__srv__Snapshot_Response__Sequence *)allocator.allocate(sizeof(oneday_msgs__srv__Snapshot_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = oneday_msgs__srv__Snapshot_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
oneday_msgs__srv__Snapshot_Response__Sequence__destroy(oneday_msgs__srv__Snapshot_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    oneday_msgs__srv__Snapshot_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
oneday_msgs__srv__Snapshot_Response__Sequence__are_equal(const oneday_msgs__srv__Snapshot_Response__Sequence * lhs, const oneday_msgs__srv__Snapshot_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!oneday_msgs__srv__Snapshot_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
oneday_msgs__srv__Snapshot_Response__Sequence__copy(
  const oneday_msgs__srv__Snapshot_Response__Sequence * input,
  oneday_msgs__srv__Snapshot_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(oneday_msgs__srv__Snapshot_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    oneday_msgs__srv__Snapshot_Response * data =
      (oneday_msgs__srv__Snapshot_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!oneday_msgs__srv__Snapshot_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          oneday_msgs__srv__Snapshot_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!oneday_msgs__srv__Snapshot_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
