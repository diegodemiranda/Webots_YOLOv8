// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from soccer_vision_2d_msgs:msg/MarkingSegment.idl
// generated code does not contain a copyright notice

#ifndef SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_SEGMENT__FUNCTIONS_H_
#define SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_SEGMENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "soccer_vision_2d_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "soccer_vision_2d_msgs/msg/detail/marking_segment__struct.h"

/// Initialize msg/MarkingSegment message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * soccer_vision_2d_msgs__msg__MarkingSegment
 * )) before or use
 * soccer_vision_2d_msgs__msg__MarkingSegment__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_vision_2d_msgs
bool
soccer_vision_2d_msgs__msg__MarkingSegment__init(soccer_vision_2d_msgs__msg__MarkingSegment * msg);

/// Finalize msg/MarkingSegment message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_vision_2d_msgs
void
soccer_vision_2d_msgs__msg__MarkingSegment__fini(soccer_vision_2d_msgs__msg__MarkingSegment * msg);

/// Create msg/MarkingSegment message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * soccer_vision_2d_msgs__msg__MarkingSegment__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_vision_2d_msgs
soccer_vision_2d_msgs__msg__MarkingSegment *
soccer_vision_2d_msgs__msg__MarkingSegment__create();

/// Destroy msg/MarkingSegment message.
/**
 * It calls
 * soccer_vision_2d_msgs__msg__MarkingSegment__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_vision_2d_msgs
void
soccer_vision_2d_msgs__msg__MarkingSegment__destroy(soccer_vision_2d_msgs__msg__MarkingSegment * msg);

/// Check for msg/MarkingSegment message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_vision_2d_msgs
bool
soccer_vision_2d_msgs__msg__MarkingSegment__are_equal(const soccer_vision_2d_msgs__msg__MarkingSegment * lhs, const soccer_vision_2d_msgs__msg__MarkingSegment * rhs);

/// Copy a msg/MarkingSegment message.
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
ROSIDL_GENERATOR_C_PUBLIC_soccer_vision_2d_msgs
bool
soccer_vision_2d_msgs__msg__MarkingSegment__copy(
  const soccer_vision_2d_msgs__msg__MarkingSegment * input,
  soccer_vision_2d_msgs__msg__MarkingSegment * output);

/// Initialize array of msg/MarkingSegment messages.
/**
 * It allocates the memory for the number of elements and calls
 * soccer_vision_2d_msgs__msg__MarkingSegment__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_vision_2d_msgs
bool
soccer_vision_2d_msgs__msg__MarkingSegment__Sequence__init(soccer_vision_2d_msgs__msg__MarkingSegment__Sequence * array, size_t size);

/// Finalize array of msg/MarkingSegment messages.
/**
 * It calls
 * soccer_vision_2d_msgs__msg__MarkingSegment__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_vision_2d_msgs
void
soccer_vision_2d_msgs__msg__MarkingSegment__Sequence__fini(soccer_vision_2d_msgs__msg__MarkingSegment__Sequence * array);

/// Create array of msg/MarkingSegment messages.
/**
 * It allocates the memory for the array and calls
 * soccer_vision_2d_msgs__msg__MarkingSegment__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_vision_2d_msgs
soccer_vision_2d_msgs__msg__MarkingSegment__Sequence *
soccer_vision_2d_msgs__msg__MarkingSegment__Sequence__create(size_t size);

/// Destroy array of msg/MarkingSegment messages.
/**
 * It calls
 * soccer_vision_2d_msgs__msg__MarkingSegment__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_vision_2d_msgs
void
soccer_vision_2d_msgs__msg__MarkingSegment__Sequence__destroy(soccer_vision_2d_msgs__msg__MarkingSegment__Sequence * array);

/// Check for msg/MarkingSegment message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_soccer_vision_2d_msgs
bool
soccer_vision_2d_msgs__msg__MarkingSegment__Sequence__are_equal(const soccer_vision_2d_msgs__msg__MarkingSegment__Sequence * lhs, const soccer_vision_2d_msgs__msg__MarkingSegment__Sequence * rhs);

/// Copy an array of msg/MarkingSegment messages.
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
ROSIDL_GENERATOR_C_PUBLIC_soccer_vision_2d_msgs
bool
soccer_vision_2d_msgs__msg__MarkingSegment__Sequence__copy(
  const soccer_vision_2d_msgs__msg__MarkingSegment__Sequence * input,
  soccer_vision_2d_msgs__msg__MarkingSegment__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SOCCER_VISION_2D_MSGS__MSG__DETAIL__MARKING_SEGMENT__FUNCTIONS_H_
