FILE(REMOVE_RECURSE
  "../msg_gen"
  "../src/control_msgs/msg"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/control_msgs/msg/__init__.py"
  "../src/control_msgs/msg/_PointHeadActionAction.py"
  "../src/control_msgs/msg/_PointHeadActionGoal.py"
  "../src/control_msgs/msg/_PointHeadActionActionGoal.py"
  "../src/control_msgs/msg/_PointHeadActionResult.py"
  "../src/control_msgs/msg/_PointHeadActionActionResult.py"
  "../src/control_msgs/msg/_PointHeadActionFeedback.py"
  "../src/control_msgs/msg/_PointHeadActionActionFeedback.py"
  "../src/control_msgs/msg/_FollowJointTrajectoryAction.py"
  "../src/control_msgs/msg/_FollowJointTrajectoryGoal.py"
  "../src/control_msgs/msg/_FollowJointTrajectoryActionGoal.py"
  "../src/control_msgs/msg/_FollowJointTrajectoryResult.py"
  "../src/control_msgs/msg/_FollowJointTrajectoryActionResult.py"
  "../src/control_msgs/msg/_FollowJointTrajectoryFeedback.py"
  "../src/control_msgs/msg/_FollowJointTrajectoryActionFeedback.py"
  "../src/control_msgs/msg/_JointTolerance.py"
  "../msg/PointHeadActionAction.msg"
  "../msg/PointHeadActionGoal.msg"
  "../msg/PointHeadActionActionGoal.msg"
  "../msg/PointHeadActionResult.msg"
  "../msg/PointHeadActionActionResult.msg"
  "../msg/PointHeadActionFeedback.msg"
  "../msg/PointHeadActionActionFeedback.msg"
  "../msg/FollowJointTrajectoryAction.msg"
  "../msg/FollowJointTrajectoryGoal.msg"
  "../msg/FollowJointTrajectoryActionGoal.msg"
  "../msg/FollowJointTrajectoryResult.msg"
  "../msg/FollowJointTrajectoryActionResult.msg"
  "../msg/FollowJointTrajectoryFeedback.msg"
  "../msg/FollowJointTrajectoryActionFeedback.msg"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
