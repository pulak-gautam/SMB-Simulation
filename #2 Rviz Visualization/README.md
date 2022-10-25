# Getting to know ROS by inspecting the simulation of a Super Mega Bot (SMB) robot

1. Completed Setup of SMB Simulation under common catkin_ws

2. Launched the simulation with roslaunch and inspect the created nodes and their topics

    (i) `rosnode list`

        /base_controller_spawner
        /ekf_localization
        /gazebo
        /gazebo_gui
        /pointcloud_to_laserscan
        /rosout
        /smb_robot_state_publisher
        /twist_mux


    (ii) `rostopic list`

        /clock
        /cmd_vel
        /diagnostics
        /e_stop
        /gazebo/link_states
        /gazebo/model_states
        /gazebo/parameter_descriptions
        /gazebo/parameter_updates
        /gazebo/performance_metrics
        /gazebo/set_link_state
        /gazebo/set_model_state
        /gazebo_ros_control/pid_gains/LF_WHEEL_JOINT/parameter_descriptions
        /gazebo_ros_control/pid_gains/LF_WHEEL_JOINT/parameter_updates
        /gazebo_ros_control/pid_gains/LH_WHEEL_JOINT/parameter_descriptions
        /gazebo_ros_control/pid_gains/LH_WHEEL_JOINT/parameter_updates
        /gazebo_ros_control/pid_gains/RF_WHEEL_JOINT/parameter_descriptions
        /gazebo_ros_control/pid_gains/RF_WHEEL_JOINT/parameter_updates
        /gazebo_ros_control/pid_gains/RH_WHEEL_JOINT/parameter_descriptions
        /gazebo_ros_control/pid_gains/RH_WHEEL_JOINT/parameter_updates
        /imu/data
        /imu0
        /imu0/accel/parameter_descriptions
        /imu0/accel/parameter_updates
        /imu0/bias
        /imu0/rate/parameter_descriptions
        /imu0/rate/parameter_updates
        /imu0/yaw/parameter_descriptions
        /imu0/yaw/parameter_updates
        /joint_states
        /joy_teleop/cmd_vel
        /odom
        /odometry/filtered
        /rosout
        /rosout_agg
        /rslidar_points
        /scan
        /set_pose
        /smb_velocity_controller/cmd_vel
        /smb_velocity_controller/odom
        /smb_velocity_controller/parameter_descriptions
        /smb_velocity_controller/parameter_updates
        /tf
        /tf_static
        /twist_marker_server/cmd_vel

4. Added teleop_twist_keyboard to control the robot using the keyboard, compiled from the source using the [git repo](https://github.com/ros-teleop/teleop_twist_keyboard).
    

5. Created a custom launch file including `smb_gazebo.launch` and changing the world_file argument to a world from the directory `/usr/share/gazebo-11/worlds`\
Here, default arg is set to `robocup14_spl_field`





