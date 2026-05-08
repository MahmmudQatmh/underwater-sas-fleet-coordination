// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from armrs_msgs:msg/FleetInformation.idl
// generated code does not contain a copyright notice

#ifndef ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__FUNCTIONS_H_
#define ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "armrs_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "armrs_msgs/msg/detail/fleet_information__struct.h"

/// Initialize msg/FleetInformation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * armrs_msgs__msg__FleetInformation
 * )) before or use
 * armrs_msgs__msg__FleetInformation__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_armrs_msgs
bool
armrs_msgs__msg__FleetInformation__init(armrs_msgs__msg__FleetInformation * msg);

/// Finalize msg/FleetInformation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_armrs_msgs
void
armrs_msgs__msg__FleetInformation__fini(armrs_msgs__msg__FleetInformation * msg);

/// Create msg/FleetInformation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * armrs_msgs__msg__FleetInformation__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_armrs_msgs
armrs_msgs__msg__FleetInformation *
armrs_msgs__msg__FleetInformation__create();

/// Destroy msg/FleetInformation message.
/**
 * It calls
 * armrs_msgs__msg__FleetInformation__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_armrs_msgs
void
armrs_msgs__msg__FleetInformation__destroy(armrs_msgs__msg__FleetInformation * msg);

/// Check for msg/FleetInformation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_armrs_msgs
bool
armrs_msgs__msg__FleetInformation__are_equal(const armrs_msgs__msg__FleetInformation * lhs, const armrs_msgs__msg__FleetInformation * rhs);

/// Copy a msg/FleetInformation message.
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
ROSIDL_GENERATOR_C_PUBLIC_armrs_msgs
bool
armrs_msgs__msg__FleetInformation__copy(
  const armrs_msgs__msg__FleetInformation * input,
  armrs_msgs__msg__FleetInformation * output);

/// Initialize array of msg/FleetInformation messages.
/**
 * It allocates the memory for the number of elements and calls
 * armrs_msgs__msg__FleetInformation__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_armrs_msgs
bool
armrs_msgs__msg__FleetInformation__Sequence__init(armrs_msgs__msg__FleetInformation__Sequence * array, size_t size);

/// Finalize array of msg/FleetInformation messages.
/**
 * It calls
 * armrs_msgs__msg__FleetInformation__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_armrs_msgs
void
armrs_msgs__msg__FleetInformation__Sequence__fini(armrs_msgs__msg__FleetInformation__Sequence * array);

/// Create array of msg/FleetInformation messages.
/**
 * It allocates the memory for the array and calls
 * armrs_msgs__msg__FleetInformation__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_armrs_msgs
armrs_msgs__msg__FleetInformation__Sequence *
armrs_msgs__msg__FleetInformation__Sequence__create(size_t size);

/// Destroy array of msg/FleetInformation messages.
/**
 * It calls
 * armrs_msgs__msg__FleetInformation__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_armrs_msgs
void
armrs_msgs__msg__FleetInformation__Sequence__destroy(armrs_msgs__msg__FleetInformation__Sequence * array);

/// Check for msg/FleetInformation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_armrs_msgs
bool
armrs_msgs__msg__FleetInformation__Sequence__are_equal(const armrs_msgs__msg__FleetInformation__Sequence * lhs, const armrs_msgs__msg__FleetInformation__Sequence * rhs);

/// Copy an array of msg/FleetInformation messages.
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
ROSIDL_GENERATOR_C_PUBLIC_armrs_msgs
bool
armrs_msgs__msg__FleetInformation__Sequence__copy(
  const armrs_msgs__msg__FleetInformation__Sequence * input,
  armrs_msgs__msg__FleetInformation__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__FUNCTIONS_H_
