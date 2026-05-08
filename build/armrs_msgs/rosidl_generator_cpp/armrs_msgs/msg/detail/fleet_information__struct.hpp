// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from armrs_msgs:msg/FleetInformation.idl
// generated code does not contain a copyright notice

#ifndef ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__STRUCT_HPP_
#define ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'centroid_formation'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__armrs_msgs__msg__FleetInformation __attribute__((deprecated))
#else
# define DEPRECATED__armrs_msgs__msg__FleetInformation __declspec(deprecated)
#endif

namespace armrs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FleetInformation_
{
  using Type = FleetInformation_<ContainerAllocator>;

  explicit FleetInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : centroid_formation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_size = 0ll;
    }
  }

  explicit FleetInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : centroid_formation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fleet_size = 0ll;
    }
  }

  // field types and members
  using _robot_ids_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _robot_ids_type robot_ids;
  using _fleet_size_type =
    int64_t;
  _fleet_size_type fleet_size;
  using _centroid_formation_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _centroid_formation_type centroid_formation;

  // setters for named parameter idiom
  Type & set__robot_ids(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->robot_ids = _arg;
    return *this;
  }
  Type & set__fleet_size(
    const int64_t & _arg)
  {
    this->fleet_size = _arg;
    return *this;
  }
  Type & set__centroid_formation(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->centroid_formation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    armrs_msgs::msg::FleetInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const armrs_msgs::msg::FleetInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<armrs_msgs::msg::FleetInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<armrs_msgs::msg::FleetInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      armrs_msgs::msg::FleetInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<armrs_msgs::msg::FleetInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      armrs_msgs::msg::FleetInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<armrs_msgs::msg::FleetInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<armrs_msgs::msg::FleetInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<armrs_msgs::msg::FleetInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__armrs_msgs__msg__FleetInformation
    std::shared_ptr<armrs_msgs::msg::FleetInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__armrs_msgs__msg__FleetInformation
    std::shared_ptr<armrs_msgs::msg::FleetInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FleetInformation_ & other) const
  {
    if (this->robot_ids != other.robot_ids) {
      return false;
    }
    if (this->fleet_size != other.fleet_size) {
      return false;
    }
    if (this->centroid_formation != other.centroid_formation) {
      return false;
    }
    return true;
  }
  bool operator!=(const FleetInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FleetInformation_

// alias to use template instance with default allocator
using FleetInformation =
  armrs_msgs::msg::FleetInformation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace armrs_msgs

#endif  // ARMRS_MSGS__MSG__DETAIL__FLEET_INFORMATION__STRUCT_HPP_
