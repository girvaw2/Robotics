FILE(REMOVE_RECURSE
  "../msg_gen"
  "../src/dynamixel_msgs/msg"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/dynamixel_msgs/msg/__init__.py"
  "../src/dynamixel_msgs/msg/_JointState.py"
  "../src/dynamixel_msgs/msg/_MotorStateList.py"
  "../src/dynamixel_msgs/msg/_MotorState.py"
  "../src/dynamixel_msgs/msg/_JointStateList.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
