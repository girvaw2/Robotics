"""autogenerated by genmsg_py from JointState.msg. Do not edit."""
import roslib.message
import struct

import std_msgs.msg

class JointState(roslib.message.Message):
  _md5sum = "2b8449320cde76616338e2539db27c32"
  _type = "dynamixel_msgs/JointState"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
string name         # joint name
int32[] motor_ids   # motor ids controlling this joint
int32[] motor_temps # motor temperatures, same order as motor_ids

float64 goal_pos    # commanded position (in radians)
float64 current_pos # current joint position (in radians)
float64 error       # error between commanded and current positions (in radians)
float64 velocity    # current joint speed (in radians per second)
float64 load        # current load
bool is_moving      # is joint currently in motion


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

"""
  __slots__ = ['header','name','motor_ids','motor_temps','goal_pos','current_pos','error','velocity','load','is_moving']
  _slot_types = ['Header','string','int32[]','int32[]','float64','float64','float64','float64','float64','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       header,name,motor_ids,motor_temps,goal_pos,current_pos,error,velocity,load,is_moving
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(JointState, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg._Header.Header()
      if self.name is None:
        self.name = ''
      if self.motor_ids is None:
        self.motor_ids = []
      if self.motor_temps is None:
        self.motor_temps = []
      if self.goal_pos is None:
        self.goal_pos = 0.
      if self.current_pos is None:
        self.current_pos = 0.
      if self.error is None:
        self.error = 0.
      if self.velocity is None:
        self.velocity = 0.
      if self.load is None:
        self.load = 0.
      if self.is_moving is None:
        self.is_moving = False
    else:
      self.header = std_msgs.msg._Header.Header()
      self.name = ''
      self.motor_ids = []
      self.motor_temps = []
      self.goal_pos = 0.
      self.current_pos = 0.
      self.error = 0.
      self.velocity = 0.
      self.load = 0.
      self.is_moving = False

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
      _x = self.name
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x.encode()))
      length = len(self.motor_ids)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.motor_ids))
      length = len(self.motor_temps)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.motor_temps))
      _x = self
      buff.write(_struct_5dB.pack(_x.goal_pos, _x.current_pos, _x.error, _x.velocity, _x.load, _x.is_moving))
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
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.motor_ids = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.motor_temps = struct.unpack(pattern, str[start:end])
      _x = self
      start = end
      end += 41
      (_x.goal_pos, _x.current_pos, _x.error, _x.velocity, _x.load, _x.is_moving,) = _struct_5dB.unpack(str[start:end])
      self.is_moving = bool(self.is_moving)
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
      _x = self.name
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x.encode()))
      length = len(self.motor_ids)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.motor_ids.tostring())
      length = len(self.motor_temps)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.motor_temps.tostring())
      _x = self
      buff.write(_struct_5dB.pack(_x.goal_pos, _x.current_pos, _x.error, _x.velocity, _x.load, _x.is_moving))
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
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.motor_ids = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.motor_temps = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      _x = self
      start = end
      end += 41
      (_x.goal_pos, _x.current_pos, _x.error, _x.velocity, _x.load, _x.is_moving,) = _struct_5dB.unpack(str[start:end])
      self.is_moving = bool(self.is_moving)
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
_struct_5dB = struct.Struct("<5dB")
_struct_3I = struct.Struct("<3I")
