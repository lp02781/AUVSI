// Generated by gencpp from file kocheng/rc_number.msg
// DO NOT EDIT!


#ifndef KOCHENG_MESSAGE_RC_NUMBER_H
#define KOCHENG_MESSAGE_RC_NUMBER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kocheng
{
template <class ContainerAllocator>
struct rc_number_
{
  typedef rc_number_<ContainerAllocator> Type;

  rc_number_()
    : override_status(false)
    , rc_number(0)  {
    }
  rc_number_(const ContainerAllocator& _alloc)
    : override_status(false)
    , rc_number(0)  {
  (void)_alloc;
    }



   typedef uint8_t _override_status_type;
  _override_status_type override_status;

   typedef int16_t _rc_number_type;
  _rc_number_type rc_number;





  typedef boost::shared_ptr< ::kocheng::rc_number_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kocheng::rc_number_<ContainerAllocator> const> ConstPtr;

}; // struct rc_number_

typedef ::kocheng::rc_number_<std::allocator<void> > rc_number;

typedef boost::shared_ptr< ::kocheng::rc_number > rc_numberPtr;
typedef boost::shared_ptr< ::kocheng::rc_number const> rc_numberConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kocheng::rc_number_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kocheng::rc_number_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kocheng

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'mavros_msgs': ['/opt/ros/kinetic/share/mavros_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'kocheng': ['/home/mfikih15/Documents/AUVSI/src/kocheng/msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kocheng::rc_number_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kocheng::rc_number_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kocheng::rc_number_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kocheng::rc_number_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kocheng::rc_number_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kocheng::rc_number_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kocheng::rc_number_<ContainerAllocator> >
{
  static const char* value()
  {
    return "245976b4840f71d588f1be6b4dde93f8";
  }

  static const char* value(const ::kocheng::rc_number_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x245976b4840f71d5ULL;
  static const uint64_t static_value2 = 0x88f1be6b4dde93f8ULL;
};

template<class ContainerAllocator>
struct DataType< ::kocheng::rc_number_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kocheng/rc_number";
  }

  static const char* value(const ::kocheng::rc_number_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kocheng::rc_number_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool override_status\n\
int16 rc_number\n\
";
  }

  static const char* value(const ::kocheng::rc_number_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kocheng::rc_number_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.override_status);
      stream.next(m.rc_number);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct rc_number_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kocheng::rc_number_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kocheng::rc_number_<ContainerAllocator>& v)
  {
    s << indent << "override_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.override_status);
    s << indent << "rc_number: ";
    Printer<int16_t>::stream(s, indent + "  ", v.rc_number);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KOCHENG_MESSAGE_RC_NUMBER_H
