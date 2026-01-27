// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from soccer_geometry_msgs:msg/PointWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__FUNCTIONS_H_
#define SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "soccer_geometry_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "soccer_geometry_msgs/msg/detail/point_with_covariance__struct.h"

/// Initialize msg/PointWithCovariance message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * soccer_geometry_msgs__msg__PointWithCovariance
 * )) before or use
 * soccer_geometry_msgs__msg__PointWithCovariance__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_geometry_msgs
bool
soccer_geometry_msgs__msg__PointWithCovariance__init(soccer_geometry_msgs__msg__PointWithCovariance * msg);

/// Finalize msg/PointWithCovariance message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_geometry_msgs
void
soccer_geometry_msgs__msg__PointWithCovariance__fini(soccer_geometry_msgs__msg__PointWithCovariance * msg);

/// Create msg/PointWithCovariance message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * soccer_geometry_msgs__msg__PointWithCovariance__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_geometry_msgs
soccer_geometry_msgs__msg__PointWithCovariance *
soccer_geometry_msgs__msg__PointWithCovariance__create();

/// Destroy msg/PointWithCovariance message.
/**
 * It calls
 * soccer_geometry_msgs__msg__PointWithCovariance__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_geometry_msgs
void
soccer_geometry_msgs__msg__PointWithCovariance__destroy(soccer_geometry_msgs__msg__PointWithCovariance * msg);

/// Check for msg/PointWithCovariance message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_geometry_msgs
bool
soccer_geometry_msgs__msg__PointWithCovariance__are_equal(const soccer_geometry_msgs__msg__PointWithCovariance * lhs, const soccer_geometry_msgs__msg__PointWithCovariance * rhs);

/// Copy a msg/PointWithCovariance message.
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
ROSIDL_GENERATOR_C_PUBLIC_soccer_geometry_msgs
bool
soccer_geometry_msgs__msg__PointWithCovariance__copy(
  const soccer_geometry_msgs__msg__PointWithCovariance * input,
  soccer_geometry_msgs__msg__PointWithCovariance * output);

/// Initialize array of msg/PointWithCovariance messages.
/**
 * It allocates the memory for the number of elements and calls
 * soccer_geometry_msgs__msg__PointWithCovariance__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_geometry_msgs
bool
soccer_geometry_msgs__msg__PointWithCovariance__Sequence__init(soccer_geometry_msgs__msg__PointWithCovariance__Sequence * array, size_t size);

/// Finalize array of msg/PointWithCovariance messages.
/**
 * It calls
 * soccer_geometry_msgs__msg__PointWithCovariance__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_geometry_msgs
void
soccer_geometry_msgs__msg__PointWithCovariance__Sequence__fini(soccer_geometry_msgs__msg__PointWithCovariance__Sequence * array);

/// Create array of msg/PointWithCovariance messages.
/**
 * It allocates the memory for the array and calls
 * soccer_geometry_msgs__msg__PointWithCovariance__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_geometry_msgs
soccer_geometry_msgs__msg__PointWithCovariance__Sequence *
soccer_geometry_msgs__msg__PointWithCovariance__Sequence__create(size_t size);

/// Destroy array of msg/PointWithCovariance messages.
/**
 * It calls
 * soccer_geometry_msgs__msg__PointWithCovariance__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_geometry_msgs
void
soccer_geometry_msgs__msg__PointWithCovariance__Sequence__destroy(soccer_geometry_msgs__msg__PointWithCovariance__Sequence * array);

/// Check for msg/PointWithCovariance message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_geometry_msgs
bool
soccer_geometry_msgs__msg__PointWithCovariance__Sequence__are_equal(const soccer_geometry_msgs__msg__PointWithCovariance__Sequence * lhs, const soccer_geometry_msgs__msg__PointWithCovariance__Sequence * rhs);

/// Copy an array of msg/PointWithCovariance messages.
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
ROSIDL_GENERATOR_C_PUBLIC_soccer_geometry_msgs
bool
soccer_geometry_msgs__msg__PointWithCovariance__Sequence__copy(
  const soccer_geometry_msgs__msg__PointWithCovariance__Sequence * input,
  soccer_geometry_msgs__msg__PointWithCovariance__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_GEOMETRY_MSGS__MSG__DETAIL__POINT_WITH_COVARIANCE__FUNCTIONS_H_
