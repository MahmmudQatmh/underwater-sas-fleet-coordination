// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from armrs_msgs:msg/StateExchange.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "armrs_msgs/msg/detail/state_exchange__rosidl_typesupport_introspection_c.h"
#include "armrs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "armrs_msgs/msg/detail/state_exchange__functions.h"
#include "armrs_msgs/msg/detail/state_exchange__struct.h"


// Include directives for member types
// Member `pose`
// Member `goal`
#include "geometry_msgs/msg/pose2_d.h"
// Member `pose`
// Member `goal`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"
// Member `si_vel`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__StateExchange_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  armrs_msgs__msg__StateExchange__init(message_memory);
}

void armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__StateExchange_fini_function(void * message_memory)
{
  armrs_msgs__msg__StateExchange__fini(message_memory);
}

size_t armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__size_function__StateExchange__si_vel(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__get_const_function__StateExchange__si_vel(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__get_function__StateExchange__si_vel(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__fetch_function__StateExchange__si_vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__get_const_function__StateExchange__si_vel(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__assign_function__StateExchange__si_vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__get_function__StateExchange__si_vel(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__resize_function__StateExchange__si_vel(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__StateExchange_message_member_array[3] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armrs_msgs__msg__StateExchange, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armrs_msgs__msg__StateExchange, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "si_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armrs_msgs__msg__StateExchange, si_vel),  // bytes offset in struct
    NULL,  // default value
    armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__size_function__StateExchange__si_vel,  // size() function pointer
    armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__get_const_function__StateExchange__si_vel,  // get_const(index) function pointer
    armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__get_function__StateExchange__si_vel,  // get(index) function pointer
    armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__fetch_function__StateExchange__si_vel,  // fetch(index, &value) function pointer
    armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__assign_function__StateExchange__si_vel,  // assign(index, value) function pointer
    armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__resize_function__StateExchange__si_vel  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__StateExchange_message_members = {
  "armrs_msgs__msg",  // message namespace
  "StateExchange",  // message name
  3,  // number of fields
  sizeof(armrs_msgs__msg__StateExchange),
  armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__StateExchange_message_member_array,  // message members
  armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__StateExchange_init_function,  // function to initialize message memory (memory has to be allocated)
  armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__StateExchange_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__StateExchange_message_type_support_handle = {
  0,
  &armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__StateExchange_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_armrs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armrs_msgs, msg, StateExchange)() {
  armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__StateExchange_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__StateExchange_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__StateExchange_message_type_support_handle.typesupport_identifier) {
    armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__StateExchange_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &armrs_msgs__msg__StateExchange__rosidl_typesupport_introspection_c__StateExchange_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
