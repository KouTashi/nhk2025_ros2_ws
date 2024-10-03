// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wit_msgs:msg/ImuGpsRaw.idl
// generated code does not contain a copyright notice

#ifndef WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__STRUCT_HPP_
#define WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wit_msgs__msg__ImuGpsRaw __attribute__((deprecated))
#else
# define DEPRECATED__wit_msgs__msg__ImuGpsRaw __declspec(deprecated)
#endif

namespace wit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuGpsRaw_
{
  using Type = ImuGpsRaw_<ContainerAllocator>;

  explicit ImuGpsRaw_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
      this->temperature = 0.0;
      this->altitude = 0.0;
      this->ap = 0.0;
      this->latitude = 0.0;
      this->longtitude = 0.0;
      this->gpsh = 0.0;
      this->gpsy = 0.0;
      this->gpsv = 0.0;
      this->sn = 0;
    }
  }

  explicit ImuGpsRaw_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
      this->temperature = 0.0;
      this->altitude = 0.0;
      this->ap = 0.0;
      this->latitude = 0.0;
      this->longtitude = 0.0;
      this->gpsh = 0.0;
      this->gpsy = 0.0;
      this->gpsv = 0.0;
      this->sn = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _time_type =
    double;
  _time_type time;
  using _acc_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _acc_type acc;
  using _gyro_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _gyro_type gyro;
  using _rpy_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _rpy_type rpy;
  using _mag_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _mag_type mag;
  using _ps_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _ps_type ps;
  using _temperature_type =
    double;
  _temperature_type temperature;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _ap_type =
    double;
  _ap_type ap;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longtitude_type =
    double;
  _longtitude_type longtitude;
  using _gpsh_type =
    double;
  _gpsh_type gpsh;
  using _gpsy_type =
    double;
  _gpsy_type gpsy;
  using _gpsv_type =
    double;
  _gpsv_type gpsv;
  using _quarternion_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _quarternion_type quarternion;
  using _sn_type =
    uint8_t;
  _sn_type sn;
  using _dop_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _dop_type dop;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__acc(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->acc = _arg;
    return *this;
  }
  Type & set__gyro(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->gyro = _arg;
    return *this;
  }
  Type & set__rpy(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->rpy = _arg;
    return *this;
  }
  Type & set__mag(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->mag = _arg;
    return *this;
  }
  Type & set__ps(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->ps = _arg;
    return *this;
  }
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__ap(
    const double & _arg)
  {
    this->ap = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longtitude(
    const double & _arg)
  {
    this->longtitude = _arg;
    return *this;
  }
  Type & set__gpsh(
    const double & _arg)
  {
    this->gpsh = _arg;
    return *this;
  }
  Type & set__gpsy(
    const double & _arg)
  {
    this->gpsy = _arg;
    return *this;
  }
  Type & set__gpsv(
    const double & _arg)
  {
    this->gpsv = _arg;
    return *this;
  }
  Type & set__quarternion(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->quarternion = _arg;
    return *this;
  }
  Type & set__sn(
    const uint8_t & _arg)
  {
    this->sn = _arg;
    return *this;
  }
  Type & set__dop(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->dop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wit_msgs::msg::ImuGpsRaw_<ContainerAllocator> *;
  using ConstRawPtr =
    const wit_msgs::msg::ImuGpsRaw_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wit_msgs::msg::ImuGpsRaw_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wit_msgs::msg::ImuGpsRaw_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wit_msgs::msg::ImuGpsRaw_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wit_msgs::msg::ImuGpsRaw_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wit_msgs::msg::ImuGpsRaw_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wit_msgs::msg::ImuGpsRaw_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wit_msgs::msg::ImuGpsRaw_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wit_msgs::msg::ImuGpsRaw_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wit_msgs__msg__ImuGpsRaw
    std::shared_ptr<wit_msgs::msg::ImuGpsRaw_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wit_msgs__msg__ImuGpsRaw
    std::shared_ptr<wit_msgs::msg::ImuGpsRaw_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuGpsRaw_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->acc != other.acc) {
      return false;
    }
    if (this->gyro != other.gyro) {
      return false;
    }
    if (this->rpy != other.rpy) {
      return false;
    }
    if (this->mag != other.mag) {
      return false;
    }
    if (this->ps != other.ps) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->ap != other.ap) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longtitude != other.longtitude) {
      return false;
    }
    if (this->gpsh != other.gpsh) {
      return false;
    }
    if (this->gpsy != other.gpsy) {
      return false;
    }
    if (this->gpsv != other.gpsv) {
      return false;
    }
    if (this->quarternion != other.quarternion) {
      return false;
    }
    if (this->sn != other.sn) {
      return false;
    }
    if (this->dop != other.dop) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuGpsRaw_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuGpsRaw_

// alias to use template instance with default allocator
using ImuGpsRaw =
  wit_msgs::msg::ImuGpsRaw_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wit_msgs

#endif  // WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__STRUCT_HPP_
