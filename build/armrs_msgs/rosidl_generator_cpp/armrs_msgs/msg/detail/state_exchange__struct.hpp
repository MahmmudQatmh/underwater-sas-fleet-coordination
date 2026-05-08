// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from armrs_msgs:msg/StateExchange.idl
// generated code does not contain a copyright notice

#ifndef ARMRS_MSGS__MSG__DETAIL__STATE_EXCHANGE__STRUCT_HPP_
#define ARMRS_MSGS__MSG__DETAIL__STATE_EXCHANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
// Member 'goal'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__armrs_msgs__msg__StateExchange __attribute__((deprecated))
#else
# define DEPRECATED__armrs_msgs__msg__StateExchange __declspec(deprecated)
#endif

namespace armrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateExchange_
{
  using Type = StateExchange_<ContainerAllocator>;

  explicit StateExchange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit StateExchange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _pose_type pose;
  using _goal_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _goal_type goal;
  using _si_vel_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _si_vel_type si_vel;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__goal(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__si_vel(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->si_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    armrs_msgs::msg::StateExchange_<ContainerAllocator> *;
  using ConstRawPtr =
    const armrs_msgs::msg::StateExchange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<armrs_msgs::msg::StateExchange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<armrs_msgs::msg::StateExchange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      armrs_msgs::msg::StateExchange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<armrs_msgs::msg::StateExchange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      armrs_msgs::msg::StateExchange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<armrs_msgs::msg::StateExchange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<armrs_msgs::msg::StateExchange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<armrs_msgs::msg::StateExchange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__armrs_msgs__msg__StateExchange
    std::shared_ptr<armrs_msgs::msg::StateExchange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__armrs_msgs__msg__StateExchange
    std::shared_ptr<armrs_msgs::msg::StateExchange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateExchange_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->si_vel != other.si_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateExchange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateExchange_

// alias to use template instance with default allocator
using StateExchange =
  armrs_msgs::msg::StateExchange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace armrs_msgs

#endif  // ARMRS_MSGS__MSG__DETAIL__STATE_EXCHANGE__STRUCT_HPP_
