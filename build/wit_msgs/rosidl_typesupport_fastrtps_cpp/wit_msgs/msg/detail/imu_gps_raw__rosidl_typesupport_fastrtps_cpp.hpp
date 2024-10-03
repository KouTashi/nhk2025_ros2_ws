// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from wit_msgs:msg/ImuGpsRaw.idl
// generated code does not contain a copyright notice

#ifndef WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "wit_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "wit_msgs/msg/detail/imu_gps_raw__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace wit_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wit_msgs
cdr_serialize(
  const wit_msgs::msg::ImuGpsRaw & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wit_msgs::msg::ImuGpsRaw & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wit_msgs
get_serialized_size(
  const wit_msgs::msg::ImuGpsRaw & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wit_msgs
max_serialized_size_ImuGpsRaw(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace wit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wit_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wit_msgs, msg, ImuGpsRaw)();

#ifdef __cplusplus
}
#endif

#endif  // WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
