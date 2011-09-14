; Auto-generated. Do not edit!


(cl:in-package pr2_controllers_msgs-msg)


;//! \htmlinclude Pr2GripperCommandAction.msg.html

(cl:defclass <Pr2GripperCommandAction> (roslisp-msg-protocol:ros-message)
  ((action_goal
    :reader action_goal
    :initarg :action_goal
    :type pr2_controllers_msgs-msg:Pr2GripperCommandActionGoal
    :initform (cl:make-instance 'pr2_controllers_msgs-msg:Pr2GripperCommandActionGoal))
   (action_result
    :reader action_result
    :initarg :action_result
    :type pr2_controllers_msgs-msg:Pr2GripperCommandActionResult
    :initform (cl:make-instance 'pr2_controllers_msgs-msg:Pr2GripperCommandActionResult))
   (action_feedback
    :reader action_feedback
    :initarg :action_feedback
    :type pr2_controllers_msgs-msg:Pr2GripperCommandActionFeedback
    :initform (cl:make-instance 'pr2_controllers_msgs-msg:Pr2GripperCommandActionFeedback)))
)

(cl:defclass Pr2GripperCommandAction (<Pr2GripperCommandAction>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Pr2GripperCommandAction>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Pr2GripperCommandAction)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name pr2_controllers_msgs-msg:<Pr2GripperCommandAction> is deprecated: use pr2_controllers_msgs-msg:Pr2GripperCommandAction instead.")))

(cl:ensure-generic-function 'action_goal-val :lambda-list '(m))
(cl:defmethod action_goal-val ((m <Pr2GripperCommandAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pr2_controllers_msgs-msg:action_goal-val is deprecated.  Use pr2_controllers_msgs-msg:action_goal instead.")
  (action_goal m))

(cl:ensure-generic-function 'action_result-val :lambda-list '(m))
(cl:defmethod action_result-val ((m <Pr2GripperCommandAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pr2_controllers_msgs-msg:action_result-val is deprecated.  Use pr2_controllers_msgs-msg:action_result instead.")
  (action_result m))

(cl:ensure-generic-function 'action_feedback-val :lambda-list '(m))
(cl:defmethod action_feedback-val ((m <Pr2GripperCommandAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pr2_controllers_msgs-msg:action_feedback-val is deprecated.  Use pr2_controllers_msgs-msg:action_feedback instead.")
  (action_feedback m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Pr2GripperCommandAction>) ostream)
  "Serializes a message object of type '<Pr2GripperCommandAction>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_goal) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_result) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_feedback) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Pr2GripperCommandAction>) istream)
  "Deserializes a message object of type '<Pr2GripperCommandAction>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_goal) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_result) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_feedback) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Pr2GripperCommandAction>)))
  "Returns string type for a message object of type '<Pr2GripperCommandAction>"
  "pr2_controllers_msgs/Pr2GripperCommandAction")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Pr2GripperCommandAction)))
  "Returns string type for a message object of type 'Pr2GripperCommandAction"
  "pr2_controllers_msgs/Pr2GripperCommandAction")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Pr2GripperCommandAction>)))
  "Returns md5sum for a message object of type '<Pr2GripperCommandAction>"
  "950b2a6ebe831f5d4f4ceaba3d8be01e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Pr2GripperCommandAction)))
  "Returns md5sum for a message object of type 'Pr2GripperCommandAction"
  "950b2a6ebe831f5d4f4ceaba3d8be01e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Pr2GripperCommandAction>)))
  "Returns full string definition for message of type '<Pr2GripperCommandAction>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Pr2GripperCommandActionGoal action_goal~%Pr2GripperCommandActionResult action_result~%Pr2GripperCommandActionFeedback action_feedback~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommandActionGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%Pr2GripperCommandGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommandGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%pr2_controllers_msgs/Pr2GripperCommand command~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommand~%float64 position~%float64 max_effort~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommandActionResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%Pr2GripperCommandResult result~%~%================================================================================~%MSG: actionlib_msgs/GoalStatus~%GoalID goal_id~%uint8 status~%uint8 PENDING         = 0   # The goal has yet to be processed by the action server~%uint8 ACTIVE          = 1   # The goal is currently being processed by the action server~%uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing~%                            #   and has since completed its execution (Terminal State)~%uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)~%uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due~%                            #    to some failure (Terminal State)~%uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,~%                            #    because the goal was unattainable or invalid (Terminal State)~%uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing~%                            #    and has not yet completed execution~%uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,~%                            #    but the action server has not yet confirmed that the goal is canceled~%uint8 RECALLED        = 8   # The goal received a cancel request before it started executing~%                            #    and was successfully cancelled (Terminal State)~%uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be~%                            #    sent over the wire by an action server~%~%#Allow for the user to associate a string with GoalStatus for debugging~%string text~%~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommandResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%float64 position  # The current gripper gap size (in meters)~%float64 effort    # The current effort exerted (in Newtons)~%bool stalled      # True iff the gripper is exerting max effort and not moving~%bool reached_goal # True iff the gripper position has reached the commanded setpoint~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommandActionFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%Pr2GripperCommandFeedback feedback~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommandFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%float64 position  # The current gripper gap size (in meters)~%float64 effort    # The current effort exerted (in Newtons)~%bool stalled      # True iff the gripper is exerting max effort and not moving~%bool reached_goal # True iff the gripper position has reached the commanded setpoint~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Pr2GripperCommandAction)))
  "Returns full string definition for message of type 'Pr2GripperCommandAction"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Pr2GripperCommandActionGoal action_goal~%Pr2GripperCommandActionResult action_result~%Pr2GripperCommandActionFeedback action_feedback~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommandActionGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%Pr2GripperCommandGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommandGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%pr2_controllers_msgs/Pr2GripperCommand command~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommand~%float64 position~%float64 max_effort~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommandActionResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%Pr2GripperCommandResult result~%~%================================================================================~%MSG: actionlib_msgs/GoalStatus~%GoalID goal_id~%uint8 status~%uint8 PENDING         = 0   # The goal has yet to be processed by the action server~%uint8 ACTIVE          = 1   # The goal is currently being processed by the action server~%uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing~%                            #   and has since completed its execution (Terminal State)~%uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)~%uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due~%                            #    to some failure (Terminal State)~%uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,~%                            #    because the goal was unattainable or invalid (Terminal State)~%uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing~%                            #    and has not yet completed execution~%uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,~%                            #    but the action server has not yet confirmed that the goal is canceled~%uint8 RECALLED        = 8   # The goal received a cancel request before it started executing~%                            #    and was successfully cancelled (Terminal State)~%uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be~%                            #    sent over the wire by an action server~%~%#Allow for the user to associate a string with GoalStatus for debugging~%string text~%~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommandResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%float64 position  # The current gripper gap size (in meters)~%float64 effort    # The current effort exerted (in Newtons)~%bool stalled      # True iff the gripper is exerting max effort and not moving~%bool reached_goal # True iff the gripper position has reached the commanded setpoint~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommandActionFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%Pr2GripperCommandFeedback feedback~%~%================================================================================~%MSG: pr2_controllers_msgs/Pr2GripperCommandFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%float64 position  # The current gripper gap size (in meters)~%float64 effort    # The current effort exerted (in Newtons)~%bool stalled      # True iff the gripper is exerting max effort and not moving~%bool reached_goal # True iff the gripper position has reached the commanded setpoint~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Pr2GripperCommandAction>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_goal))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_result))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_feedback))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Pr2GripperCommandAction>))
  "Converts a ROS message object to a list"
  (cl:list 'Pr2GripperCommandAction
    (cl:cons ':action_goal (action_goal msg))
    (cl:cons ':action_result (action_result msg))
    (cl:cons ':action_feedback (action_feedback msg))
))
