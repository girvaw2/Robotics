/* Auto-generated by genmsg_cpp for file /home/billy/ros/stacks/pr2_controllers_msgs/srv/QueryCalibrationState.srv */
#ifndef PR2_CONTROLLERS_MSGS_SERVICE_QUERYCALIBRATIONSTATE_H
#define PR2_CONTROLLERS_MSGS_SERVICE_QUERYCALIBRATIONSTATE_H
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




namespace pr2_controllers_msgs
{
template <class ContainerAllocator>
struct QueryCalibrationStateRequest_ {
  typedef QueryCalibrationStateRequest_<ContainerAllocator> Type;

  QueryCalibrationStateRequest_()
  {
  }

  QueryCalibrationStateRequest_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "pr2_controllers_msgs/QueryCalibrationStateRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "28af3beedcb84986b8e470dc5470507d"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
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

  typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct QueryCalibrationStateRequest
typedef  ::pr2_controllers_msgs::QueryCalibrationStateRequest_<std::allocator<void> > QueryCalibrationStateRequest;

typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryCalibrationStateRequest> QueryCalibrationStateRequestPtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryCalibrationStateRequest const> QueryCalibrationStateRequestConstPtr;


template <class ContainerAllocator>
struct QueryCalibrationStateResponse_ {
  typedef QueryCalibrationStateResponse_<ContainerAllocator> Type;

  QueryCalibrationStateResponse_()
  : is_calibrated(false)
  {
  }

  QueryCalibrationStateResponse_(const ContainerAllocator& _alloc)
  : is_calibrated(false)
  {
  }

  typedef uint8_t _is_calibrated_type;
  uint8_t is_calibrated;


private:
  static const char* __s_getDataType_() { return "pr2_controllers_msgs/QueryCalibrationStateResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "28af3beedcb84986b8e470dc5470507d"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "28af3beedcb84986b8e470dc5470507d"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "bool is_calibrated\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, is_calibrated);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, is_calibrated);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(is_calibrated);
    return size;
  }

  typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct QueryCalibrationStateResponse
typedef  ::pr2_controllers_msgs::QueryCalibrationStateResponse_<std::allocator<void> > QueryCalibrationStateResponse;

typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryCalibrationStateResponse> QueryCalibrationStateResponsePtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryCalibrationStateResponse const> QueryCalibrationStateResponseConstPtr;

struct QueryCalibrationState
{

typedef QueryCalibrationStateRequest Request;
typedef QueryCalibrationStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct QueryCalibrationState
} // namespace pr2_controllers_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr2_controllers_msgs/QueryCalibrationStateRequest";
  }

  static const char* value(const  ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "28af3beedcb84986b8e470dc5470507d";
  }

  static const char* value(const  ::pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x28af3beedcb84986ULL;
  static const uint64_t static_value2 = 0xb8e470dc5470507dULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr2_controllers_msgs/QueryCalibrationStateResponse";
  }

  static const char* value(const  ::pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool is_calibrated\n\
\n\
";
  }

  static const char* value(const  ::pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct QueryCalibrationStateRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.is_calibrated);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct QueryCalibrationStateResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<pr2_controllers_msgs::QueryCalibrationState> {
  static const char* value() 
  {
    return "28af3beedcb84986b8e470dc5470507d";
  }

  static const char* value(const pr2_controllers_msgs::QueryCalibrationState&) { return value(); } 
};

template<>
struct DataType<pr2_controllers_msgs::QueryCalibrationState> {
  static const char* value() 
  {
    return "pr2_controllers_msgs/QueryCalibrationState";
  }

  static const char* value(const pr2_controllers_msgs::QueryCalibrationState&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "28af3beedcb84986b8e470dc5470507d";
  }

  static const char* value(const pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr2_controllers_msgs/QueryCalibrationState";
  }

  static const char* value(const pr2_controllers_msgs::QueryCalibrationStateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "28af3beedcb84986b8e470dc5470507d";
  }

  static const char* value(const pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr2_controllers_msgs/QueryCalibrationState";
  }

  static const char* value(const pr2_controllers_msgs::QueryCalibrationStateResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // PR2_CONTROLLERS_MSGS_SERVICE_QUERYCALIBRATIONSTATE_H

