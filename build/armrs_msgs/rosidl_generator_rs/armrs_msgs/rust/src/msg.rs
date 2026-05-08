#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to armrs_msgs__msg__StateExchange
/// Robot State

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StateExchange {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose2D,

    /// Navigation information (for visualization)
    pub goal: geometry_msgs::msg::Pose2D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub si_vel: Vec<f64>,

}



impl Default for StateExchange {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::StateExchange::default())
  }
}

impl rosidl_runtime_rs::Message for StateExchange {
  type RmwMsg = super::msg::rmw::StateExchange;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        goal: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
        si_vel: msg.si_vel.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        goal: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
        si_vel: msg.si_vel.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pose: geometry_msgs::msg::Pose2D::from_rmw_message(msg.pose),
      goal: geometry_msgs::msg::Pose2D::from_rmw_message(msg.goal),
      si_vel: msg.si_vel
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to armrs_msgs__msg__FleetInformation
/// Centralized evaluation of the fleet performance 

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FleetInformation {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_ids: Vec<i64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_size: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub centroid_formation: geometry_msgs::msg::Pose2D,

}



impl Default for FleetInformation {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FleetInformation::default())
  }
}

impl rosidl_runtime_rs::Message for FleetInformation {
  type RmwMsg = super::msg::rmw::FleetInformation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_ids: msg.robot_ids.into(),
        fleet_size: msg.fleet_size,
        centroid_formation: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Owned(msg.centroid_formation)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_ids: msg.robot_ids.as_slice().into(),
      fleet_size: msg.fleet_size,
        centroid_formation: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.centroid_formation)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      robot_ids: msg.robot_ids
          .into_iter()
          .collect(),
      fleet_size: msg.fleet_size,
      centroid_formation: geometry_msgs::msg::Pose2D::from_rmw_message(msg.centroid_formation),
    }
  }
}


