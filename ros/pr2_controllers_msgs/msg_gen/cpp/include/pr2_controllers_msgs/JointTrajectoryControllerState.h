/* Auto-generated by genmsg_cpp for file /home/billy/ros/stacks/pr2_controllers_msgs/msg/JointTrajectoryControllerState.msg */
#ifndef PR2_CONTROLLERS_MSGS_MESSAGE_JOINTTRAJECTORYCONTROLLERSTATE_H
#define PR2_CONTROLLERS_MSGS_MESSAGE_JOINTTRAJECTORYCONTROLLERSTATE_H
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
#include "trajectory_msgs/JointTrajectoryPoint.h"
#include "trajectory_msgs/JointTrajectoryPoint.h"
#include "trajectory_msgs/JointTrajectoryPoint.h"

namespace pr2_controllers_msgs
{
template <class ContainerAllocator>
struct JointTrajectoryControllerState_ {
  typedef JointTrajectoryControllerState_<ContainerAllocator> Type;

  JointTrajectoryControllerState_()
  : header()
  , joint_names()
  , desired()
  , actual()
  , error()
  {
  }

  JointTrajectoryControllerState_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , joint_names(_alloc)
  , desired(_alloc)
  , actual(_alloc)
  , error(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  joint_names;

  typedef  ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator>  _desired_type;
   ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator>  desired;

  typedef  ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator>  _actual_type;
   ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator>  actual;

  typedef  ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator>  _error_type;
   ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator>  error;


  ROS_DEPRECATED uint32_t get_joint_names_size() const { return (uint32_t)joint_names.size(); }
  ROS_DEPRECATED void set_joint_names_size(uint32_t size) { joint_names.resize((size_t)size); }
  ROS_DEPRECATED void get_joint_names_vec(std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other > & vec) const { vec = this->joint_names; }
  ROS_DEPRECATED void set_joint_names_vec(const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other > & vec) { this->joint_names = vec; }
private:
  static const char* __s_getDataType_() { return "pr2_controllers_msgs/JointTrajectoryControllerState"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "b11d532a92ee589417fdd76559eb1d9e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Header header\n\
string[] joint_names\n\
trajectory_msgs/JointTrajectoryPoint desired\n\
trajectory_msgs/JointTrajectoryPoint actual\n\
trajectory_msgs/JointTrajectoryPoint error  # Redundant, but useful\n\
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
================================================================================\n\
MSG: trajectory_msgs/JointTrajectoryPoint\n\
float64[] positions\n\
float64[] velocities\n\
float64[] accelerations\n\
duration time_from_start\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, joint_names);
    ros::serialization::serialize(stream, desired);
    ros::serialization::serialize(stream, actual);
    ros::serialization::serialize(stream, error);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, joint_names);
    ros::serialization::deserialize(stream, desired);
    ros::serialization::deserialize(stream, actual);
    ros::serialization::deserialize(stream, error);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(joint_names);
    size += ros::serialization::serializationLength(desired);
    size += ros::serialization::serializationLength(actual);
    size += ros::serialization::serializationLength(error);
    return size;
  }

  typedef boost::shared_ptr< ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct JointTrajectoryControllerState
typedef  ::pr2_controllers_msgs::JointTrajectoryControllerState_<std::allocator<void> > JointTrajectoryControllerState;

typedef boost::shared_ptr< ::pr2_controllers_msgs::JointTrajectoryControllerState> JointTrajectoryControllerStatePtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::JointTrajectoryControllerState const> JointTrajectoryControllerStateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace pr2_controllers_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b11d532a92ee589417fdd76559eb1d9e";
  }

  static const char* value(const  ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb11d532a92ee5894ULL;
  static const uint64_t static_value2 = 0x17fdd76559eb1d9eULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr2_controllers_msgs/JointTrajectoryControllerState";
  }

  static const char* value(const  ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
string[] joint_names\n\
trajectory_msgs/JointTrajectoryPoint desired\n\
trajectory_msgs/JointTrajectoryPoint actual\n\
trajectory_msgs/JointTrajectoryPoint error  # Redundant, but useful\n\
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
================================================================================\n\
MSG: trajectory_msgs/JointTrajectoryPoint\n\
float64[] positions\n\
float64[] velocities\n\
float64[] accelerations\n\
duration time_from_start\n\
";
  }

  static const char* value(const  ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.joint_names);
    stream.next(m.desired);
    stream.next(m.actual);
    stream.next(m.error);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct JointTrajectoryControllerState_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::pr2_controllers_msgs::JointTrajectoryControllerState_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "desired: ";
s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.desired);
    s << indent << "actual: ";
s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.actual);
    s << indent << "error: ";
s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectoryPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.error);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PR2_CONTROLLERS_MSGS_MESSAGE_JOINTTRAJECTORYCONTROLLERSTATE_H

