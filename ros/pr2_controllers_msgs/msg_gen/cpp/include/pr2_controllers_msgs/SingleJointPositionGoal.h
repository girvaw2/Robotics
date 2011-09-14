/* Auto-generated by genmsg_cpp for file /home/billy/ros/stacks/pr2_controllers_msgs/msg/SingleJointPositionGoal.msg */
#ifndef PR2_CONTROLLERS_MSGS_MESSAGE_SINGLEJOINTPOSITIONGOAL_H
#define PR2_CONTROLLERS_MSGS_MESSAGE_SINGLEJOINTPOSITIONGOAL_H
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


namespace pr2_controllers_msgs
{
template <class ContainerAllocator>
struct SingleJointPositionGoal_ {
  typedef SingleJointPositionGoal_<ContainerAllocator> Type;

  SingleJointPositionGoal_()
  : position(0.0)
  , min_duration()
  , max_velocity(0.0)
  {
  }

  SingleJointPositionGoal_(const ContainerAllocator& _alloc)
  : position(0.0)
  , min_duration()
  , max_velocity(0.0)
  {
  }

  typedef double _position_type;
  double position;

  typedef ros::Duration _min_duration_type;
  ros::Duration min_duration;

  typedef double _max_velocity_type;
  double max_velocity;


private:
  static const char* __s_getDataType_() { return "pr2_controllers_msgs/SingleJointPositionGoal"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "fbaaa562a23a013fd5053e5f72cbb35c"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
float64 position\n\
duration min_duration\n\
float64 max_velocity\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, position);
    ros::serialization::serialize(stream, min_duration);
    ros::serialization::serialize(stream, max_velocity);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, position);
    ros::serialization::deserialize(stream, min_duration);
    ros::serialization::deserialize(stream, max_velocity);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(position);
    size += ros::serialization::serializationLength(min_duration);
    size += ros::serialization::serializationLength(max_velocity);
    return size;
  }

  typedef boost::shared_ptr< ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SingleJointPositionGoal
typedef  ::pr2_controllers_msgs::SingleJointPositionGoal_<std::allocator<void> > SingleJointPositionGoal;

typedef boost::shared_ptr< ::pr2_controllers_msgs::SingleJointPositionGoal> SingleJointPositionGoalPtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::SingleJointPositionGoal const> SingleJointPositionGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace pr2_controllers_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fbaaa562a23a013fd5053e5f72cbb35c";
  }

  static const char* value(const  ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xfbaaa562a23a013fULL;
  static const uint64_t static_value2 = 0xd5053e5f72cbb35cULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr2_controllers_msgs/SingleJointPositionGoal";
  }

  static const char* value(const  ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
float64 position\n\
duration min_duration\n\
float64 max_velocity\n\
\n\
";
  }

  static const char* value(const  ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.position);
    stream.next(m.min_duration);
    stream.next(m.max_velocity);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SingleJointPositionGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::pr2_controllers_msgs::SingleJointPositionGoal_<ContainerAllocator> & v) 
  {
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
    s << indent << "min_duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.min_duration);
    s << indent << "max_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.max_velocity);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PR2_CONTROLLERS_MSGS_MESSAGE_SINGLEJOINTPOSITIONGOAL_H

