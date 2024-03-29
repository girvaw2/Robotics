/* Auto-generated by genmsg_cpp for file /home/billy/ros/stacks/dynamixel_motor/dynamixel_controllers/srv/SetSpeed.srv */
#ifndef DYNAMIXEL_CONTROLLERS_SERVICE_SETSPEED_H
#define DYNAMIXEL_CONTROLLERS_SERVICE_SETSPEED_H
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
struct SetSpeedRequest_ {
  typedef SetSpeedRequest_<ContainerAllocator> Type;

  SetSpeedRequest_()
  : speed(0.0)
  {
  }

  SetSpeedRequest_(const ContainerAllocator& _alloc)
  : speed(0.0)
  {
  }

  typedef double _speed_type;
  double speed;


private:
  static const char* __s_getDataType_() { return "dynamixel_controllers/SetSpeedRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "4641bb0523a3557209606d9bd91ce33a"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "4641bb0523a3557209606d9bd91ce33a"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "float64 speed\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, speed);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, speed);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(speed);
    return size;
  }

  typedef boost::shared_ptr< ::dynamixel_controllers::SetSpeedRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::SetSpeedRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetSpeedRequest
typedef  ::dynamixel_controllers::SetSpeedRequest_<std::allocator<void> > SetSpeedRequest;

typedef boost::shared_ptr< ::dynamixel_controllers::SetSpeedRequest> SetSpeedRequestPtr;
typedef boost::shared_ptr< ::dynamixel_controllers::SetSpeedRequest const> SetSpeedRequestConstPtr;


template <class ContainerAllocator>
struct SetSpeedResponse_ {
  typedef SetSpeedResponse_<ContainerAllocator> Type;

  SetSpeedResponse_()
  {
  }

  SetSpeedResponse_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "dynamixel_controllers/SetSpeedResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "4641bb0523a3557209606d9bd91ce33a"; }
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

  typedef boost::shared_ptr< ::dynamixel_controllers::SetSpeedResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::SetSpeedResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetSpeedResponse
typedef  ::dynamixel_controllers::SetSpeedResponse_<std::allocator<void> > SetSpeedResponse;

typedef boost::shared_ptr< ::dynamixel_controllers::SetSpeedResponse> SetSpeedResponsePtr;
typedef boost::shared_ptr< ::dynamixel_controllers::SetSpeedResponse const> SetSpeedResponseConstPtr;

struct SetSpeed
{

typedef SetSpeedRequest Request;
typedef SetSpeedResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct SetSpeed
} // namespace dynamixel_controllers

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::SetSpeedRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::SetSpeedRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::SetSpeedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4641bb0523a3557209606d9bd91ce33a";
  }

  static const char* value(const  ::dynamixel_controllers::SetSpeedRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4641bb0523a35572ULL;
  static const uint64_t static_value2 = 0x09606d9bd91ce33aULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::SetSpeedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/SetSpeedRequest";
  }

  static const char* value(const  ::dynamixel_controllers::SetSpeedRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::SetSpeedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 speed\n\
\n\
";
  }

  static const char* value(const  ::dynamixel_controllers::SetSpeedRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamixel_controllers::SetSpeedRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::SetSpeedResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamixel_controllers::SetSpeedResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::SetSpeedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::dynamixel_controllers::SetSpeedResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::SetSpeedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/SetSpeedResponse";
  }

  static const char* value(const  ::dynamixel_controllers::SetSpeedResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::SetSpeedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
";
  }

  static const char* value(const  ::dynamixel_controllers::SetSpeedResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamixel_controllers::SetSpeedResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::SetSpeedRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.speed);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetSpeedRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::SetSpeedResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetSpeedResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<dynamixel_controllers::SetSpeed> {
  static const char* value() 
  {
    return "4641bb0523a3557209606d9bd91ce33a";
  }

  static const char* value(const dynamixel_controllers::SetSpeed&) { return value(); } 
};

template<>
struct DataType<dynamixel_controllers::SetSpeed> {
  static const char* value() 
  {
    return "dynamixel_controllers/SetSpeed";
  }

  static const char* value(const dynamixel_controllers::SetSpeed&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<dynamixel_controllers::SetSpeedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4641bb0523a3557209606d9bd91ce33a";
  }

  static const char* value(const dynamixel_controllers::SetSpeedRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<dynamixel_controllers::SetSpeedRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/SetSpeed";
  }

  static const char* value(const dynamixel_controllers::SetSpeedRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<dynamixel_controllers::SetSpeedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4641bb0523a3557209606d9bd91ce33a";
  }

  static const char* value(const dynamixel_controllers::SetSpeedResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<dynamixel_controllers::SetSpeedResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/SetSpeed";
  }

  static const char* value(const dynamixel_controllers::SetSpeedResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // DYNAMIXEL_CONTROLLERS_SERVICE_SETSPEED_H

