// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wit_msgs:msg/ImuGpsRaw.idl
// generated code does not contain a copyright notice
#include "wit_msgs/msg/detail/imu_gps_raw__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wit_msgs/msg/detail/imu_gps_raw__struct.h"
#include "wit_msgs/msg/detail/imu_gps_raw__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // acc, dop, gyro, mag, ps, quarternion, rpy
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // acc, dop, gyro, mag, ps, quarternion, rpy
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_wit_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_wit_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_wit_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ImuGpsRaw__ros_msg_type = wit_msgs__msg__ImuGpsRaw;

static bool _ImuGpsRaw__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ImuGpsRaw__ros_msg_type * ros_message = static_cast<const _ImuGpsRaw__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: time
  {
    cdr << ros_message->time;
  }

  // Field name: acc
  {
    size_t size = ros_message->acc.size;
    auto array_ptr = ros_message->acc.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro
  {
    size_t size = ros_message->gyro.size;
    auto array_ptr = ros_message->gyro.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rpy
  {
    size_t size = ros_message->rpy.size;
    auto array_ptr = ros_message->rpy.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mag
  {
    size_t size = ros_message->mag.size;
    auto array_ptr = ros_message->mag.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ps
  {
    size_t size = ros_message->ps.size;
    auto array_ptr = ros_message->ps.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: altitude
  {
    cdr << ros_message->altitude;
  }

  // Field name: ap
  {
    cdr << ros_message->ap;
  }

  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: longtitude
  {
    cdr << ros_message->longtitude;
  }

  // Field name: gpsh
  {
    cdr << ros_message->gpsh;
  }

  // Field name: gpsy
  {
    cdr << ros_message->gpsy;
  }

  // Field name: gpsv
  {
    cdr << ros_message->gpsv;
  }

  // Field name: quarternion
  {
    size_t size = ros_message->quarternion.size;
    auto array_ptr = ros_message->quarternion.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: sn
  {
    cdr << ros_message->sn;
  }

  // Field name: dop
  {
    size_t size = ros_message->dop.size;
    auto array_ptr = ros_message->dop.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ImuGpsRaw__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ImuGpsRaw__ros_msg_type * ros_message = static_cast<_ImuGpsRaw__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: time
  {
    cdr >> ros_message->time;
  }

  // Field name: acc
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->acc.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->acc);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->acc, size)) {
      fprintf(stderr, "failed to create array for field 'acc'");
      return false;
    }
    auto array_ptr = ros_message->acc.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->gyro.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->gyro);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->gyro, size)) {
      fprintf(stderr, "failed to create array for field 'gyro'");
      return false;
    }
    auto array_ptr = ros_message->gyro.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rpy
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->rpy.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->rpy);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->rpy, size)) {
      fprintf(stderr, "failed to create array for field 'rpy'");
      return false;
    }
    auto array_ptr = ros_message->rpy.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mag
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->mag.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->mag);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->mag, size)) {
      fprintf(stderr, "failed to create array for field 'mag'");
      return false;
    }
    auto array_ptr = ros_message->mag.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ps
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ps.data) {
      rosidl_runtime_c__uint16__Sequence__fini(&ros_message->ps);
    }
    if (!rosidl_runtime_c__uint16__Sequence__init(&ros_message->ps, size)) {
      fprintf(stderr, "failed to create array for field 'ps'");
      return false;
    }
    auto array_ptr = ros_message->ps.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: altitude
  {
    cdr >> ros_message->altitude;
  }

  // Field name: ap
  {
    cdr >> ros_message->ap;
  }

  // Field name: latitude
  {
    cdr >> ros_message->latitude;
  }

  // Field name: longtitude
  {
    cdr >> ros_message->longtitude;
  }

  // Field name: gpsh
  {
    cdr >> ros_message->gpsh;
  }

  // Field name: gpsy
  {
    cdr >> ros_message->gpsy;
  }

  // Field name: gpsv
  {
    cdr >> ros_message->gpsv;
  }

  // Field name: quarternion
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->quarternion.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->quarternion);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->quarternion, size)) {
      fprintf(stderr, "failed to create array for field 'quarternion'");
      return false;
    }
    auto array_ptr = ros_message->quarternion.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: sn
  {
    cdr >> ros_message->sn;
  }

  // Field name: dop
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->dop.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->dop);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->dop, size)) {
      fprintf(stderr, "failed to create array for field 'dop'");
      return false;
    }
    auto array_ptr = ros_message->dop.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wit_msgs
size_t get_serialized_size_wit_msgs__msg__ImuGpsRaw(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ImuGpsRaw__ros_msg_type * ros_message = static_cast<const _ImuGpsRaw__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc
  {
    size_t array_size = ros_message->acc.size;
    auto array_ptr = ros_message->acc.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro
  {
    size_t array_size = ros_message->gyro.size;
    auto array_ptr = ros_message->gyro.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rpy
  {
    size_t array_size = ros_message->rpy.size;
    auto array_ptr = ros_message->rpy.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag
  {
    size_t array_size = ros_message->mag.size;
    auto array_ptr = ros_message->mag.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ps
  {
    size_t array_size = ros_message->ps.size;
    auto array_ptr = ros_message->ps.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name altitude
  {
    size_t item_size = sizeof(ros_message->altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ap
  {
    size_t item_size = sizeof(ros_message->ap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longtitude
  {
    size_t item_size = sizeof(ros_message->longtitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gpsh
  {
    size_t item_size = sizeof(ros_message->gpsh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gpsy
  {
    size_t item_size = sizeof(ros_message->gpsy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gpsv
  {
    size_t item_size = sizeof(ros_message->gpsv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quarternion
  {
    size_t array_size = ros_message->quarternion.size;
    auto array_ptr = ros_message->quarternion.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sn
  {
    size_t item_size = sizeof(ros_message->sn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dop
  {
    size_t array_size = ros_message->dop.size;
    auto array_ptr = ros_message->dop.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ImuGpsRaw__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wit_msgs__msg__ImuGpsRaw(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wit_msgs
size_t max_serialized_size_wit_msgs__msg__ImuGpsRaw(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gyro
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rpy
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mag
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ps
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: altitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ap
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: latitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longtitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gpsh
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gpsy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gpsv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: quarternion
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: sn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dop
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = wit_msgs__msg__ImuGpsRaw;
    is_plain =
      (
      offsetof(DataType, dop) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ImuGpsRaw__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wit_msgs__msg__ImuGpsRaw(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ImuGpsRaw = {
  "wit_msgs::msg",
  "ImuGpsRaw",
  _ImuGpsRaw__cdr_serialize,
  _ImuGpsRaw__cdr_deserialize,
  _ImuGpsRaw__get_serialized_size,
  _ImuGpsRaw__max_serialized_size
};

static rosidl_message_type_support_t _ImuGpsRaw__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ImuGpsRaw,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wit_msgs, msg, ImuGpsRaw)() {
  return &_ImuGpsRaw__type_support;
}

#if defined(__cplusplus)
}
#endif
