// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from soccer_vision_2d_msgs:msg/FieldBoundary.idl
// generated code does not contain a copyright notice
#include "soccer_vision_2d_msgs/msg/detail/field_boundary__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `points`
#include "vision_msgs/msg/detail/point2_d__functions.h"
// Member `confidence`
#include "soccer_vision_attribute_msgs/msg/detail/confidence__functions.h"

bool
soccer_vision_2d_msgs__msg__FieldBoundary__init(soccer_vision_2d_msgs__msg__FieldBoundary * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    soccer_vision_2d_msgs__msg__FieldBoundary__fini(msg);
    return false;
  }
  // points
  if (!vision_msgs__msg__Point2D__Sequence__init(&msg->points, 0)) {
    soccer_vision_2d_msgs__msg__FieldBoundary__fini(msg);
    return false;
  }
  // confidence
  if (!soccer_vision_attribute_msgs__msg__Confidence__init(&msg->confidence)) {
    soccer_vision_2d_msgs__msg__FieldBoundary__fini(msg);
    return false;
  }
  return true;
}

void
soccer_vision_2d_msgs__msg__FieldBoundary__fini(soccer_vision_2d_msgs__msg__FieldBoundary * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // points
  vision_msgs__msg__Point2D__Sequence__fini(&msg->points);
  // confidence
  soccer_vision_attribute_msgs__msg__Confidence__fini(&msg->confidence);
}

bool
soccer_vision_2d_msgs__msg__FieldBoundary__are_equal(const soccer_vision_2d_msgs__msg__FieldBoundary * lhs, const soccer_vision_2d_msgs__msg__FieldBoundary * rhs)
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
  // points
  if (!vision_msgs__msg__Point2D__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // confidence
  if (!soccer_vision_attribute_msgs__msg__Confidence__are_equal(
      &(lhs->confidence), &(rhs->confidence)))
  {
    return false;
  }
  return true;
}

bool
soccer_vision_2d_msgs__msg__FieldBoundary__copy(
  const soccer_vision_2d_msgs__msg__FieldBoundary * input,
  soccer_vision_2d_msgs__msg__FieldBoundary * output)
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
  // points
  if (!vision_msgs__msg__Point2D__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // confidence
  if (!soccer_vision_attribute_msgs__msg__Confidence__copy(
      &(input->confidence), &(output->confidence)))
  {
    return false;
  }
  return true;
}

soccer_vision_2d_msgs__msg__FieldBoundary *
soccer_vision_2d_msgs__msg__FieldBoundary__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_2d_msgs__msg__FieldBoundary * msg = (soccer_vision_2d_msgs__msg__FieldBoundary *)allocator.allocate(sizeof(soccer_vision_2d_msgs__msg__FieldBoundary), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(soccer_vision_2d_msgs__msg__FieldBoundary));
  bool success = soccer_vision_2d_msgs__msg__FieldBoundary__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
soccer_vision_2d_msgs__msg__FieldBoundary__destroy(soccer_vision_2d_msgs__msg__FieldBoundary * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    soccer_vision_2d_msgs__msg__FieldBoundary__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
soccer_vision_2d_msgs__msg__FieldBoundary__Sequence__init(soccer_vision_2d_msgs__msg__FieldBoundary__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_2d_msgs__msg__FieldBoundary * data = NULL;

  if (size) {
    data = (soccer_vision_2d_msgs__msg__FieldBoundary *)allocator.zero_allocate(size, sizeof(soccer_vision_2d_msgs__msg__FieldBoundary), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = soccer_vision_2d_msgs__msg__FieldBoundary__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        soccer_vision_2d_msgs__msg__FieldBoundary__fini(&data[i - 1]);
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
soccer_vision_2d_msgs__msg__FieldBoundary__Sequence__fini(soccer_vision_2d_msgs__msg__FieldBoundary__Sequence * array)
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
      soccer_vision_2d_msgs__msg__FieldBoundary__fini(&array->data[i]);
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

soccer_vision_2d_msgs__msg__FieldBoundary__Sequence *
soccer_vision_2d_msgs__msg__FieldBoundary__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_2d_msgs__msg__FieldBoundary__Sequence * array = (soccer_vision_2d_msgs__msg__FieldBoundary__Sequence *)allocator.allocate(sizeof(soccer_vision_2d_msgs__msg__FieldBoundary__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = soccer_vision_2d_msgs__msg__FieldBoundary__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
soccer_vision_2d_msgs__msg__FieldBoundary__Sequence__destroy(soccer_vision_2d_msgs__msg__FieldBoundary__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    soccer_vision_2d_msgs__msg__FieldBoundary__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
soccer_vision_2d_msgs__msg__FieldBoundary__Sequence__are_equal(const soccer_vision_2d_msgs__msg__FieldBoundary__Sequence * lhs, const soccer_vision_2d_msgs__msg__FieldBoundary__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!soccer_vision_2d_msgs__msg__FieldBoundary__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
soccer_vision_2d_msgs__msg__FieldBoundary__Sequence__copy(
  const soccer_vision_2d_msgs__msg__FieldBoundary__Sequence * input,
  soccer_vision_2d_msgs__msg__FieldBoundary__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(soccer_vision_2d_msgs__msg__FieldBoundary);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    soccer_vision_2d_msgs__msg__FieldBoundary * data =
      (soccer_vision_2d_msgs__msg__FieldBoundary *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!soccer_vision_2d_msgs__msg__FieldBoundary__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          soccer_vision_2d_msgs__msg__FieldBoundary__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!soccer_vision_2d_msgs__msg__FieldBoundary__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
