// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from armrs_msgs:msg/FleetInformation.idl
// generated code does not contain a copyright notice

#ifndef ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__STRUCT_H_
#define ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'centroid_formation'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/FleetInformation in the package armrs_msgs.
/**
  * Centralized evaluation of the fleet performance 
 */
typedef struct armrs_msgs__msg__FleetInformation
{
  rosidl_runtime_c__int64__Sequence robot_ids;
  int64_t fleet_size;
  geometry_msgs__msg__Pose2D centroid_formation;
} armrs_msgs__msg__FleetInformation;

// Struct for a sequence of armrs_msgs__msg__FleetInformation.
typedef struct armrs_msgs__msg__FleetInformation__Sequence
{
  armrs_msgs__msg__FleetInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armrs_msgs__msg__FleetInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__STRUCT_H_
