// Generated by gencpp from file state_estimator/Landmark.msg
// DO NOT EDIT!


#ifndef STATE_ESTIMATOR_MESSAGE_LANDMARK_H
#define STATE_ESTIMATOR_MESSAGE_LANDMARK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace state_estimator
{
template <class ContainerAllocator>
struct Landmark_
{
  typedef Landmark_<ContainerAllocator> Type;

  Landmark_()
    : x(0.0)
    , y(0.0)  {
    }
  Landmark_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::state_estimator::Landmark_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::state_estimator::Landmark_<ContainerAllocator> const> ConstPtr;

}; // struct Landmark_

typedef ::state_estimator::Landmark_<std::allocator<void> > Landmark;

typedef boost::shared_ptr< ::state_estimator::Landmark > LandmarkPtr;
typedef boost::shared_ptr< ::state_estimator::Landmark const> LandmarkConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::state_estimator::Landmark_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::state_estimator::Landmark_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace state_estimator

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'state_estimator': ['/home/abhinandan/ros_wkspace_asgn5/src/state_estimator/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::state_estimator::Landmark_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::state_estimator::Landmark_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::state_estimator::Landmark_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::state_estimator::Landmark_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::state_estimator::Landmark_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::state_estimator::Landmark_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::state_estimator::Landmark_<ContainerAllocator> >
{
  static const char* value()
  {
    return "209f516d3eb691f0663e25cb750d67c1";
  }

  static const char* value(const ::state_estimator::Landmark_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x209f516d3eb691f0ULL;
  static const uint64_t static_value2 = 0x663e25cb750d67c1ULL;
};

template<class ContainerAllocator>
struct DataType< ::state_estimator::Landmark_<ContainerAllocator> >
{
  static const char* value()
  {
    return "state_estimator/Landmark";
  }

  static const char* value(const ::state_estimator::Landmark_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::state_estimator::Landmark_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The x coordinate of this landmark\n\
float64 x\n\
\n\
# The y coordinate of this landmark\n\
float64 y\n\
\n\
";
  }

  static const char* value(const ::state_estimator::Landmark_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::state_estimator::Landmark_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Landmark_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::state_estimator::Landmark_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::state_estimator::Landmark_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STATE_ESTIMATOR_MESSAGE_LANDMARK_H
