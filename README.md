# Underwater Cooperative Mapping: Virtual Sonar Array
**Group 14 | AR-MRS 2026 Open Project**

This repository contains a decentralized multi-robot system designed to maintain a rigid formation for Synthetic Aperture Sonar (SAS) mapping while navigating unknown environments.

## 🚀 Application Scenario: The Virtual Array
In underwater mapping, high-resolution sonar requires large physical arrays. This project replaces a single large sensor with a **Virtual Array** of 4 TurtleBot 4s (simulated as ROVs). 
* **Objective:** Maintain a precise 90-degree symmetric formation.
* **Movement Focus:** Cooperative movement control to preserve array integrity during mission execution.


🎥 Simulation



https://github.com/user-attachments/assets/1a88e12e-fcb5-481f-8f8a-6fdfeea5e1cc



  
## 📂 Project Structure

The workspace is organized into two main ROS 2 packages: one for custom communication interfaces and one for the core logic and simulation.

```text
.
├── src/
│   ├── armrs_msgs/                # Custom ROS 2 Interfaces
│   │   ├── msg/
│   │   │   ├── FleetInformation.msg  # Global fleet telemetry
│   │   │   └── StateExchange.msg    # Peer-to-peer state data
│   │   └── CMakeLists.txt
│   │
│   └── armrs_package/             # Core Logic & Controller
│       ├── armrs_package/
│       │   ├── main_controller.py     # QP-CBF Optimization Logic
│       │   ├── ROS2_dist_controller.py # Distributed Node Implementation
│       │   ├── ROS2_sensors.py        # LiDAR & Sonar processing
│       │   ├── ROS2_sim.py            # Simulation environment bridge
│       │   ├── scenario_demo_*.yaml   # Formation & Mission parameters
│       │   └── nebosim_core/          # Physics and Logging backend
│       ├── launch/
│       │   ├── ROS2_sim_launch.py     # Main entry point for simulation
│       │   └── exp_launch.py          # Launch for experimental runs
│       ├── setup.py                   # Package dependencies
│       └── package.xml
│
├── media/                         # Performance Demonstrations
│   ├── CBF.avi                    # Obstacle avoidance visualization
│   ├── formation.avi              # Symmetric array maintenance
│   └── fullscenario.avi           # Complete mission execution
└── README.md
```

## 🛠️ Technical Implementation

### 1. Distributed Estimation
We use **Decentralized State Exchange**. Each robot broadcasts its telemetry at **50Hz** via ROS 2 `StateExchange` messages. There is no central leader; every robot independently calculates the fleet's center to stay in its assigned "slot."

### 2. Safety-Critical Control (QP-CBF)
To guarantee 0% collision rates without breaking the formation, we implemented a **Quadratic Programming (QP)** filter based on **Control Barrier Functions (CBF)**.
- **Solver:** `OSQP`
- **Logic:** Nominal formation velocities are filtered against LiDAR-detected obstacles in real-time.

### 3. LiDAR Perception Pipeline
Raw LaserScan data is projected into global Cartesian coordinates. We apply a distance filter (0.1m to 3.0m) to remove sensor noise and self-detection, feeding the 10 closest points as hard constraints into the QP solver.

## 📦 Installation & Usage
1. Clone this repo into your `colcon` workspace:
   ```bash
   git clone https://github.com/MahmmudQatmh/underwater-sas-fleet-coordination.git
   ```

2. Install dependencies:
   ```bash
   pip install qpsolvers scipy
   ```

3. Build and Launch:
   ```bash
   colcon build --symlink-install --packages-select armrs_package
   ros2 launch armrs_package ROS2_sim_launch.py
   ```

🧠 Lessons Learned

* Feedback Linearization: Tuning the Look-Ahead distance ($\ell$) was critical for stability.
* Computational Efficiency: Transitioned to Sparse Matrices (CSC) to fix ROS 2 loop-rate lag during high-density LiDAR sensing.

---

*Built by **Mahmmud Qatmh***
