// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from armrs_msgs:msg/FleetInformation.idl
// generated code does not contain a copyright notice

#ifndef ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__TRAITS_HPP_
#define ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "armrs_msgs/msg/detail/fleet_information__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'centroid_formation'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace armrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FleetInformation & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_ids
  {
    if (msg.robot_ids.size() == 0) {
      out << "robot_ids: []";
    } else {
      out << "robot_ids: [";
      size_t pending_items = msg.robot_ids.size();
      for (auto item : msg.robot_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fleet_size
  {
    out << "fleet_size: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_size, out);
    out << ", ";
  }

  // member: centroid_formation
  {
    out << "centroid_formation: ";
    to_flow_style_yaml(msg.centroid_formation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FleetInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_ids.size() == 0) {
      out << "robot_ids: []\n";
    } else {
      out << "robot_ids:\n";
      for (auto item : msg.robot_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fleet_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fleet_size: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_size, out);
    out << "\n";
  }

  // member: centroid_formation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid_formation:\n";
    to_block_style_yaml(msg.centroid_formation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FleetInformation & msg, bool use_flow_style = false)
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
  const armrs_msgs::msg::FleetInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  armrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const armrs_msgs::msg::FleetInformation & msg)
{
  return armrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<armrs_msgs::msg::FleetInformation>()
{
  return "armrs_msgs::msg::FleetInformation";
}

template<>
inline const char * name<armrs_msgs::msg::FleetInformation>()
{
  return "armrs_msgs/msg/FleetInformation";
}

template<>
struct has_fixed_size<armrs_msgs::msg::FleetInformation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<armrs_msgs::msg::FleetInformation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<armrs_msgs::msg::FleetInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__TRAITS_HPP_
