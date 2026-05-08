// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from armrs_msgs:msg/StateExchange.idl
// generated code does not contain a copyright notice

#ifndef ARMRS_MSGS__MSG__DETAIL__STATE_EXCHANGE__TRAITS_HPP_
#define ARMRS_MSGS__MSG__DETAIL__STATE_EXCHANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "armrs_msgs/msg/detail/state_exchange__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
// Member 'goal'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace armrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateExchange & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
    out << ", ";
  }

  // member: si_vel
  {
    if (msg.si_vel.size() == 0) {
      out << "si_vel: []";
    } else {
      out << "si_vel: [";
      size_t pending_items = msg.si_vel.size();
      for (auto item : msg.si_vel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StateExchange & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }

  // member: si_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.si_vel.size() == 0) {
      out << "si_vel: []\n";
    } else {
      out << "si_vel:\n";
      for (auto item : msg.si_vel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StateExchange & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace armrs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use armrs_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const armrs_msgs::msg::StateExchange & msg,
  std::ostream & out, size_t indentation = 0)
{
  armrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const armrs_msgs::msg::StateExchange & msg)
{
  return armrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<armrs_msgs::msg::StateExchange>()
{
  return "armrs_msgs::msg::StateExchange";
}

template<>
inline const char * name<armrs_msgs::msg::StateExchange>()
{
  return "armrs_msgs/msg/StateExchange";
}

template<>
struct has_fixed_size<armrs_msgs::msg::StateExchange>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<armrs_msgs::msg::StateExchange>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<armrs_msgs::msg::StateExchange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARMRS_MSGS__MSG__DETAIL__STATE_EXCHANGE__TRAITS_HPP_
