// Generated by gencpp from file kocheng/override_value.msg
// DO NOT EDIT!


#ifndef KOCHENG_MESSAGE_OVERRIDE_VALUE_H
#define KOCHENG_MESSAGE_OVERRIDE_VALUE_H


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
struct override_value_
{
  typedef override_value_<ContainerAllocator> Type;

  override_value_()
    : steering(0)
    , throttle(0)
    , camera_servo(0)  {
    }
  override_value_(const ContainerAllocator& _alloc)
    : steering(0)
    , throttle(0)
    , camera_servo(0)  {
  (void)_alloc;
    }



   typedef int16_t _steering_type;
  _steering_type steering;

   typedef int16_t _throttle_type;
  _throttle_type throttle;

   typedef int16_t _camera_servo_type;
  _camera_servo_type camera_servo;





  typedef boost::shared_ptr< ::kocheng::override_value_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kocheng::override_value_<ContainerAllocator> const> ConstPtr;

}; // struct override_value_

typedef ::kocheng::override_value_<std::allocator<void> > override_value;

typedef boost::shared_ptr< ::kocheng::override_value > override_valuePtr;
typedef boost::shared_ptr< ::kocheng::override_value const> override_valueConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kocheng::override_value_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kocheng::override_value_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::kocheng::override_value_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kocheng::override_value_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kocheng::override_value_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kocheng::override_value_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kocheng::override_value_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kocheng::override_value_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kocheng::override_value_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8b817f7d8452ec829c7dc50e436e6bd8";
  }

  static const char* value(const ::kocheng::override_value_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8b817f7d8452ec82ULL;
  static const uint64_t static_value2 = 0x9c7dc50e436e6bd8ULL;
};

template<class ContainerAllocator>
struct DataType< ::kocheng::override_value_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kocheng/override_value";
  }

  static const char* value(const ::kocheng::override_value_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kocheng::override_value_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 steering\n\
int16 throttle\n\
int16 camera_servo\n\
";
  }

  static const char* value(const ::kocheng::override_value_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kocheng::override_value_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.steering);
      stream.next(m.throttle);
      stream.next(m.camera_servo);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct override_value_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kocheng::override_value_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kocheng::override_value_<ContainerAllocator>& v)
  {
    s << indent << "steering: ";
    Printer<int16_t>::stream(s, indent + "  ", v.steering);
    s << indent << "throttle: ";
    Printer<int16_t>::stream(s, indent + "  ", v.throttle);
    s << indent << "camera_servo: ";
    Printer<int16_t>::stream(s, indent + "  ", v.camera_servo);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KOCHENG_MESSAGE_OVERRIDE_VALUE_H
