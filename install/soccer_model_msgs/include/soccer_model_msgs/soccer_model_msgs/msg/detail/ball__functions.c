// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from soccer_model_msgs:msg/Ball.idl
// generated code does not contain a copyright notice
#include "soccer_model_msgs/msg/detail/ball__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `point`
#include "soccer_geometry_msgs/msg/detail/point_with_covariance__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"

bool
soccer_model_msgs__msg__Ball__init(soccer_model_msgs__msg__Ball * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    soccer_model_msgs__msg__Ball__fini(msg);
    return false;
  }
  // point
  if (!soccer_geometry_msgs__msg__PointWithCovariance__init(&msg->point)) {
    soccer_model_msgs__msg__Ball__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->twist)) {
    soccer_model_msgs__msg__Ball__fini(msg);
    return false;
  }
  return true;
}

void
soccer_model_msgs__msg__Ball__fini(soccer_model_msgs__msg__Ball * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // point
  soccer_geometry_msgs__msg__PointWithCovariance__fini(&msg->point);
  // twist
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->twist);
}

bool
soccer_model_msgs__msg__Ball__are_equal(const soccer_model_msgs__msg__Ball * lhs, const soccer_model_msgs__msg__Ball * rhs)
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
  // point
  if (!soccer_geometry_msgs__msg__PointWithCovariance__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  return true;
}

bool
soccer_model_msgs__msg__Ball__copy(
  const soccer_model_msgs__msg__Ball * input,
  soccer_model_msgs__msg__Ball * output)
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
  // point
  if (!soccer_geometry_msgs__msg__PointWithCovariance__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  return true;
}

soccer_model_msgs__msg__Ball *
soccer_model_msgs__msg__Ball__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_model_msgs__msg__Ball * msg = (soccer_model_msgs__msg__Ball *)allocator.allocate(sizeof(soccer_model_msgs__msg__Ball), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(soccer_model_msgs__msg__Ball));
  bool success = soccer_model_msgs__msg__Ball__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
soccer_model_msgs__msg__Ball__destroy(soccer_model_msgs__msg__Ball * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    soccer_model_msgs__msg__Ball__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
soccer_model_msgs__msg__Ball__Sequence__init(soccer_model_msgs__msg__Ball__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_model_msgs__msg__Ball * data = NULL;

  if (size) {
    data = (soccer_model_msgs__msg__Ball *)allocator.zero_allocate(size, sizeof(soccer_model_msgs__msg__Ball), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = soccer_model_msgs__msg__Ball__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        soccer_model_msgs__msg__Ball__fini(&data[i - 1]);
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
soccer_model_msgs__msg__Ball__Sequence__fini(soccer_model_msgs__msg__Ball__Sequence * array)
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
      soccer_model_msgs__msg__Ball__fini(&array->data[i]);
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

soccer_model_msgs__msg__Ball__Sequence *
soccer_model_msgs__msg__Ball__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_model_msgs__msg__Ball__Sequence * array = (soccer_model_msgs__msg__Ball__Sequence *)allocator.allocate(sizeof(soccer_model_msgs__msg__Ball__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = soccer_model_msgs__msg__Ball__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
soccer_model_msgs__msg__Ball__Sequence__destroy(soccer_model_msgs__msg__Ball__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    soccer_model_msgs__msg__Ball__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
soccer_model_msgs__msg__Ball__Sequence__are_equal(const soccer_model_msgs__msg__Ball__Sequence * lhs, const soccer_model_msgs__msg__Ball__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!soccer_model_msgs__msg__Ball__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
soccer_model_msgs__msg__Ball__Sequence__copy(
  const soccer_model_msgs__msg__Ball__Sequence * input,
  soccer_model_msgs__msg__Ball__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(soccer_model_msgs__msg__Ball);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    soccer_model_msgs__msg__Ball * data =
      (soccer_model_msgs__msg__Ball *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!soccer_model_msgs__msg__Ball__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          soccer_model_msgs__msg__Ball__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!soccer_model_msgs__msg__Ball__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
