// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from wit_msgs:msg/ImuGpsRaw.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "wit_msgs/msg/detail/imu_gps_raw__struct.h"
#include "wit_msgs/msg/detail/imu_gps_raw__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace wit_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ImuGpsRaw_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ImuGpsRaw_type_support_ids_t;

static const _ImuGpsRaw_type_support_ids_t _ImuGpsRaw_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ImuGpsRaw_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ImuGpsRaw_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ImuGpsRaw_type_support_symbol_names_t _ImuGpsRaw_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wit_msgs, msg, ImuGpsRaw)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wit_msgs, msg, ImuGpsRaw)),
  }
};

typedef struct _ImuGpsRaw_type_support_data_t
{
  void * data[2];
} _ImuGpsRaw_type_support_data_t;

static _ImuGpsRaw_type_support_data_t _ImuGpsRaw_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ImuGpsRaw_message_typesupport_map = {
  2,
  "wit_msgs",
  &_ImuGpsRaw_message_typesupport_ids.typesupport_identifier[0],
  &_ImuGpsRaw_message_typesupport_symbol_names.symbol_name[0],
  &_ImuGpsRaw_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ImuGpsRaw_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ImuGpsRaw_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace wit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, wit_msgs, msg, ImuGpsRaw)() {
  return &::wit_msgs::msg::rosidl_typesupport_c::ImuGpsRaw_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
