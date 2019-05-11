// Generated by gencpp from file kinect/MsgKinect.msg
// DO NOT EDIT!


#ifndef KINECT_MESSAGE_MSGKINECT_H
#define KINECT_MESSAGE_MSGKINECT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kinect
{
template <class ContainerAllocator>
struct MsgKinect_
{
  typedef MsgKinect_<ContainerAllocator> Type;

  MsgKinect_()
    : data(0)  {
    }
  MsgKinect_(const ContainerAllocator& _alloc)
    : data(0)  {
  (void)_alloc;
    }



   typedef int32_t _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::kinect::MsgKinect_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kinect::MsgKinect_<ContainerAllocator> const> ConstPtr;

}; // struct MsgKinect_

typedef ::kinect::MsgKinect_<std::allocator<void> > MsgKinect;

typedef boost::shared_ptr< ::kinect::MsgKinect > MsgKinectPtr;
typedef boost::shared_ptr< ::kinect::MsgKinect const> MsgKinectConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kinect::MsgKinect_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kinect::MsgKinect_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kinect

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'kinect': ['/home/cyberc3/catkin_ws/src/kinect/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kinect::MsgKinect_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kinect::MsgKinect_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kinect::MsgKinect_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kinect::MsgKinect_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kinect::MsgKinect_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kinect::MsgKinect_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kinect::MsgKinect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da5909fbe378aeaf85e547e830cc1bb7";
  }

  static const char* value(const ::kinect::MsgKinect_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda5909fbe378aeafULL;
  static const uint64_t static_value2 = 0x85e547e830cc1bb7ULL;
};

template<class ContainerAllocator>
struct DataType< ::kinect::MsgKinect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kinect/MsgKinect";
  }

  static const char* value(const ::kinect::MsgKinect_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kinect::MsgKinect_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 data\n\
";
  }

  static const char* value(const ::kinect::MsgKinect_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kinect::MsgKinect_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MsgKinect_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kinect::MsgKinect_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kinect::MsgKinect_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<int32_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KINECT_MESSAGE_MSGKINECT_H