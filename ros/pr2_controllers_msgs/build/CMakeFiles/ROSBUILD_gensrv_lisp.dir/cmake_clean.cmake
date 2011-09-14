FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/pr2_controllers_msgs/msg"
  "../src/pr2_controllers_msgs/srv"
  "../msg_gen"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_gensrv_lisp"
  "../srv_gen/lisp/QueryCalibrationState.lisp"
  "../srv_gen/lisp/_package.lisp"
  "../srv_gen/lisp/_package_QueryCalibrationState.lisp"
  "../srv_gen/lisp/QueryTrajectoryState.lisp"
  "../srv_gen/lisp/_package.lisp"
  "../srv_gen/lisp/_package_QueryTrajectoryState.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
