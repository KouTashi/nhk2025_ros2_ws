// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wit_msgs:msg/ImuGpsRaw.idl
// generated code does not contain a copyright notice

#ifndef WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__STRUCT_H_
#define WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'acc'
// Member 'gyro'
// Member 'rpy'
// Member 'mag'
// Member 'ps'
// Member 'quarternion'
// Member 'dop'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ImuGpsRaw in the package wit_msgs.
typedef struct wit_msgs__msg__ImuGpsRaw
{
  std_msgs__msg__Header header;
  double time;
  rosidl_runtime_c__double__Sequence acc;
  rosidl_runtime_c__double__Sequence gyro;
  rosidl_runtime_c__double__Sequence rpy;
  rosidl_runtime_c__double__Sequence mag;
  /// port state
  rosidl_runtime_c__uint16__Sequence ps;
  double temperature;
  double altitude;
  /// atmosphere pressure
  double ap;
  double latitude;
  double longtitude;
  /// gps height
  double gpsh;
  /// gps yaw
  double gpsy;
  /// gps velocity
  double gpsv;
  rosidl_runtime_c__double__Sequence quarternion;
  /// satelites number
  uint8_t sn;
  rosidl_runtime_c__double__Sequence dop;
} wit_msgs__msg__ImuGpsRaw;

// Struct for a sequence of wit_msgs__msg__ImuGpsRaw.
typedef struct wit_msgs__msg__ImuGpsRaw__Sequence
{
  wit_msgs__msg__ImuGpsRaw * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wit_msgs__msg__ImuGpsRaw__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__STRUCT_H_
