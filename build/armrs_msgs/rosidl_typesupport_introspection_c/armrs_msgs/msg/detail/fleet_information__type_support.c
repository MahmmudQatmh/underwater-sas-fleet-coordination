// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from armrs_msgs:msg/FleetInformation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "armrs_msgs/msg/detail/fleet_information__rosidl_typesupport_introspection_c.h"
#include "armrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "armrs_msgs/msg/detail/fleet_information__functions.h"
#include "armrs_msgs/msg/detail/fleet_information__struct.h"


// Include directives for member types
// Member `robot_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `centroid_formation`
#include "geometry_msgs/msg/pose2_d.h"
// Member `centroid_formation`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__FleetInformation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  armrs_msgs__msg__FleetInformation__init(message_memory);
}

void armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__FleetInformation_fini_function(void * message_memory)
{
  armrs_msgs__msg__FleetInformation__fini(message_memory);
}

size_t armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__size_function__FleetInformation__robot_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__get_const_function__FleetInformation__robot_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__get_function__FleetInformation__robot_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__fetch_function__FleetInformation__robot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__get_const_function__FleetInformation__robot_ids(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__assign_function__FleetInformation__robot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__get_function__FleetInformation__robot_ids(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__resize_function__FleetInformation__robot_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__FleetInformation_message_member_array[3] = {
  {
    "robot_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armrs_msgs__msg__FleetInformation, robot_ids),  // bytes offset in struct
    NULL,  // default value
    armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__size_function__FleetInformation__robot_ids,  // size() function pointer
    armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__get_const_function__FleetInformation__robot_ids,  // get_const(index) function pointer
    armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__get_function__FleetInformation__robot_ids,  // get(index) function pointer
    armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__fetch_function__FleetInformation__robot_ids,  // fetch(index, &value) function pointer
    armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__assign_function__FleetInformation__robot_ids,  // assign(index, value) function pointer
    armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__resize_function__FleetInformation__robot_ids  // resize(index) function pointer
  },
  {
    "fleet_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armrs_msgs__msg__FleetInformation, fleet_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "centroid_formation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armrs_msgs__msg__FleetInformation, centroid_formation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__FleetInformation_message_members = {
  "armrs_msgs__msg",  // message namespace
  "FleetInformation",  // message name
  3,  // number of fields
  sizeof(armrs_msgs__msg__FleetInformation),
  armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__FleetInformation_message_member_array,  // message members
  armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__FleetInformation_init_function,  // function to initialize message memory (memory has to be allocated)
  armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__FleetInformation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__FleetInformation_message_type_support_handle = {
  0,
  &armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__FleetInformation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_armrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armrs_msgs, msg, FleetInformation)() {
  armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__FleetInformation_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__FleetInformation_message_type_support_handle.typesupport_identifier) {
    armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__FleetInformation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &armrs_msgs__msg__FleetInformation__rosidl_typesupport_introspection_c__FleetInformation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
