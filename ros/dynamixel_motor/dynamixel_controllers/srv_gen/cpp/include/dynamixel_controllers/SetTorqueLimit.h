/* Auto-generated by genmsg_cpp for file /home/billy/ros/stacks/dynamixel_motor/dynamixel_controllers/srv/SetTorqueLimit.srv */
#ifndef DYNAMIXEL_CONTROLLERS_SERVICE_SETTORQUELIMIT_H
#define DYNAMIXEL_CONTROLLERS_SERVICE_SETTORQUELIMIT_H
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

#include "ros/service_traits.h"




namespace dynamixel_controllers
{
template <class ContainerAllocator>
struct SetTorqueLimitRequest_ {
  typedef SetTorqueLimitRequest_<ContainerAllocator> Type;

  SetTorqueLimitRequest_()
  : torque_limit(0.0)
  {
  }

  SetTorqueLimitRequest_(const ContainerAllocator& _alloc)
  : torque_limit(0.0)
  {
  }

  typedef double _torque_limit_type;
  double torque_limit;


private:
  static const char* __s_getDataType_() { return "dynamixel_controllers/SetTorqueLimitRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "7ac67170532bb79d95db2a425915bbd6"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "7ac67170532bb79d95db2a425915bbd6"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
\n\
float64 torque_limit\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, torque_limit);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, torque_limit);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(torque_limit);
    return size;
  }

  typedef boost::shared_ptr< ::dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetTorqueLimitRequest
typedef  ::dynamixel_controllers::SetTorqueLimitRequest_<std::allocator<void> > SetTorqueLimitRequest;

typedef boost::shared_ptr< ::dynamixel_controllers::SetTorqueLimitRequest> SetTorqueLimitRequestPtr;
typedef boost::shared_ptr< ::dynamixel_controllers::SetTorqueLimitRequest const> SetTorqueLimitRequestConstPtr;


template <class ContainerAllocator>
struct SetTorqueLimitResponse_ {
  typedef SetTorqueLimitResponse_<ContainerAllocator> Type;

  SetTorqueLimitResponse_()
  {
  }

  SetTorqueLimitResponse_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "dynamixel_controllers/SetTorqueLimitResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "7ac67170532bb79d95db2a425915bbd6"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
\n\
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

  typedef boost::shared_ptr< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetTorqueLimitResponse
typedef  ::dynamixel_controllers::SetTorqueLimitResponse_<std::allocator<void> > SetTorqueLimitResponse;

typedef boost::shared_ptr< ::dynamixel_controllers::SetTorqueLimitResponse> SetTorqueLimitResponsePtr;
typedef boost::shared_ptr< ::dynamixel_controllers::SetTorqueLimitResponse const> SetTorqueLimitResponseConstPtr;

struct SetTorqueLimit
{

typedef SetTorqueLimitRequest Request;
typedef SetTorqueLimitResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct SetTorqueLimit
} // namespace dynamixel_controllers

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7ac67170532bb79d95db2a425915bbd6";
  }

  static const char* value(const  ::dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x7ac67170532bb79dULL;
  static const uint64_t static_value2 = 0x95db2a425915bbd6ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/SetTorqueLimitRequest";
  }

  static const char* value(const  ::dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
float64 torque_limit\n\
\n\
";
  }

  static const char* value(const  ::dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/SetTorqueLimitResponse";
  }

  static const char* value(const  ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
";
  }

  static const char* value(const  ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.torque_limit);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetTorqueLimitRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetTorqueLimitResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<dynamixel_controllers::SetTorqueLimit> {
  static const char* value() 
  {
    return "7ac67170532bb79d95db2a425915bbd6";
  }

  static const char* value(const dynamixel_controllers::SetTorqueLimit&) { return value(); } 
};

template<>
struct DataType<dynamixel_controllers::SetTorqueLimit> {
  static const char* value() 
  {
    return "dynamixel_controllers/SetTorqueLimit";
  }

  static const char* value(const dynamixel_controllers::SetTorqueLimit&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7ac67170532bb79d95db2a425915bbd6";
  }

  static const char* value(const dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/SetTorqueLimit";
  }

  static const char* value(const dynamixel_controllers::SetTorqueLimitRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7ac67170532bb79d95db2a425915bbd6";
  }

  static const char* value(const dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/SetTorqueLimit";
  }

  static const char* value(const dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // DYNAMIXEL_CONTROLLERS_SERVICE_SETTORQUELIMIT_H
