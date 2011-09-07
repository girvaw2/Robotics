/* Auto-generated by genmsg_cpp for file /home/billy/ros/stacks/dynamixel_motor/dynamixel_msgs/msg/JointState.msg */
#ifndef DYNAMIXEL_MSGS_MESSAGE_JOINTSTATE_H
#define DYNAMIXEL_MSGS_MESSAGE_JOINTSTATE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace dynamixel_msgs
{
template <class ContainerAllocator>
struct JointState_ {
  typedef JointState_<ContainerAllocator> Type;

  JointState_()
  : header()
  , name()
  , motor_ids()
  , motor_temps()
  , goal_pos(0.0)
  , current_pos(0.0)
  , error(0.0)
  , velocity(0.0)
  , load(0.0)
  , is_moving(false)
  {
  }

  JointState_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , name(_alloc)
  , motor_ids(_alloc)
  , motor_temps(_alloc)
  , goal_pos(0.0)
  , current_pos(0.0)
  , error(0.0)
  , velocity(0.0)
  , load(0.0)
  , is_moving(false)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  name;

  typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _motor_ids_type;
  std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  motor_ids;

  typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _motor_temps_type;
  std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  motor_temps;

  typedef double _goal_pos_type;
  double goal_pos;

  typedef double _current_pos_type;
  double current_pos;

  typedef double _error_type;
  double error;

  typedef double _velocity_type;
  double velocity;

  typedef double _load_type;
  double load;

  typedef uint8_t _is_moving_type;
  uint8_t is_moving;


  ROS_DEPRECATED uint32_t get_motor_ids_size() const { return (uint32_t)motor_ids.size(); }
  ROS_DEPRECATED void set_motor_ids_size(uint32_t size) { motor_ids.resize((size_t)size); }
  ROS_DEPRECATED void get_motor_ids_vec(std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other > & vec) const { vec = this->motor_ids; }
  ROS_DEPRECATED void set_motor_ids_vec(const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other > & vec) { this->motor_ids = vec; }
  ROS_DEPRECATED uint32_t get_motor_temps_size() const { return (uint32_t)motor_temps.size(); }
  ROS_DEPRECATED void set_motor_temps_size(uint32_t size) { motor_temps.resize((size_t)size); }
  ROS_DEPRECATED void get_motor_temps_vec(std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other > & vec) const { vec = this->motor_temps; }
  ROS_DEPRECATED void set_motor_temps_vec(const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other > & vec) { this->motor_temps = vec; }
private:
  static const char* __s_getDataType_() { return "dynamixel_msgs/JointState"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "2b8449320cde76616338e2539db27c32"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Header header\n\
string name         # joint name\n\
int32[] motor_ids   # motor ids controlling this joint\n\
int32[] motor_temps # motor temperatures, same order as motor_ids\n\
\n\
float64 goal_pos    # commanded position (in radians)\n\
float64 current_pos # current joint position (in radians)\n\
float64 error       # error between commanded and current positions (in radians)\n\
float64 velocity    # current joint speed (in radians per second)\n\
float64 load        # current load\n\
bool is_moving      # is joint currently in motion\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, name);
    ros::serialization::serialize(stream, motor_ids);
    ros::serialization::serialize(stream, motor_temps);
    ros::serialization::serialize(stream, goal_pos);
    ros::serialization::serialize(stream, current_pos);
    ros::serialization::serialize(stream, error);
    ros::serialization::serialize(stream, velocity);
    ros::serialization::serialize(stream, load);
    ros::serialization::serialize(stream, is_moving);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, name);
    ros::serialization::deserialize(stream, motor_ids);
    ros::serialization::deserialize(stream, motor_temps);
    ros::serialization::deserialize(stream, goal_pos);
    ros::serialization::deserialize(stream, current_pos);
    ros::serialization::deserialize(stream, error);
    ros::serialization::deserialize(stream, velocity);
    ros::serialization::deserialize(stream, load);
    ros::serialization::deserialize(stream, is_moving);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(name);
    size += ros::serialization::serializationLength(motor_ids);
    size += ros::serialization::serializationLength(motor_temps);
    size += ros::serialization::serializationLength(goal_pos);
    size += ros::serialization::serializationLength(current_pos);
    size += ros::serialization::serializationLength(error);
    size += ros::serialization::serializationLength(velocity);
    size += ros::serialization::serializationLength(load);
    size += ros::serialization::serializationLength(is_moving);
    return size;
  }

  typedef boost::shared_ptr< ::dynamixel_msgs::JointState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_msgs::JointState_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct JointState
typedef  ::dynamixel_msgs::JointState_<std::allocator<void> > JointState;

typedef boost::shared_ptr< ::dynamixel_msgs::JointState> JointStatePtr;
typedef boost::shared_ptr< ::dynamixel_msgs::JointState const> JointStateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::dynamixel_msgs::JointState_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::dynamixel_msgs::JointState_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace dynamixel_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamixel_msgs::JointState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamixel_msgs::JointState_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_msgs::JointState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2b8449320cde76616338e2539db27c32";
  }

  static const char* value(const  ::dynamixel_msgs::JointState_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x2b8449320cde7661ULL;
  static const uint64_t static_value2 = 0x6338e2539db27c32ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_msgs::JointState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_msgs/JointState";
  }

  static const char* value(const  ::dynamixel_msgs::JointState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_msgs::JointState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
string name         # joint name\n\
int32[] motor_ids   # motor ids controlling this joint\n\
int32[] motor_temps # motor temperatures, same order as motor_ids\n\
\n\
float64 goal_pos    # commanded position (in radians)\n\
float64 current_pos # current joint position (in radians)\n\
float64 error       # error between commanded and current positions (in radians)\n\
float64 velocity    # current joint speed (in radians per second)\n\
float64 load        # current load\n\
bool is_moving      # is joint currently in motion\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::dynamixel_msgs::JointState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::dynamixel_msgs::JointState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::dynamixel_msgs::JointState_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamixel_msgs::JointState_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.name);
    stream.next(m.motor_ids);
    stream.next(m.motor_temps);
    stream.next(m.goal_pos);
    stream.next(m.current_pos);
    stream.next(m.error);
    stream.next(m.velocity);
    stream.next(m.load);
    stream.next(m.is_moving);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct JointState_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamixel_msgs::JointState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::dynamixel_msgs::JointState_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "motor_ids[]" << std::endl;
    for (size_t i = 0; i < v.motor_ids.size(); ++i)
    {
      s << indent << "  motor_ids[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.motor_ids[i]);
    }
    s << indent << "motor_temps[]" << std::endl;
    for (size_t i = 0; i < v.motor_temps.size(); ++i)
    {
      s << indent << "  motor_temps[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.motor_temps[i]);
    }
    s << indent << "goal_pos: ";
    Printer<double>::stream(s, indent + "  ", v.goal_pos);
    s << indent << "current_pos: ";
    Printer<double>::stream(s, indent + "  ", v.current_pos);
    s << indent << "error: ";
    Printer<double>::stream(s, indent + "  ", v.error);
    s << indent << "velocity: ";
    Printer<double>::stream(s, indent + "  ", v.velocity);
    s << indent << "load: ";
    Printer<double>::stream(s, indent + "  ", v.load);
    s << indent << "is_moving: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_moving);
  }
};


} // namespace message_operations
} // namespace ros

#endif // DYNAMIXEL_MSGS_MESSAGE_JOINTSTATE_H

