; Auto-generated. Do not edit!


(cl:in-package pr2_controllers_msgs-msg)


;//! \htmlinclude Pr2GripperCommandFeedback.msg.html

(cl:defclass <Pr2GripperCommandFeedback> (roslisp-msg-protocol:ros-message)
  ((position
    :reader position
    :initarg :position
    :type cl:float
    :initform 0.0)
   (effort
    :reader effort
    :initarg :effort
    :type cl:float
    :initform 0.0)
   (stalled
    :reader stalled
    :initarg :stalled
    :type cl:boolean
    :initform cl:nil)
   (reached_goal
    :reader reached_goal
    :initarg :reached_goal
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Pr2GripperCommandFeedback (<Pr2GripperCommandFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Pr2GripperCommandFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Pr2GripperCommandFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name pr2_controllers_msgs-msg:<Pr2GripperCommandFeedback> is deprecated: use pr2_controllers_msgs-msg:Pr2GripperCommandFeedback instead.")))

(cl:ensure-generic-function 'position-val :lambda-list '(m))
(cl:defmethod position-val ((m <Pr2GripperCommandFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pr2_controllers_msgs-msg:position-val is deprecated.  Use pr2_controllers_msgs-msg:position instead.")
  (position m))

(cl:ensure-generic-function 'effort-val :lambda-list '(m))
(cl:defmethod effort-val ((m <Pr2GripperCommandFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pr2_controllers_msgs-msg:effort-val is deprecated.  Use pr2_controllers_msgs-msg:effort instead.")
  (effort m))

(cl:ensure-generic-function 'stalled-val :lambda-list '(m))
(cl:defmethod stalled-val ((m <Pr2GripperCommandFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pr2_controllers_msgs-msg:stalled-val is deprecated.  Use pr2_controllers_msgs-msg:stalled instead.")
  (stalled m))

(cl:ensure-generic-function 'reached_goal-val :lambda-list '(m))
(cl:defmethod reached_goal-val ((m <Pr2GripperCommandFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pr2_controllers_msgs-msg:reached_goal-val is deprecated.  Use pr2_controllers_msgs-msg:reached_goal instead.")
  (reached_goal m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Pr2GripperCommandFeedback>) ostream)
  "Serializes a message object of type '<Pr2GripperCommandFeedback>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'position))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'effort))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'stalled) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'reached_goal) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Pr2GripperCommandFeedback>) istream)
  "Deserializes a message object of type '<Pr2GripperCommandFeedback>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'position) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'effort) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:slot-value msg 'stalled) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'reached_goal) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Pr2GripperCommandFeedback>)))
  "Returns string type for a message object of type '<Pr2GripperCommandFeedback>"
  "pr2_controllers_msgs/Pr2GripperCommandFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Pr2GripperCommandFeedback)))
  "Returns string type for a message object of type 'Pr2GripperCommandFeedback"
  "pr2_controllers_msgs/Pr2GripperCommandFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Pr2GripperCommandFeedback>)))
  "Returns md5sum for a message object of type '<Pr2GripperCommandFeedback>"
  "e4cbff56d3562bcf113da5a5adeef91f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Pr2GripperCommandFeedback)))
  "Returns md5sum for a message object of type 'Pr2GripperCommandFeedback"
  "e4cbff56d3562bcf113da5a5adeef91f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Pr2GripperCommandFeedback>)))
  "Returns full string definition for message of type '<Pr2GripperCommandFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%float64 position  # The current gripper gap size (in meters)~%float64 effort    # The current effort exerted (in Newtons)~%bool stalled      # True iff the gripper is exerting max effort and not moving~%bool reached_goal # True iff the gripper position has reached the commanded setpoint~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Pr2GripperCommandFeedback)))
  "Returns full string definition for message of type 'Pr2GripperCommandFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%float64 position  # The current gripper gap size (in meters)~%float64 effort    # The current effort exerted (in Newtons)~%bool stalled      # True iff the gripper is exerting max effort and not moving~%bool reached_goal # True iff the gripper position has reached the commanded setpoint~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Pr2GripperCommandFeedback>))
  (cl:+ 0
     8
     8
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Pr2GripperCommandFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'Pr2GripperCommandFeedback
    (cl:cons ':position (position msg))
    (cl:cons ':effort (effort msg))
    (cl:cons ':stalled (stalled msg))
    (cl:cons ':reached_goal (reached_goal msg))
))
