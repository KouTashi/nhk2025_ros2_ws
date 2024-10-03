// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wit_msgs:msg/ImuGpsRaw.idl
// generated code does not contain a copyright notice

#ifndef WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__FUNCTIONS_H_
#define WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wit_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wit_msgs/msg/detail/imu_gps_raw__struct.h"

/// Initialize msg/ImuGpsRaw message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wit_msgs__msg__ImuGpsRaw
 * )) before or use
 * wit_msgs__msg__ImuGpsRaw__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wit_msgs
bool
wit_msgs__msg__ImuGpsRaw__init(wit_msgs__msg__ImuGpsRaw * msg);

/// Finalize msg/ImuGpsRaw message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wit_msgs
void
wit_msgs__msg__ImuGpsRaw__fini(wit_msgs__msg__ImuGpsRaw * msg);

/// Create msg/ImuGpsRaw message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wit_msgs__msg__ImuGpsRaw__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wit_msgs
wit_msgs__msg__ImuGpsRaw *
wit_msgs__msg__ImuGpsRaw__create();

/// Destroy msg/ImuGpsRaw message.
/**
 * It calls
 * wit_msgs__msg__ImuGpsRaw__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wit_msgs
void
wit_msgs__msg__ImuGpsRaw__destroy(wit_msgs__msg__ImuGpsRaw * msg);

/// Check for msg/ImuGpsRaw message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wit_msgs
bool
wit_msgs__msg__ImuGpsRaw__are_equal(const wit_msgs__msg__ImuGpsRaw * lhs, const wit_msgs__msg__ImuGpsRaw * rhs);

/// Copy a msg/ImuGpsRaw message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wit_msgs
bool
wit_msgs__msg__ImuGpsRaw__copy(
  const wit_msgs__msg__ImuGpsRaw * input,
  wit_msgs__msg__ImuGpsRaw * output);

/// Initialize array of msg/ImuGpsRaw messages.
/**
 * It allocates the memory for the number of elements and calls
 * wit_msgs__msg__ImuGpsRaw__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wit_msgs
bool
wit_msgs__msg__ImuGpsRaw__Sequence__init(wit_msgs__msg__ImuGpsRaw__Sequence * array, size_t size);

/// Finalize array of msg/ImuGpsRaw messages.
/**
 * It calls
 * wit_msgs__msg__ImuGpsRaw__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wit_msgs
void
wit_msgs__msg__ImuGpsRaw__Sequence__fini(wit_msgs__msg__ImuGpsRaw__Sequence * array);

/// Create array of msg/ImuGpsRaw messages.
/**
 * It allocates the memory for the array and calls
 * wit_msgs__msg__ImuGpsRaw__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wit_msgs
wit_msgs__msg__ImuGpsRaw__Sequence *
wit_msgs__msg__ImuGpsRaw__Sequence__create(size_t size);

/// Destroy array of msg/ImuGpsRaw messages.
/**
 * It calls
 * wit_msgs__msg__ImuGpsRaw__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wit_msgs
void
wit_msgs__msg__ImuGpsRaw__Sequence__destroy(wit_msgs__msg__ImuGpsRaw__Sequence * array);

/// Check for msg/ImuGpsRaw message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wit_msgs
bool
wit_msgs__msg__ImuGpsRaw__Sequence__are_equal(const wit_msgs__msg__ImuGpsRaw__Sequence * lhs, const wit_msgs__msg__ImuGpsRaw__Sequence * rhs);

/// Copy an array of msg/ImuGpsRaw messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wit_msgs
bool
wit_msgs__msg__ImuGpsRaw__Sequence__copy(
  const wit_msgs__msg__ImuGpsRaw__Sequence * input,
  wit_msgs__msg__ImuGpsRaw__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WIT_MSGS__MSG__DETAIL__IMU_GPS_RAW__FUNCTIONS_H_
