// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from armrs_msgs:msg/FleetInformation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "armrs_msgs/msg/detail/fleet_information__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace armrs_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FleetInformation_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) armrs_msgs::msg::FleetInformation(_init);
}

void FleetInformation_fini_function(void * message_memory)
{
  auto typed_message = static_cast<armrs_msgs::msg::FleetInformation *>(message_memory);
  typed_message->~FleetInformation();
}

size_t size_function__FleetInformation__robot_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FleetInformation__robot_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__FleetInformation__robot_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__FleetInformation__robot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__FleetInformation__robot_ids(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__FleetInformation__robot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__FleetInformation__robot_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__FleetInformation__robot_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FleetInformation_message_member_array[3] = {
  {
    "robot_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armrs_msgs::msg::FleetInformation, robot_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__FleetInformation__robot_ids,  // size() function pointer
    get_const_function__FleetInformation__robot_ids,  // get_const(index) function pointer
    get_function__FleetInformation__robot_ids,  // get(index) function pointer
    fetch_function__FleetInformation__robot_ids,  // fetch(index, &value) function pointer
    assign_function__FleetInformation__robot_ids,  // assign(index, value) function pointer
    resize_function__FleetInformation__robot_ids  // resize(index) function pointer
  },
  {
    "fleet_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armrs_msgs::msg::FleetInformation, fleet_size),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "centroid_formation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose2D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armrs_msgs::msg::FleetInformation, centroid_formation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FleetInformation_message_members = {
  "armrs_msgs::msg",  // message namespace
  "FleetInformation",  // message name
  3,  // number of fields
  sizeof(armrs_msgs::msg::FleetInformation),
  FleetInformation_message_member_array,  // message members
  FleetInformation_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetInformation_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FleetInformation_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FleetInformation_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace armrs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armrs_msgs::msg::FleetInformation>()
{
  return &::armrs_msgs::msg::rosidl_typesupport_introspection_cpp::FleetInformation_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armrs_msgs, msg, FleetInformation)() {
  return &::armrs_msgs::msg::rosidl_typesupport_introspection_cpp::FleetInformation_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
