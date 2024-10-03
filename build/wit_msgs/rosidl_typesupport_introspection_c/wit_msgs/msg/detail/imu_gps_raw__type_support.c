// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wit_msgs:msg/ImuGpsRaw.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wit_msgs/msg/detail/imu_gps_raw__rosidl_typesupport_introspection_c.h"
#include "wit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wit_msgs/msg/detail/imu_gps_raw__functions.h"
#include "wit_msgs/msg/detail/imu_gps_raw__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `acc`
// Member `gyro`
// Member `rpy`
// Member `mag`
// Member `ps`
// Member `quarternion`
// Member `dop`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__ImuGpsRaw_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wit_msgs__msg__ImuGpsRaw__init(message_memory);
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__ImuGpsRaw_fini_function(void * message_memory)
{
  wit_msgs__msg__ImuGpsRaw__fini(message_memory);
}

size_t wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__size_function__ImuGpsRaw__acc(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__acc(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__acc(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__fetch_function__ImuGpsRaw__acc(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__acc(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__assign_function__ImuGpsRaw__acc(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__acc(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__resize_function__ImuGpsRaw__acc(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__size_function__ImuGpsRaw__gyro(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__gyro(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__gyro(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__fetch_function__ImuGpsRaw__gyro(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__gyro(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__assign_function__ImuGpsRaw__gyro(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__gyro(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__resize_function__ImuGpsRaw__gyro(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__size_function__ImuGpsRaw__rpy(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__rpy(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__rpy(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__fetch_function__ImuGpsRaw__rpy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__rpy(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__assign_function__ImuGpsRaw__rpy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__rpy(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__resize_function__ImuGpsRaw__rpy(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__size_function__ImuGpsRaw__mag(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__mag(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__mag(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__fetch_function__ImuGpsRaw__mag(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__mag(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__assign_function__ImuGpsRaw__mag(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__mag(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__resize_function__ImuGpsRaw__mag(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__size_function__ImuGpsRaw__ps(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__ps(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__ps(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__fetch_function__ImuGpsRaw__ps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__ps(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__assign_function__ImuGpsRaw__ps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__ps(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__resize_function__ImuGpsRaw__ps(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

size_t wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__size_function__ImuGpsRaw__quarternion(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__quarternion(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__quarternion(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__fetch_function__ImuGpsRaw__quarternion(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__quarternion(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__assign_function__ImuGpsRaw__quarternion(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__quarternion(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__resize_function__ImuGpsRaw__quarternion(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__size_function__ImuGpsRaw__dop(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__dop(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__dop(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__fetch_function__ImuGpsRaw__dop(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__dop(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__assign_function__ImuGpsRaw__dop(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__dop(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__resize_function__ImuGpsRaw__dop(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__ImuGpsRaw_message_member_array[18] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, acc),  // bytes offset in struct
    NULL,  // default value
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__size_function__ImuGpsRaw__acc,  // size() function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__acc,  // get_const(index) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__acc,  // get(index) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__fetch_function__ImuGpsRaw__acc,  // fetch(index, &value) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__assign_function__ImuGpsRaw__acc,  // assign(index, value) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__resize_function__ImuGpsRaw__acc  // resize(index) function pointer
  },
  {
    "gyro",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, gyro),  // bytes offset in struct
    NULL,  // default value
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__size_function__ImuGpsRaw__gyro,  // size() function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__gyro,  // get_const(index) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__gyro,  // get(index) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__fetch_function__ImuGpsRaw__gyro,  // fetch(index, &value) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__assign_function__ImuGpsRaw__gyro,  // assign(index, value) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__resize_function__ImuGpsRaw__gyro  // resize(index) function pointer
  },
  {
    "rpy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, rpy),  // bytes offset in struct
    NULL,  // default value
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__size_function__ImuGpsRaw__rpy,  // size() function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__rpy,  // get_const(index) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__rpy,  // get(index) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__fetch_function__ImuGpsRaw__rpy,  // fetch(index, &value) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__assign_function__ImuGpsRaw__rpy,  // assign(index, value) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__resize_function__ImuGpsRaw__rpy  // resize(index) function pointer
  },
  {
    "mag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, mag),  // bytes offset in struct
    NULL,  // default value
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__size_function__ImuGpsRaw__mag,  // size() function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__mag,  // get_const(index) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__mag,  // get(index) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__fetch_function__ImuGpsRaw__mag,  // fetch(index, &value) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__assign_function__ImuGpsRaw__mag,  // assign(index, value) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__resize_function__ImuGpsRaw__mag  // resize(index) function pointer
  },
  {
    "ps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, ps),  // bytes offset in struct
    NULL,  // default value
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__size_function__ImuGpsRaw__ps,  // size() function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__ps,  // get_const(index) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__ps,  // get(index) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__fetch_function__ImuGpsRaw__ps,  // fetch(index, &value) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__assign_function__ImuGpsRaw__ps,  // assign(index, value) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__resize_function__ImuGpsRaw__ps  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, ap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, latitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longtitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, longtitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gpsh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, gpsh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gpsy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, gpsy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gpsv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, gpsv),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quarternion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, quarternion),  // bytes offset in struct
    NULL,  // default value
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__size_function__ImuGpsRaw__quarternion,  // size() function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__quarternion,  // get_const(index) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__quarternion,  // get(index) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__fetch_function__ImuGpsRaw__quarternion,  // fetch(index, &value) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__assign_function__ImuGpsRaw__quarternion,  // assign(index, value) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__resize_function__ImuGpsRaw__quarternion  // resize(index) function pointer
  },
  {
    "sn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, sn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wit_msgs__msg__ImuGpsRaw, dop),  // bytes offset in struct
    NULL,  // default value
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__size_function__ImuGpsRaw__dop,  // size() function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_const_function__ImuGpsRaw__dop,  // get_const(index) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__get_function__ImuGpsRaw__dop,  // get(index) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__fetch_function__ImuGpsRaw__dop,  // fetch(index, &value) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__assign_function__ImuGpsRaw__dop,  // assign(index, value) function pointer
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__resize_function__ImuGpsRaw__dop  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__ImuGpsRaw_message_members = {
  "wit_msgs__msg",  // message namespace
  "ImuGpsRaw",  // message name
  18,  // number of fields
  sizeof(wit_msgs__msg__ImuGpsRaw),
  wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__ImuGpsRaw_message_member_array,  // message members
  wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__ImuGpsRaw_init_function,  // function to initialize message memory (memory has to be allocated)
  wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__ImuGpsRaw_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__ImuGpsRaw_message_type_support_handle = {
  0,
  &wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__ImuGpsRaw_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wit_msgs, msg, ImuGpsRaw)() {
  wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__ImuGpsRaw_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__ImuGpsRaw_message_type_support_handle.typesupport_identifier) {
    wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__ImuGpsRaw_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wit_msgs__msg__ImuGpsRaw__rosidl_typesupport_introspection_c__ImuGpsRaw_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
