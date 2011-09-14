/* Auto-generated by genmsg_cpp for file /home/billy/ros/stacks/pr2_controllers_msgs/srv/QueryTrajectoryState.srv */
#ifndef PR2_CONTROLLERS_MSGS_SERVICE_QUERYTRAJECTORYSTATE_H
#define PR2_CONTROLLERS_MSGS_SERVICE_QUERYTRAJECTORYSTATE_H
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
struct QueryTrajectoryStateRequest_ {
  typedef QueryTrajectoryStateRequest_<ContainerAllocator> Type;

  QueryTrajectoryStateRequest_()
  : time()
  {
  }

  QueryTrajectoryStateRequest_(const ContainerAllocator& _alloc)
  : time()
  {
  }

  typedef ros::Time _time_type;
  ros::Time time;


private:
  static const char* __s_getDataType_() { return "pr2_controllers_msgs/QueryTrajectoryStateRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "556a4fb76023a469987922359d08a844"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "ec93cdecbd8062d761aa52b7c90cd44b"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "time time\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, time);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, time);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(time);
    return size;
  }

  typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct QueryTrajectoryStateRequest
typedef  ::pr2_controllers_msgs::QueryTrajectoryStateRequest_<std::allocator<void> > QueryTrajectoryStateRequest;

typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryTrajectoryStateRequest> QueryTrajectoryStateRequestPtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryTrajectoryStateRequest const> QueryTrajectoryStateRequestConstPtr;


template <class ContainerAllocator>
struct QueryTrajectoryStateResponse_ {
  typedef QueryTrajectoryStateResponse_<ContainerAllocator> Type;

  QueryTrajectoryStateResponse_()
  : name()
  , position()
  , velocity()
  , acceleration()
  {
  }

  QueryTrajectoryStateResponse_(const ContainerAllocator& _alloc)
  : name(_alloc)
  , position(_alloc)
  , velocity(_alloc)
  , acceleration(_alloc)
  {
  }

  typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _name_type;
  std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  name;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _position_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  position;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _velocity_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  velocity;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _acceleration_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  acceleration;


  ROS_DEPRECATED uint32_t get_name_size() const { return (uint32_t)name.size(); }
  ROS_DEPRECATED void set_name_size(uint32_t size) { name.resize((size_t)size); }
  ROS_DEPRECATED void get_name_vec(std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other > & vec) const { vec = this->name; }
  ROS_DEPRECATED void set_name_vec(const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other > & vec) { this->name = vec; }
  ROS_DEPRECATED uint32_t get_position_size() const { return (uint32_t)position.size(); }
  ROS_DEPRECATED void set_position_size(uint32_t size) { position.resize((size_t)size); }
  ROS_DEPRECATED void get_position_vec(std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) const { vec = this->position; }
  ROS_DEPRECATED void set_position_vec(const std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) { this->position = vec; }
  ROS_DEPRECATED uint32_t get_velocity_size() const { return (uint32_t)velocity.size(); }
  ROS_DEPRECATED void set_velocity_size(uint32_t size) { velocity.resize((size_t)size); }
  ROS_DEPRECATED void get_velocity_vec(std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) const { vec = this->velocity; }
  ROS_DEPRECATED void set_velocity_vec(const std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) { this->velocity = vec; }
  ROS_DEPRECATED uint32_t get_acceleration_size() const { return (uint32_t)acceleration.size(); }
  ROS_DEPRECATED void set_acceleration_size(uint32_t size) { acceleration.resize((size_t)size); }
  ROS_DEPRECATED void get_acceleration_vec(std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) const { vec = this->acceleration; }
  ROS_DEPRECATED void set_acceleration_vec(const std::vector<double, typename ContainerAllocator::template rebind<double>::other > & vec) { this->acceleration = vec; }
private:
  static const char* __s_getDataType_() { return "pr2_controllers_msgs/QueryTrajectoryStateResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "1f1a6554ad060f44d013e71868403c1a"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "ec93cdecbd8062d761aa52b7c90cd44b"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "string[] name\n\
float64[] position\n\
float64[] velocity\n\
float64[] acceleration\n\
\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, name);
    ros::serialization::serialize(stream, position);
    ros::serialization::serialize(stream, velocity);
    ros::serialization::serialize(stream, acceleration);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, name);
    ros::serialization::deserialize(stream, position);
    ros::serialization::deserialize(stream, velocity);
    ros::serialization::deserialize(stream, acceleration);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(name);
    size += ros::serialization::serializationLength(position);
    size += ros::serialization::serializationLength(velocity);
    size += ros::serialization::serializationLength(acceleration);
    return size;
  }

  typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct QueryTrajectoryStateResponse
typedef  ::pr2_controllers_msgs::QueryTrajectoryStateResponse_<std::allocator<void> > QueryTrajectoryStateResponse;

typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryTrajectoryStateResponse> QueryTrajectoryStateResponsePtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::QueryTrajectoryStateResponse const> QueryTrajectoryStateResponseConstPtr;

struct QueryTrajectoryState
{

typedef QueryTrajectoryStateRequest Request;
typedef QueryTrajectoryStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct QueryTrajectoryState
} // namespace pr2_controllers_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "556a4fb76023a469987922359d08a844";
  }

  static const char* value(const  ::pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x556a4fb76023a469ULL;
  static const uint64_t static_value2 = 0x987922359d08a844ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr2_controllers_msgs/QueryTrajectoryStateRequest";
  }

  static const char* value(const  ::pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "time time\n\
\n\
";
  }

  static const char* value(const  ::pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1f1a6554ad060f44d013e71868403c1a";
  }

  static const char* value(const  ::pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x1f1a6554ad060f44ULL;
  static const uint64_t static_value2 = 0xd013e71868403c1aULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr2_controllers_msgs/QueryTrajectoryStateResponse";
  }

  static const char* value(const  ::pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string[] name\n\
float64[] position\n\
float64[] velocity\n\
float64[] acceleration\n\
\n\
\n\
";
  }

  static const char* value(const  ::pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.time);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct QueryTrajectoryStateRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.name);
    stream.next(m.position);
    stream.next(m.velocity);
    stream.next(m.acceleration);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct QueryTrajectoryStateResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<pr2_controllers_msgs::QueryTrajectoryState> {
  static const char* value() 
  {
    return "ec93cdecbd8062d761aa52b7c90cd44b";
  }

  static const char* value(const pr2_controllers_msgs::QueryTrajectoryState&) { return value(); } 
};

template<>
struct DataType<pr2_controllers_msgs::QueryTrajectoryState> {
  static const char* value() 
  {
    return "pr2_controllers_msgs/QueryTrajectoryState";
  }

  static const char* value(const pr2_controllers_msgs::QueryTrajectoryState&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ec93cdecbd8062d761aa52b7c90cd44b";
  }

  static const char* value(const pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr2_controllers_msgs/QueryTrajectoryState";
  }

  static const char* value(const pr2_controllers_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ec93cdecbd8062d761aa52b7c90cd44b";
  }

  static const char* value(const pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr2_controllers_msgs/QueryTrajectoryState";
  }

  static const char* value(const pr2_controllers_msgs::QueryTrajectoryStateResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // PR2_CONTROLLERS_MSGS_SERVICE_QUERYTRAJECTORYSTATE_H
