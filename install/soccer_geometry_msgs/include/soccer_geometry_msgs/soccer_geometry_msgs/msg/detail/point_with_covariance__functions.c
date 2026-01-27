// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from soccer_geometry_msgs:msg/PointWithCovariance.idl
// generated code does not contain a copyright notice
#include "soccer_geometry_msgs/msg/detail/point_with_covariance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
soccer_geometry_msgs__msg__PointWithCovariance__init(soccer_geometry_msgs__msg__PointWithCovariance * msg)
{
  if (!msg) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Point__init(&msg->point)) {
    soccer_geometry_msgs__msg__PointWithCovariance__fini(msg);
    return false;
  }
  // covariance
  return true;
}

void
soccer_geometry_msgs__msg__PointWithCovariance__fini(soccer_geometry_msgs__msg__PointWithCovariance * msg)
{
  if (!msg) {
    return;
  }
  // point
  geometry_msgs__msg__Point__fini(&msg->point);
  // covariance
}

bool
soccer_geometry_msgs__msg__PointWithCovariance__are_equal(const soccer_geometry_msgs__msg__PointWithCovariance * lhs, const soccer_geometry_msgs__msg__PointWithCovariance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->covariance[i] != rhs->covariance[i]) {
      return false;
    }
  }
  return true;
}

bool
soccer_geometry_msgs__msg__PointWithCovariance__copy(
  const soccer_geometry_msgs__msg__PointWithCovariance * input,
  soccer_geometry_msgs__msg__PointWithCovariance * output)
{
  if (!input || !output) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Point__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 9; ++i) {
    output->covariance[i] = input->covariance[i];
  }
  return true;
}

soccer_geometry_msgs__msg__PointWithCovariance *
soccer_geometry_msgs__msg__PointWithCovariance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_geometry_msgs__msg__PointWithCovariance * msg = (soccer_geometry_msgs__msg__PointWithCovariance *)allocator.allocate(sizeof(soccer_geometry_msgs__msg__PointWithCovariance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(soccer_geometry_msgs__msg__PointWithCovariance));
  bool success = soccer_geometry_msgs__msg__PointWithCovariance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
soccer_geometry_msgs__msg__PointWithCovariance__destroy(soccer_geometry_msgs__msg__PointWithCovariance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    soccer_geometry_msgs__msg__PointWithCovariance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
soccer_geometry_msgs__msg__PointWithCovariance__Sequence__init(soccer_geometry_msgs__msg__PointWithCovariance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_geometry_msgs__msg__PointWithCovariance * data = NULL;

  if (size) {
    data = (soccer_geometry_msgs__msg__PointWithCovariance *)allocator.zero_allocate(size, sizeof(soccer_geometry_msgs__msg__PointWithCovariance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = soccer_geometry_msgs__msg__PointWithCovariance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        soccer_geometry_msgs__msg__PointWithCovariance__fini(&data[i - 1]);
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
soccer_geometry_msgs__msg__PointWithCovariance__Sequence__fini(soccer_geometry_msgs__msg__PointWithCovariance__Sequence * array)
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
      soccer_geometry_msgs__msg__PointWithCovariance__fini(&array->data[i]);
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

soccer_geometry_msgs__msg__PointWithCovariance__Sequence *
soccer_geometry_msgs__msg__PointWithCovariance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_geometry_msgs__msg__PointWithCovariance__Sequence * array = (soccer_geometry_msgs__msg__PointWithCovariance__Sequence *)allocator.allocate(sizeof(soccer_geometry_msgs__msg__PointWithCovariance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = soccer_geometry_msgs__msg__PointWithCovariance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
soccer_geometry_msgs__msg__PointWithCovariance__Sequence__destroy(soccer_geometry_msgs__msg__PointWithCovariance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    soccer_geometry_msgs__msg__PointWithCovariance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
soccer_geometry_msgs__msg__PointWithCovariance__Sequence__are_equal(const soccer_geometry_msgs__msg__PointWithCovariance__Sequence * lhs, const soccer_geometry_msgs__msg__PointWithCovariance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!soccer_geometry_msgs__msg__PointWithCovariance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
soccer_geometry_msgs__msg__PointWithCovariance__Sequence__copy(
  const soccer_geometry_msgs__msg__PointWithCovariance__Sequence * input,
  soccer_geometry_msgs__msg__PointWithCovariance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(soccer_geometry_msgs__msg__PointWithCovariance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    soccer_geometry_msgs__msg__PointWithCovariance * data =
      (soccer_geometry_msgs__msg__PointWithCovariance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!soccer_geometry_msgs__msg__PointWithCovariance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          soccer_geometry_msgs__msg__PointWithCovariance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!soccer_geometry_msgs__msg__PointWithCovariance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
