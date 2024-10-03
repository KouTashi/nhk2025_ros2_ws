// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wit_msgs:msg/ImuGpsRaw.idl
// generated code does not contain a copyright notice

#ifndef WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__BUILDER_HPP_
#define WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wit_msgs/msg/detail/imu_gps_raw__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wit_msgs
{

namespace msg
{

namespace builder
{

class Init_ImuGpsRaw_dop
{
public:
  explicit Init_ImuGpsRaw_dop(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  ::wit_msgs::msg::ImuGpsRaw dop(::wit_msgs::msg::ImuGpsRaw::_dop_type arg)
  {
    msg_.dop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_sn
{
public:
  explicit Init_ImuGpsRaw_sn(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_dop sn(::wit_msgs::msg::ImuGpsRaw::_sn_type arg)
  {
    msg_.sn = std::move(arg);
    return Init_ImuGpsRaw_dop(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_quarternion
{
public:
  explicit Init_ImuGpsRaw_quarternion(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_sn quarternion(::wit_msgs::msg::ImuGpsRaw::_quarternion_type arg)
  {
    msg_.quarternion = std::move(arg);
    return Init_ImuGpsRaw_sn(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_gpsv
{
public:
  explicit Init_ImuGpsRaw_gpsv(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_quarternion gpsv(::wit_msgs::msg::ImuGpsRaw::_gpsv_type arg)
  {
    msg_.gpsv = std::move(arg);
    return Init_ImuGpsRaw_quarternion(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_gpsy
{
public:
  explicit Init_ImuGpsRaw_gpsy(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_gpsv gpsy(::wit_msgs::msg::ImuGpsRaw::_gpsy_type arg)
  {
    msg_.gpsy = std::move(arg);
    return Init_ImuGpsRaw_gpsv(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_gpsh
{
public:
  explicit Init_ImuGpsRaw_gpsh(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_gpsy gpsh(::wit_msgs::msg::ImuGpsRaw::_gpsh_type arg)
  {
    msg_.gpsh = std::move(arg);
    return Init_ImuGpsRaw_gpsy(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_longtitude
{
public:
  explicit Init_ImuGpsRaw_longtitude(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_gpsh longtitude(::wit_msgs::msg::ImuGpsRaw::_longtitude_type arg)
  {
    msg_.longtitude = std::move(arg);
    return Init_ImuGpsRaw_gpsh(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_latitude
{
public:
  explicit Init_ImuGpsRaw_latitude(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_longtitude latitude(::wit_msgs::msg::ImuGpsRaw::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_ImuGpsRaw_longtitude(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_ap
{
public:
  explicit Init_ImuGpsRaw_ap(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_latitude ap(::wit_msgs::msg::ImuGpsRaw::_ap_type arg)
  {
    msg_.ap = std::move(arg);
    return Init_ImuGpsRaw_latitude(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_altitude
{
public:
  explicit Init_ImuGpsRaw_altitude(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_ap altitude(::wit_msgs::msg::ImuGpsRaw::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_ImuGpsRaw_ap(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_temperature
{
public:
  explicit Init_ImuGpsRaw_temperature(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_altitude temperature(::wit_msgs::msg::ImuGpsRaw::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_ImuGpsRaw_altitude(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_ps
{
public:
  explicit Init_ImuGpsRaw_ps(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_temperature ps(::wit_msgs::msg::ImuGpsRaw::_ps_type arg)
  {
    msg_.ps = std::move(arg);
    return Init_ImuGpsRaw_temperature(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_mag
{
public:
  explicit Init_ImuGpsRaw_mag(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_ps mag(::wit_msgs::msg::ImuGpsRaw::_mag_type arg)
  {
    msg_.mag = std::move(arg);
    return Init_ImuGpsRaw_ps(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_rpy
{
public:
  explicit Init_ImuGpsRaw_rpy(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_mag rpy(::wit_msgs::msg::ImuGpsRaw::_rpy_type arg)
  {
    msg_.rpy = std::move(arg);
    return Init_ImuGpsRaw_mag(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_gyro
{
public:
  explicit Init_ImuGpsRaw_gyro(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_rpy gyro(::wit_msgs::msg::ImuGpsRaw::_gyro_type arg)
  {
    msg_.gyro = std::move(arg);
    return Init_ImuGpsRaw_rpy(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_acc
{
public:
  explicit Init_ImuGpsRaw_acc(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_gyro acc(::wit_msgs::msg::ImuGpsRaw::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_ImuGpsRaw_gyro(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_time
{
public:
  explicit Init_ImuGpsRaw_time(::wit_msgs::msg::ImuGpsRaw & msg)
  : msg_(msg)
  {}
  Init_ImuGpsRaw_acc time(::wit_msgs::msg::ImuGpsRaw::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_ImuGpsRaw_acc(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

class Init_ImuGpsRaw_header
{
public:
  Init_ImuGpsRaw_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuGpsRaw_time header(::wit_msgs::msg::ImuGpsRaw::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ImuGpsRaw_time(msg_);
  }

private:
  ::wit_msgs::msg::ImuGpsRaw msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wit_msgs::msg::ImuGpsRaw>()
{
  return wit_msgs::msg::builder::Init_ImuGpsRaw_header();
}

}  // namespace wit_msgs

#endif  // WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__BUILDER_HPP_
