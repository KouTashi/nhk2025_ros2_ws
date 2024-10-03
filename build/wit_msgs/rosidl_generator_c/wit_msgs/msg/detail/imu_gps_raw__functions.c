// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wit_msgs:msg/ImuGpsRaw.idl
// generated code does not contain a copyright notice
#include "wit_msgs/msg/detail/imu_gps_raw__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `acc`
// Member `gyro`
// Member `rpy`
// Member `mag`
// Member `ps`
// Member `quarternion`
// Member `dop`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
wit_msgs__msg__ImuGpsRaw__init(wit_msgs__msg__ImuGpsRaw * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    wit_msgs__msg__ImuGpsRaw__fini(msg);
    return false;
  }
  // time
  // acc
  if (!rosidl_runtime_c__double__Sequence__init(&msg->acc, 0)) {
    wit_msgs__msg__ImuGpsRaw__fini(msg);
    return false;
  }
  // gyro
  if (!rosidl_runtime_c__double__Sequence__init(&msg->gyro, 0)) {
    wit_msgs__msg__ImuGpsRaw__fini(msg);
    return false;
  }
  // rpy
  if (!rosidl_runtime_c__double__Sequence__init(&msg->rpy, 0)) {
    wit_msgs__msg__ImuGpsRaw__fini(msg);
    return false;
  }
  // mag
  if (!rosidl_runtime_c__double__Sequence__init(&msg->mag, 0)) {
    wit_msgs__msg__ImuGpsRaw__fini(msg);
    return false;
  }
  // ps
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->ps, 0)) {
    wit_msgs__msg__ImuGpsRaw__fini(msg);
    return false;
  }
  // temperature
  // altitude
  // ap
  // latitude
  // longtitude
  // gpsh
  // gpsy
  // gpsv
  // quarternion
  if (!rosidl_runtime_c__double__Sequence__init(&msg->quarternion, 0)) {
    wit_msgs__msg__ImuGpsRaw__fini(msg);
    return false;
  }
  // sn
  // dop
  if (!rosidl_runtime_c__double__Sequence__init(&msg->dop, 0)) {
    wit_msgs__msg__ImuGpsRaw__fini(msg);
    return false;
  }
  return true;
}

void
wit_msgs__msg__ImuGpsRaw__fini(wit_msgs__msg__ImuGpsRaw * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // time
  // acc
  rosidl_runtime_c__double__Sequence__fini(&msg->acc);
  // gyro
  rosidl_runtime_c__double__Sequence__fini(&msg->gyro);
  // rpy
  rosidl_runtime_c__double__Sequence__fini(&msg->rpy);
  // mag
  rosidl_runtime_c__double__Sequence__fini(&msg->mag);
  // ps
  rosidl_runtime_c__uint16__Sequence__fini(&msg->ps);
  // temperature
  // altitude
  // ap
  // latitude
  // longtitude
  // gpsh
  // gpsy
  // gpsv
  // quarternion
  rosidl_runtime_c__double__Sequence__fini(&msg->quarternion);
  // sn
  // dop
  rosidl_runtime_c__double__Sequence__fini(&msg->dop);
}

bool
wit_msgs__msg__ImuGpsRaw__are_equal(const wit_msgs__msg__ImuGpsRaw * lhs, const wit_msgs__msg__ImuGpsRaw * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // acc
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->acc), &(rhs->acc)))
  {
    return false;
  }
  // gyro
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->gyro), &(rhs->gyro)))
  {
    return false;
  }
  // rpy
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->rpy), &(rhs->rpy)))
  {
    return false;
  }
  // mag
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->mag), &(rhs->mag)))
  {
    return false;
  }
  // ps
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->ps), &(rhs->ps)))
  {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // ap
  if (lhs->ap != rhs->ap) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longtitude
  if (lhs->longtitude != rhs->longtitude) {
    return false;
  }
  // gpsh
  if (lhs->gpsh != rhs->gpsh) {
    return false;
  }
  // gpsy
  if (lhs->gpsy != rhs->gpsy) {
    return false;
  }
  // gpsv
  if (lhs->gpsv != rhs->gpsv) {
    return false;
  }
  // quarternion
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->quarternion), &(rhs->quarternion)))
  {
    return false;
  }
  // sn
  if (lhs->sn != rhs->sn) {
    return false;
  }
  // dop
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->dop), &(rhs->dop)))
  {
    return false;
  }
  return true;
}

