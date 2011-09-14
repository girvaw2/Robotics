/* Auto-generated by genmsg_cpp for file /home/billy/ros/stacks/pr2_controllers_msgs/msg/JointTrajectoryGoal.msg */
#ifndef PR2_CONTROLLERS_MSGS_MESSAGE_JOINTTRAJECTORYGOAL_H
#define PR2_CONTROLLERS_MSGS_MESSAGE_JOINTTRAJECTORYGOAL_H
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

#include "trajectory_msgs/JointTrajectory.h"

namespace pr2_controllers_msgs
{
template <class ContainerAllocator>
struct JointTrajectoryGoal_ {
  typedef JointTrajectoryGoal_<ContainerAllocator> Type;

  JointTrajectoryGoal_()
  : trajectory()
  {
  }

  JointTrajectoryGoal_(const ContainerAllocator& _alloc)
  : trajectory(_alloc)
  {
  }

  typedef  ::trajectory_msgs::JointTrajectory_<ContainerAllocator>  _trajectory_type;
   ::trajectory_msgs::JointTrajectory_<ContainerAllocator>  trajectory;


private:
  static const char* __s_getDataType_() { return "pr2_controllers_msgs/JointTrajectoryGoal"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "48a668811b715b51af6b3383511ae27f"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
trajectory_msgs/JointTrajectory trajectory\n\
\n\
================================================================================\n\
MSG: trajectory_msgs/JointTrajectory\n\
Header header\n\
string[] joint_names\n\
JointTrajectoryPoint[] points\n\
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
    ros::serialization::serialize(stream, trajectory);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, trajectory);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(trajectory);
    return size;
  }

  typedef boost::shared_ptr< ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct JointTrajectoryGoal
typedef  ::pr2_controllers_msgs::JointTrajectoryGoal_<std::allocator<void> > JointTrajectoryGoal;

typedef boost::shared_ptr< ::pr2_controllers_msgs::JointTrajectoryGoal> JointTrajectoryGoalPtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::JointTrajectoryGoal const> JointTrajectoryGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace pr2_controllers_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "48a668811b715b51af6b3383511ae27f";
  }

  static const char* value(const  ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x48a668811b715b51ULL;
  static const uint64_t static_value2 = 0xaf6b3383511ae27fULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr2_controllers_msgs/JointTrajectoryGoal";
  }

  static const char* value(const  ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
trajectory_msgs/JointTrajectory trajectory\n\
\n\
================================================================================\n\
MSG: trajectory_msgs/JointTrajectory\n\
Header header\n\
string[] joint_names\n\
JointTrajectoryPoint[] points\n\
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

  static const char* value(const  ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.trajectory);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct JointTrajectoryGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::pr2_controllers_msgs::JointTrajectoryGoal_<ContainerAllocator> & v) 
  {
    s << indent << "trajectory: ";
s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.trajectory);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PR2_CONTROLLERS_MSGS_MESSAGE_JOINTTRAJECTORYGOAL_H

