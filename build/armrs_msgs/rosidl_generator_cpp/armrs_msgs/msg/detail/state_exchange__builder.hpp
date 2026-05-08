// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from armrs_msgs:msg/StateExchange.idl
// generated code does not contain a copyright notice

#ifndef ARMRS_MSGS__MSG__DETAIL__STATE_EXCHANGE__BUILDER_HPP_
#define ARMRS_MSGS__MSG__DETAIL__STATE_EXCHANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "armrs_msgs/msg/detail/state_exchange__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace armrs_msgs
{

namespace msg
{

namespace builder
{

class Init_StateExchange_si_vel
{
public:
  explicit Init_StateExchange_si_vel(::armrs_msgs::msg::StateExchange & msg)
  : msg_(msg)
  {}
  ::armrs_msgs::msg::StateExchange si_vel(::armrs_msgs::msg::StateExchange::_si_vel_type arg)
  {
    msg_.si_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armrs_msgs::msg::StateExchange msg_;
};

class Init_StateExchange_goal
{
public:
  explicit Init_StateExchange_goal(::armrs_msgs::msg::StateExchange & msg)
  : msg_(msg)
  {}
  Init_StateExchange_si_vel goal(::armrs_msgs::msg::StateExchange::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_StateExchange_si_vel(msg_);
  }

private:
  ::armrs_msgs::msg::StateExchange msg_;
};

class Init_StateExchange_pose
{
public:
  Init_StateExchange_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateExchange_goal pose(::armrs_msgs::msg::StateExchange::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_StateExchange_goal(msg_);
  }

private:
  ::armrs_msgs::msg::StateExchange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::armrs_msgs::msg::StateExchange>()
{
  return armrs_msgs::msg::builder::Init_StateExchange_pose();
}

}  // namespace armrs_msgs

#endif  // ARMRS_MSGS__MSG__DETAIL__STATE_EXCHANGE__BUILDER_HPP_
