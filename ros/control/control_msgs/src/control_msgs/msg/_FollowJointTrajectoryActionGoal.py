"""autogenerated by genmsg_py from FollowJointTrajectoryActionGoal.msg. Do not edit."""
import roslib.message
import struct

import trajectory_msgs.msg
import control_msgs.msg
import roslib.rostime
import actionlib_msgs.msg
import std_msgs.msg

class FollowJointTrajectoryActionGoal(roslib.message.Message):
  _md5sum = "8f3e00277a7b5b7c60e1ac5be35ddfa2"
  _type = "control_msgs/FollowJointTrajectoryActionGoal"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalID goal_id
FollowJointTrajectoryGoal goal

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.secs: seconds (stamp_secs) since epoch
# * stamp.nsecs: nanoseconds since stamp_secs
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: actionlib_msgs/GoalID
# The stamp should store the time at which this goal was requested.
# It is used by an action server when it tries to preempt all
# goals that were requested before a certain time
time stamp

# The id provides a way to associate feedback and
# result message with specific goal requests. The id
# specified must be unique.
string id


================================================================================
MSG: control_msgs/FollowJointTrajectoryGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# The joint trajectory to follow
trajectory_msgs/JointTrajectory trajectory

# Tolerances for the trajectory.  If the measured joint values fall
# outside the tolerances the trajectory goal is aborted.  Any
# tolerances that are not specified (by being omitted or set to 0) are
# set to the defaults for the action server (often taken from the
# parameter server).

# Tolerances applied to the joints as the trajectory is executed.  If
# violated, the goal aborts with error_code set to
# PATH_TOLERANCE_VIOLATED.
JointTolerance[] path_tolerance

# To report success, the joints must be within goal_tolerance of the
# final trajectory value.  The goal must be achieved by time the
# trajectory ends plus goal_time_tolerance.  (goal_time_tolerance
# allows some leeway in time, so that the trajectory goal can still
# succeed even if the joints reach the goal some time after the
# precise end time of the trajectory).
#
# If the joints are not within goal_tolerance after "trajectory finish
# time" + goal_time_tolerance, the goal aborts with error_code set to
# GOAL_TOLERANCE_VIOLATED
JointTolerance[] goal_tolerance
duration goal_time_tolerance


================================================================================
MSG: trajectory_msgs/JointTrajectory
Header header
string[] joint_names
JointTrajectoryPoint[] points
================================================================================
MSG: trajectory_msgs/JointTrajectoryPoint
float64[] positions
float64[] velocities
float64[] accelerations
duration time_from_start
================================================================================
MSG: control_msgs/JointTolerance
# The tolerances specify the amount the position, velocity, and
# accelerations can vary from the setpoints.  For example, in the case
# of trajectory control, when the actual position varies beyond
# (desired position + position tolerance), the trajectory goal may
# abort.
# 
# There are two special values for tolerances:
#  * 0 - The tolerance is unspecified and will remain at whatever the default is
#  * -1 - The tolerance is "erased".  If there was a default, the joint will be
#         allowed to move without restriction.

string name
float64 position  # in radians or meters (for a revolute or prismatic joint, respectively)
float64 velocity  # in rad/sec or m/sec
float64 acceleration  # in rad/sec^2 or m/sec^2

