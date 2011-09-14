# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/billy/ros/stacks/pr2_controllers_msgs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/billy/ros/stacks/pr2_controllers_msgs/build

# Utility rule file for ROSBUILD_gensrv_py.

CMakeFiles/ROSBUILD_gensrv_py: ../src/pr2_controllers_msgs/srv/__init__.py

../src/pr2_controllers_msgs/srv/__init__.py: ../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py
../src/pr2_controllers_msgs/srv/__init__.py: ../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py
	$(CMAKE_COMMAND) -E cmake_progress_report /home/billy/ros/stacks/pr2_controllers_msgs/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/pr2_controllers_msgs/srv/__init__.py"
	/opt/ros/electric/stacks/ros_comm/clients/rospy/scripts/gensrv_py.py --initpy /home/billy/ros/stacks/pr2_controllers_msgs/srv/QueryCalibrationState.srv /home/billy/ros/stacks/pr2_controllers_msgs/srv/QueryTrajectoryState.srv

../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: ../srv/QueryCalibrationState.srv
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/clients/rospy/scripts/gensrv_py.py
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/ros/core/roslib/scripts/gendeps
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: ../manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/common_msgs/actionlib_msgs/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/common_msgs/trajectory_msgs/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/ros/core/rosbuild/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/ros/core/roslang/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/utilities/cpp_common/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp_traits/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/utilities/rostime/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp_serialization/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/ros/tools/rospack/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/ros/core/roslib/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/utilities/xmlrpcpp/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/tools/rosconsole/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/messages/std_msgs/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/messages/rosgraph_msgs/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/clients/rospy/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/ros/tools/rosclean/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/tools/rosgraph/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/tools/rosparam/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/tools/rosmaster/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/tools/rosout/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/tools/roslaunch/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/ros/tools/rosunit/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/tools/rostest/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/tools/topic_tools/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/tools/rosbag/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/tools/rosbagmigration/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/common_msgs/geometry_msgs/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/common_msgs/actionlib_msgs/msg_gen/generated
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/common_msgs/trajectory_msgs/msg_gen/generated
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/messages/std_msgs/msg_gen/generated
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/messages/rosgraph_msgs/msg_gen/generated
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp/msg_gen/generated
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp/srv_gen/generated
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/ros_comm/tools/topic_tools/srv_gen/generated
../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py: /opt/ros/electric/stacks/common_msgs/geometry_msgs/msg_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/billy/ros/stacks/pr2_controllers_msgs/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py"
	/opt/ros/electric/stacks/ros_comm/clients/rospy/scripts/gensrv_py.py --noinitpy /home/billy/ros/stacks/pr2_controllers_msgs/srv/QueryCalibrationState.srv

../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: ../srv/QueryTrajectoryState.srv
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/clients/rospy/scripts/gensrv_py.py
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/ros/core/roslib/scripts/gendeps
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: ../manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/common_msgs/actionlib_msgs/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/common_msgs/trajectory_msgs/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/ros/core/rosbuild/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/ros/core/roslang/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/utilities/cpp_common/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp_traits/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/utilities/rostime/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp_serialization/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/ros/tools/rospack/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/ros/core/roslib/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/utilities/xmlrpcpp/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/tools/rosconsole/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/messages/std_msgs/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/messages/rosgraph_msgs/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/clients/rospy/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/ros/tools/rosclean/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/tools/rosgraph/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/tools/rosparam/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/tools/rosmaster/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/tools/rosout/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/tools/roslaunch/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/ros/tools/rosunit/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/tools/rostest/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/tools/topic_tools/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/tools/rosbag/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/tools/rosbagmigration/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/common_msgs/geometry_msgs/manifest.xml
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/common_msgs/actionlib_msgs/msg_gen/generated
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/common_msgs/trajectory_msgs/msg_gen/generated
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/messages/std_msgs/msg_gen/generated
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/messages/rosgraph_msgs/msg_gen/generated
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp/msg_gen/generated
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/clients/cpp/roscpp/srv_gen/generated
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/ros_comm/tools/topic_tools/srv_gen/generated
../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py: /opt/ros/electric/stacks/common_msgs/geometry_msgs/msg_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/billy/ros/stacks/pr2_controllers_msgs/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating ../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py"
	/opt/ros/electric/stacks/ros_comm/clients/rospy/scripts/gensrv_py.py --noinitpy /home/billy/ros/stacks/pr2_controllers_msgs/srv/QueryTrajectoryState.srv

ROSBUILD_gensrv_py: CMakeFiles/ROSBUILD_gensrv_py
ROSBUILD_gensrv_py: ../src/pr2_controllers_msgs/srv/__init__.py
ROSBUILD_gensrv_py: ../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py
ROSBUILD_gensrv_py: ../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py
ROSBUILD_gensrv_py: CMakeFiles/ROSBUILD_gensrv_py.dir/build.make
.PHONY : ROSBUILD_gensrv_py

# Rule to build all files generated by this target.
CMakeFiles/ROSBUILD_gensrv_py.dir/build: ROSBUILD_gensrv_py
.PHONY : CMakeFiles/ROSBUILD_gensrv_py.dir/build

CMakeFiles/ROSBUILD_gensrv_py.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ROSBUILD_gensrv_py.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ROSBUILD_gensrv_py.dir/clean

CMakeFiles/ROSBUILD_gensrv_py.dir/depend:
	cd /home/billy/ros/stacks/pr2_controllers_msgs/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/billy/ros/stacks/pr2_controllers_msgs /home/billy/ros/stacks/pr2_controllers_msgs /home/billy/ros/stacks/pr2_controllers_msgs/build /home/billy/ros/stacks/pr2_controllers_msgs/build /home/billy/ros/stacks/pr2_controllers_msgs/build/CMakeFiles/ROSBUILD_gensrv_py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ROSBUILD_gensrv_py.dir/depend

