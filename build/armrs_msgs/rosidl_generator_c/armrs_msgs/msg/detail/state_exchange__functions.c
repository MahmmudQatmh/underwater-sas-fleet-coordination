// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from armrs_msgs:msg/StateExchange.idl
// generated code does not contain a copyright notice
#include "armrs_msgs/msg/detail/state_exchange__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
// Member `goal`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"
// Member `si_vel`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
armrs_msgs__msg__StateExchange__init(armrs_msgs__msg__StateExchange * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__init(&msg->pose)) {
    armrs_msgs__msg__StateExchange__fini(msg);
    return false;
  }
  // goal
  if (!geometry_msgs__msg__Pose2D__init(&msg->goal)) {
    armrs_msgs__msg__StateExchange__fini(msg);
    return false;
  }
  // si_vel
  if (!rosidl_runtime_c__double__Sequence__init(&msg->si_vel, 0)) {
    armrs_msgs__msg__StateExchange__fini(msg);
    return false;
  }
  return true;
}

void
armrs_msgs__msg__StateExchange__fini(armrs_msgs__msg__StateExchange * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose2D__fini(&msg->pose);
  // goal
  geometry_msgs__msg__Pose2D__fini(&msg->goal);
  // si_vel
  rosidl_runtime_c__double__Sequence__fini(&msg->si_vel);
}

bool
armrs_msgs__msg__StateExchange__are_equal(const armrs_msgs__msg__StateExchange * lhs, const armrs_msgs__msg__StateExchange * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__Pose2D__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  // si_vel
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->si_vel), &(rhs->si_vel)))
  {
    return false;
  }
  return true;
}

bool
armrs_msgs__msg__StateExchange__copy(
  const armrs_msgs__msg__StateExchange * input,
  armrs_msgs__msg__StateExchange * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__Pose2D__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  // si_vel
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->si_vel), &(output->si_vel)))
  {
    return false;
  }
  return true;
}

armrs_msgs__msg__StateExchange *
armrs_msgs__msg__StateExchange__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armrs_msgs__msg__StateExchange * msg = (armrs_msgs__msg__StateExchange *)allocator.allocate(sizeof(armrs_msgs__msg__StateExchange), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(armrs_msgs__msg__StateExchange));
  bool success = armrs_msgs__msg__StateExchange__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
armrs_msgs__msg__StateExchange__destroy(armrs_msgs__msg__StateExchange * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    armrs_msgs__msg__StateExchange__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
armrs_msgs__msg__StateExchange__Sequence__init(armrs_msgs__msg__StateExchange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armrs_msgs__msg__StateExchange * data = NULL;

  if (size) {
    data = (armrs_msgs__msg__StateExchange *)allocator.zero_allocate(size, sizeof(armrs_msgs__msg__StateExchange), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = armrs_msgs__msg__StateExchange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        armrs_msgs__msg__StateExchange__fini(&data[i - 1]);
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
armrs_msgs__msg__StateExchange__Sequence__fini(armrs_msgs__msg__StateExchange__Sequence * array)
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
      armrs_msgs__msg__StateExchange__fini(&array->data[i]);
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

armrs_msgs__msg__StateExchange__Sequence *
armrs_msgs__msg__StateExchange__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  armrs_msgs__msg__StateExchange__Sequence * array = (armrs_msgs__msg__StateExchange__Sequence *)allocator.allocate(sizeof(armrs_msgs__msg__StateExchange__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = armrs_msgs__msg__StateExchange__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
armrs_msgs__msg__StateExchange__Sequence__destroy(armrs_msgs__msg__StateExchange__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    armrs_msgs__msg__StateExchange__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
armrs_msgs__msg__StateExchange__Sequence__are_equal(const armrs_msgs__msg__StateExchange__Sequence * lhs, const armrs_msgs__msg__StateExchange__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!armrs_msgs__msg__StateExchange__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
armrs_msgs__msg__StateExchange__Sequence__copy(
  const armrs_msgs__msg__StateExchange__Sequence * input,
  armrs_msgs__msg__StateExchange__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(armrs_msgs__msg__StateExchange);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    armrs_msgs__msg__StateExchange * data =
      (armrs_msgs__msg__StateExchange *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!armrs_msgs__msg__StateExchange__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          armrs_msgs__msg__StateExchange__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!armrs_msgs__msg__StateExchange__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