"""
  __slots__ = ['header','goal_id','goal']
  _slot_types = ['Header','actionlib_msgs/GoalID','control_msgs/FollowJointTrajectoryGoal']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       header,goal_id,goal
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(FollowJointTrajectoryActionGoal, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg._Header.Header()
      if self.goal_id is None:
        self.goal_id = actionlib_msgs.msg.GoalID()
      if self.goal is None:
        self.goal = control_msgs.msg.FollowJointTrajectoryGoal()
    else:
      self.header = std_msgs.msg._Header.Header()
      self.goal_id = actionlib_msgs.msg.GoalID()
      self.goal = control_msgs.msg.FollowJointTrajectoryGoal()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    @param buff: buffer
    @type  buff: StringIO
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x.encode()))
      _x = self
      buff.write(_struct_2I.pack(_x.goal_id.stamp.secs, _x.goal_id.stamp.nsecs))
      _x = self.goal_id.id
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x.encode()))
      _x = self
      buff.write(_struct_3I.pack(_x.goal.trajectory.header.seq, _x.goal.trajectory.header.stamp.secs, _x.goal.trajectory.header.stamp.nsecs))
      _x = self.goal.trajectory.header.frame_id
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x.encode()))
      length = len(self.goal.trajectory.joint_names)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.trajectory.joint_names:
        length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1.encode()))
      length = len(self.goal.trajectory.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.trajectory.points:
        length = len(val1.positions)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(struct.pack(pattern, *val1.positions))
        length = len(val1.velocities)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(struct.pack(pattern, *val1.velocities))
        length = len(val1.accelerations)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(struct.pack(pattern, *val1.accelerations))
        _v1 = val1.time_from_start
        _x = _v1
        buff.write(_struct_2i.pack(_x.secs, _x.nsecs))
      length = len(self.goal.path_tolerance)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.path_tolerance:
        _x = val1.name
        length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x.encode()))
        _x = val1
        buff.write(_struct_3d.pack(_x.position, _x.velocity, _x.acceleration))
      length = len(self.goal.goal_tolerance)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.goal_tolerance:
        _x = val1.name
        length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x.encode()))
        _x = val1
        buff.write(_struct_3d.pack(_x.position, _x.velocity, _x.acceleration))
      _x = self
      buff.write(_struct_2i.pack(_x.goal.goal_time_tolerance.secs, _x.goal.goal_time_tolerance.nsecs))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    @param str: byte array of serialized message
    @type  str: str
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg._Header.Header()
      if self.goal_id is None:
        self.goal_id = actionlib_msgs.msg.GoalID()
      if self.goal is None:
        self.goal = control_msgs.msg.FollowJointTrajectoryGoal()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.goal_id.stamp.secs, _x.goal_id.stamp.nsecs,) = _struct_2I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.goal_id.id = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.goal.trajectory.header.seq, _x.goal.trajectory.header.stamp.secs, _x.goal.trajectory.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.goal.trajectory.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.trajectory.joint_names = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        val1 = str[start:end]
        self.goal.trajectory.joint_names.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.trajectory.points = []
      for i in range(0, length):
        val1 = trajectory_msgs.msg.JointTrajectoryPoint()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        val1.positions = struct.unpack(pattern, str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        val1.velocities = struct.unpack(pattern, str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        val1.accelerations = struct.unpack(pattern, str[start:end])
        _v2 = val1.time_from_start
        _x = _v2
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2i.unpack(str[start:end])
        self.goal.trajectory.points.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.path_tolerance = []
      for i in range(0, length):
        val1 = control_msgs.msg.JointTolerance()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        val1.name = str[start:end]
        _x = val1
        start = end
        end += 24
        (_x.position, _x.velocity, _x.acceleration,) = _struct_3d.unpack(str[start:end])
        self.goal.path_tolerance.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.goal_tolerance = []
      for i in range(0, length):
        val1 = control_msgs.msg.JointTolerance()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        val1.name = str[start:end]
        _x = val1
        start = end
        end += 24
        (_x.position, _x.velocity, _x.acceleration,) = _struct_3d.unpack(str[start:end])
        self.goal.goal_tolerance.append(val1)
      _x = self
      start = end
      end += 8
      (_x.goal.goal_time_tolerance.secs, _x.goal.goal_time_tolerance.nsecs,) = _struct_2i.unpack(str[start:end])
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    @param buff: buffer
    @type  buff: StringIO
    @param numpy: numpy python module
    @type  numpy module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x.encode()))
      _x = self
      buff.write(_struct_2I.pack(_x.goal_id.stamp.secs, _x.goal_id.stamp.nsecs))
      _x = self.goal_id.id
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x.encode()))
      _x = self
      buff.write(_struct_3I.pack(_x.goal.trajectory.header.seq, _x.goal.trajectory.header.stamp.secs, _x.goal.trajectory.header.stamp.nsecs))
      _x = self.goal.trajectory.header.frame_id
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x.encode()))
      length = len(self.goal.trajectory.joint_names)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.trajectory.joint_names:
        length = len(val1)
        buff.write(struct.pack('<I%ss'%length, length, val1.encode()))
      length = len(self.goal.trajectory.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.trajectory.points:
        length = len(val1.positions)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(val1.positions.tostring())
        length = len(val1.velocities)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(val1.velocities.tostring())
        length = len(val1.accelerations)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(val1.accelerations.tostring())
        _v3 = val1.time_from_start
        _x = _v3
        buff.write(_struct_2i.pack(_x.secs, _x.nsecs))
      length = len(self.goal.path_tolerance)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.path_tolerance:
        _x = val1.name
        length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x.encode()))
        _x = val1
        buff.write(_struct_3d.pack(_x.position, _x.velocity, _x.acceleration))
      length = len(self.goal.goal_tolerance)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal.goal_tolerance:
        _x = val1.name
        length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x.encode()))
        _x = val1
        buff.write(_struct_3d.pack(_x.position, _x.velocity, _x.acceleration))
      _x = self
      buff.write(_struct_2i.pack(_x.goal.goal_time_tolerance.secs, _x.goal.goal_time_tolerance.nsecs))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    @param str: byte array of serialized message
    @type  str: str
    @param numpy: numpy python module
    @type  numpy: module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg._Header.Header()
      if self.goal_id is None:
        self.goal_id = actionlib_msgs.msg.GoalID()
      if self.goal is None:
        self.goal = control_msgs.msg.FollowJointTrajectoryGoal()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.goal_id.stamp.secs, _x.goal_id.stamp.nsecs,) = _struct_2I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.goal_id.id = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.goal.trajectory.header.seq, _x.goal.trajectory.header.stamp.secs, _x.goal.trajectory.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.goal.trajectory.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.trajectory.joint_names = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        val1 = str[start:end]
        self.goal.trajectory.joint_names.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.trajectory.points = []
      for i in range(0, length):
        val1 = trajectory_msgs.msg.JointTrajectoryPoint()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        val1.positions = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        val1.velocities = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        val1.accelerations = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
        _v4 = val1.time_from_start
        _x = _v4
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2i.unpack(str[start:end])
        self.goal.trajectory.points.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.path_tolerance = []
      for i in range(0, length):
        val1 = control_msgs.msg.JointTolerance()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        val1.name = str[start:end]
        _x = val1
        start = end
        end += 24
        (_x.position, _x.velocity, _x.acceleration,) = _struct_3d.unpack(str[start:end])
        self.goal.path_tolerance.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal.goal_tolerance = []
      for i in range(0, length):
        val1 = control_msgs.msg.JointTolerance()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        val1.name = str[start:end]
        _x = val1
        start = end
        end += 24
        (_x.position, _x.velocity, _x.acceleration,) = _struct_3d.unpack(str[start:end])
        self.goal.goal_tolerance.append(val1)
      _x = self
      start = end
      end += 8
      (_x.goal.goal_time_tolerance.secs, _x.goal.goal_time_tolerance.nsecs,) = _struct_2i.unpack(str[start:end])
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
_struct_3I = struct.Struct("<3I")
_struct_3d = struct.Struct("<3d")
_struct_2I = struct.Struct("<2I")
_struct_2i = struct.Struct("<2i")
