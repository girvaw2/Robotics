FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/pr2_controllers_msgs/msg"
  "../src/pr2_controllers_msgs/srv"
  "../msg_gen"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_gensrv_py"
  "../src/pr2_controllers_msgs/srv/__init__.py"
  "../src/pr2_controllers_msgs/srv/_QueryCalibrationState.py"
  "../src/pr2_controllers_msgs/srv/_QueryTrajectoryState.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
