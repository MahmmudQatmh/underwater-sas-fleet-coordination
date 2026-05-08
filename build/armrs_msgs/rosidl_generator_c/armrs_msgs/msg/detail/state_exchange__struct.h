// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from armrs_msgs:msg/StateExchange.idl
// generated code does not contain a copyright notice

#ifndef ARMRS_MSGS__MSG__DETAIL__STATE_EXCHANGE__STRUCT_H_
#define ARMRS_MSGS__MSG__DETAIL__STATE_EXCHANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
// Member 'goal'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"
// Member 'si_vel'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/StateExchange in the package armrs_msgs.
/**
  * Robot State
 */
typedef struct armrs_msgs__msg__StateExchange
{
  geometry_msgs__msg__Pose2D pose;
  /// Navigation information (for visualization)
  geometry_msgs__msg__Pose2D goal;
  rosidl_runtime_c__double__Sequence si_vel;
} armrs_msgs__msg__StateExchange;

// Struct for a sequence of armrs_msgs__msg__StateExchange.
typedef struct armrs_msgs__msg__StateExchange__Sequence
{
  armrs_msgs__msg__StateExchange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armrs_msgs__msg__StateExchange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMRS_MSGS__MSG__DETAIL__STATE_EXCHANGE__STRUCT_H_