bool
wit_msgs__msg__ImuGpsRaw__copy(
  const wit_msgs__msg__ImuGpsRaw * input,
  wit_msgs__msg__ImuGpsRaw * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // time
  output->time = input->time;
  // acc
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->acc), &(output->acc)))
  {
    return false;
  }
  // gyro
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->gyro), &(output->gyro)))
  {
    return false;
  }
  // rpy
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->rpy), &(output->rpy)))
  {
    return false;
  }
  // mag
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->mag), &(output->mag)))
  {
    return false;
  }
  // ps
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->ps), &(output->ps)))
  {
    return false;
  }
  // temperature
  output->temperature = input->temperature;
  // altitude
  output->altitude = input->altitude;
  // ap
  output->ap = input->ap;
  // latitude
  output->latitude = input->latitude;
  // longtitude
  output->longtitude = input->longtitude;
  // gpsh
  output->gpsh = input->gpsh;
  // gpsy
  output->gpsy = input->gpsy;
  // gpsv
  output->gpsv = input->gpsv;
  // quarternion
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->quarternion), &(output->quarternion)))
  {
    return false;
  }
  // sn
  output->sn = input->sn;
  // dop
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->dop), &(output->dop)))
  {
    return false;
  }
  return true;
}

wit_msgs__msg__ImuGpsRaw *
wit_msgs__msg__ImuGpsRaw__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wit_msgs__msg__ImuGpsRaw * msg = (wit_msgs__msg__ImuGpsRaw *)allocator.allocate(sizeof(wit_msgs__msg__ImuGpsRaw), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wit_msgs__msg__ImuGpsRaw));
  bool success = wit_msgs__msg__ImuGpsRaw__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wit_msgs__msg__ImuGpsRaw__destroy(wit_msgs__msg__ImuGpsRaw * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wit_msgs__msg__ImuGpsRaw__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wit_msgs__msg__ImuGpsRaw__Sequence__init(wit_msgs__msg__ImuGpsRaw__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wit_msgs__msg__ImuGpsRaw * data = NULL;

  if (size) {
    data = (wit_msgs__msg__ImuGpsRaw *)allocator.zero_allocate(size, sizeof(wit_msgs__msg__ImuGpsRaw), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wit_msgs__msg__ImuGpsRaw__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wit_msgs__msg__ImuGpsRaw__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wit_msgs__msg__ImuGpsRaw__Sequence__fini(wit_msgs__msg__ImuGpsRaw__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wit_msgs__msg__ImuGpsRaw__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wit_msgs__msg__ImuGpsRaw__Sequence *
wit_msgs__msg__ImuGpsRaw__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wit_msgs__msg__ImuGpsRaw__Sequence * array = (wit_msgs__msg__ImuGpsRaw__Sequence *)allocator.allocate(sizeof(wit_msgs__msg__ImuGpsRaw__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wit_msgs__msg__ImuGpsRaw__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wit_msgs__msg__ImuGpsRaw__Sequence__destroy(wit_msgs__msg__ImuGpsRaw__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wit_msgs__msg__ImuGpsRaw__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wit_msgs__msg__ImuGpsRaw__Sequence__are_equal(const wit_msgs__msg__ImuGpsRaw__Sequence * lhs, const wit_msgs__msg__ImuGpsRaw__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wit_msgs__msg__ImuGpsRaw__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wit_msgs__msg__ImuGpsRaw__Sequence__copy(
  const wit_msgs__msg__ImuGpsRaw__Sequence * input,
  wit_msgs__msg__ImuGpsRaw__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wit_msgs__msg__ImuGpsRaw);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wit_msgs__msg__ImuGpsRaw * data =
      (wit_msgs__msg__ImuGpsRaw *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wit_msgs__msg__ImuGpsRaw__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wit_msgs__msg__ImuGpsRaw__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wit_msgs__msg__ImuGpsRaw__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
