import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/mahmmudqatmh/arms_ros2_humble/ros2_ws/install/armrs_package'
