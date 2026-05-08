#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "armrs_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__armrs_msgs__msg__StateExchange() -> *const std::ffi::c_void;
}

#[link(name = "armrs_msgs__rosidl_generator_c")]
extern "C" {
    fn armrs_msgs__msg__StateExchange__init(msg: *mut StateExchange) -> bool;
    fn armrs_msgs__msg__StateExchange__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StateExchange>, size: usize) -> bool;
    fn armrs_msgs__msg__StateExchange__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StateExchange>);
    fn armrs_msgs__msg__StateExchange__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StateExchange>, out_seq: *mut rosidl_runtime_rs::Sequence<StateExchange>) -> bool;
}

// Corresponds to armrs_msgs__msg__StateExchange
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Robot State

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StateExchange {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose2D,

    /// Navigation information (for visualization)
    pub goal: geometry_msgs::msg::rmw::Pose2D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub si_vel: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for StateExchange {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !armrs_msgs__msg__StateExchange__init(&mut msg as *mut _) {
        panic!("Call to armrs_msgs__msg__StateExchange__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StateExchange {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { armrs_msgs__msg__StateExchange__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { armrs_msgs__msg__StateExchange__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { armrs_msgs__msg__StateExchange__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StateExchange {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StateExchange where Self: Sized {
  const TYPE_NAME: &'static str = "armrs_msgs/msg/StateExchange";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__armrs_msgs__msg__StateExchange() }
  }
}


#[link(name = "armrs_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__armrs_msgs__msg__FleetInformation() -> *const std::ffi::c_void;
}

#[link(name = "armrs_msgs__rosidl_generator_c")]
extern "C" {
    fn armrs_msgs__msg__FleetInformation__init(msg: *mut FleetInformation) -> bool;
    fn armrs_msgs__msg__FleetInformation__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FleetInformation>, size: usize) -> bool;
    fn armrs_msgs__msg__FleetInformation__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FleetInformation>);
    fn armrs_msgs__msg__FleetInformation__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FleetInformation>, out_seq: *mut rosidl_runtime_rs::Sequence<FleetInformation>) -> bool;
}

// Corresponds to armrs_msgs__msg__FleetInformation
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Centralized evaluation of the fleet performance 

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FleetInformation {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_ids: rosidl_runtime_rs::Sequence<i64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_size: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub centroid_formation: geometry_msgs::msg::rmw::Pose2D,

}



impl Default for FleetInformation {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !armrs_msgs__msg__FleetInformation__init(&mut msg as *mut _) {
        panic!("Call to armrs_msgs__msg__FleetInformation__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FleetInformation {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { armrs_msgs__msg__FleetInformation__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { armrs_msgs__msg__FleetInformation__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { armrs_msgs__msg__FleetInformation__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FleetInformation {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FleetInformation where Self: Sized {
  const TYPE_NAME: &'static str = "armrs_msgs/msg/FleetInformation";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__armrs_msgs__msg__FleetInformation() }
  }
}


