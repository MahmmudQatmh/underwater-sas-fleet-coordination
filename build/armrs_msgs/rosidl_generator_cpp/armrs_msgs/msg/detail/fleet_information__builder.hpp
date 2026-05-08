// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from armrs_msgs:msg/FleetInformation.idl
// generated code does not contain a copyright notice

#ifndef ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__BUILDER_HPP_
#define ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "armrs_msgs/msg/detail/fleet_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace armrs_msgs
{

namespace msg
{

namespace builder
{

class Init_FleetInformation_centroid_formation
{
public:
  explicit Init_FleetInformation_centroid_formation(::armrs_msgs::msg::FleetInformation & msg)
  : msg_(msg)
  {}
  ::armrs_msgs::msg::FleetInformation centroid_formation(::armrs_msgs::msg::FleetInformation::_centroid_formation_type arg)
  {
    msg_.centroid_formation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armrs_msgs::msg::FleetInformation msg_;
};

class Init_FleetInformation_fleet_size
{
public:
  explicit Init_FleetInformation_fleet_size(::armrs_msgs::msg::FleetInformation & msg)
  : msg_(msg)
  {}
  Init_FleetInformation_centroid_formation fleet_size(::armrs_msgs::msg::FleetInformation::_fleet_size_type arg)
  {
    msg_.fleet_size = std::move(arg);
    return Init_FleetInformation_centroid_formation(msg_);
  }

private:
  ::armrs_msgs::msg::FleetInformation msg_;
};

class Init_FleetInformation_robot_ids
{
public:
  Init_FleetInformation_robot_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetInformation_fleet_size robot_ids(::armrs_msgs::msg::FleetInformation::_robot_ids_type arg)
  {
    msg_.robot_ids = std::move(arg);
    return Init_FleetInformation_fleet_size(msg_);
  }

private:
  ::armrs_msgs::msg::FleetInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::armrs_msgs::msg::FleetInformation>()
{
  return armrs_msgs::msg::builder::Init_FleetInformation_robot_ids();
}

}  // namespace armrs_msgs

#endif  // ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__BUILDER_HPP_
