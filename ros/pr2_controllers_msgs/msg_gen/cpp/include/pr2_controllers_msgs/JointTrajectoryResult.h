/* Auto-generated by genmsg_cpp for file /home/billy/ros/stacks/pr2_controllers_msgs/msg/JointTrajectoryResult.msg */
#ifndef PR2_CONTROLLERS_MSGS_MESSAGE_JOINTTRAJECTORYRESULT_H
#define PR2_CONTROLLERS_MSGS_MESSAGE_JOINTTRAJECTORYRESULT_H
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
struct JointTrajectoryResult_ {
  typedef JointTrajectoryResult_<ContainerAllocator> Type;

  JointTrajectoryResult_()
  {
  }

  JointTrajectoryResult_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "pr2_controllers_msgs/JointTrajectoryResult"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    return size;
  }

  typedef boost::shared_ptr< ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct JointTrajectoryResult
typedef  ::pr2_controllers_msgs::JointTrajectoryResult_<std::allocator<void> > JointTrajectoryResult;

typedef boost::shared_ptr< ::pr2_controllers_msgs::JointTrajectoryResult> JointTrajectoryResultPtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::JointTrajectoryResult const> JointTrajectoryResultConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace pr2_controllers_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr2_controllers_msgs/JointTrajectoryResult";
  }

  static const char* value(const  ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
";
  }

  static const char* value(const  ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct JointTrajectoryResult_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::pr2_controllers_msgs::JointTrajectoryResult_<ContainerAllocator> & v) 
  {
  }
};


} // namespace message_operations
} // namespace ros

#endif // PR2_CONTROLLERS_MSGS_MESSAGE_JOINTTRAJECTORYRESULT_H

