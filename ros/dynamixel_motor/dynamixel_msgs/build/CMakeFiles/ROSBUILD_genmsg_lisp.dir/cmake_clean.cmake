FILE(REMOVE_RECURSE
  "../msg_gen"
  "../src/dynamixel_msgs/msg"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_lisp"
  "../msg_gen/lisp/JointState.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_JointState.lisp"
  "../msg_gen/lisp/MotorStateList.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_MotorStateList.lisp"
  "../msg_gen/lisp/MotorState.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_MotorState.lisp"
  "../msg_gen/lisp/JointStateList.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_JointStateList.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
