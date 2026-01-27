// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from soccer_vision_3d_msgs:msg/MarkingSegment.idl
// generated code does not contain a copyright notice
#include "soccer_vision_3d_msgs/msg/detail/marking_segment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `start`
// Member `end`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `confidence`
#include "soccer_vision_attribute_msgs/msg/detail/confidence__functions.h"

bool
soccer_vision_3d_msgs__msg__MarkingSegment__init(soccer_vision_3d_msgs__msg__MarkingSegment * msg)
{
  if (!msg) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Point__init(&msg->start)) {
    soccer_vision_3d_msgs__msg__MarkingSegment__fini(msg);
    return false;
  }
  // end
  if (!geometry_msgs__msg__Point__init(&msg->end)) {
    soccer_vision_3d_msgs__msg__MarkingSegment__fini(msg);
    return false;
  }
  // confidence
  if (!soccer_vision_attribute_msgs__msg__Confidence__init(&msg->confidence)) {
    soccer_vision_3d_msgs__msg__MarkingSegment__fini(msg);
    return false;
  }
  return true;
}

void
soccer_vision_3d_msgs__msg__MarkingSegment__fini(soccer_vision_3d_msgs__msg__MarkingSegment * msg)
{
  if (!msg) {
    return;
  }
  // start
  geometry_msgs__msg__Point__fini(&msg->start);
  // end
  geometry_msgs__msg__Point__fini(&msg->end);
  // confidence
  soccer_vision_attribute_msgs__msg__Confidence__fini(&msg->confidence);
}

bool
soccer_vision_3d_msgs__msg__MarkingSegment__are_equal(const soccer_vision_3d_msgs__msg__MarkingSegment * lhs, const soccer_vision_3d_msgs__msg__MarkingSegment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // end
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->end), &(rhs->end)))
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
soccer_vision_3d_msgs__msg__MarkingSegment__copy(
  const soccer_vision_3d_msgs__msg__MarkingSegment * input,
  soccer_vision_3d_msgs__msg__MarkingSegment * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Point__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // end
  if (!geometry_msgs__msg__Point__copy(
      &(input->end), &(output->end)))
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

soccer_vision_3d_msgs__msg__MarkingSegment *
soccer_vision_3d_msgs__msg__MarkingSegment__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_3d_msgs__msg__MarkingSegment * msg = (soccer_vision_3d_msgs__msg__MarkingSegment *)allocator.allocate(sizeof(soccer_vision_3d_msgs__msg__MarkingSegment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(soccer_vision_3d_msgs__msg__MarkingSegment));
  bool success = soccer_vision_3d_msgs__msg__MarkingSegment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
soccer_vision_3d_msgs__msg__MarkingSegment__destroy(soccer_vision_3d_msgs__msg__MarkingSegment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    soccer_vision_3d_msgs__msg__MarkingSegment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
soccer_vision_3d_msgs__msg__MarkingSegment__Sequence__init(soccer_vision_3d_msgs__msg__MarkingSegment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_3d_msgs__msg__MarkingSegment * data = NULL;

  if (size) {
    data = (soccer_vision_3d_msgs__msg__MarkingSegment *)allocator.zero_allocate(size, sizeof(soccer_vision_3d_msgs__msg__MarkingSegment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = soccer_vision_3d_msgs__msg__MarkingSegment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        soccer_vision_3d_msgs__msg__MarkingSegment__fini(&data[i - 1]);
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
soccer_vision_3d_msgs__msg__MarkingSegment__Sequence__fini(soccer_vision_3d_msgs__msg__MarkingSegment__Sequence * array)
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
      soccer_vision_3d_msgs__msg__MarkingSegment__fini(&array->data[i]);
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

soccer_vision_3d_msgs__msg__MarkingSegment__Sequence *
soccer_vision_3d_msgs__msg__MarkingSegment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_3d_msgs__msg__MarkingSegment__Sequence * array = (soccer_vision_3d_msgs__msg__MarkingSegment__Sequence *)allocator.allocate(sizeof(soccer_vision_3d_msgs__msg__MarkingSegment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = soccer_vision_3d_msgs__msg__MarkingSegment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
soccer_vision_3d_msgs__msg__MarkingSegment__Sequence__destroy(soccer_vision_3d_msgs__msg__MarkingSegment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    soccer_vision_3d_msgs__msg__MarkingSegment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
soccer_vision_3d_msgs__msg__MarkingSegment__Sequence__are_equal(const soccer_vision_3d_msgs__msg__MarkingSegment__Sequence * lhs, const soccer_vision_3d_msgs__msg__MarkingSegment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!soccer_vision_3d_msgs__msg__MarkingSegment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
soccer_vision_3d_msgs__msg__MarkingSegment__Sequence__copy(
  const soccer_vision_3d_msgs__msg__MarkingSegment__Sequence * input,
  soccer_vision_3d_msgs__msg__MarkingSegment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(soccer_vision_3d_msgs__msg__MarkingSegment);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    soccer_vision_3d_msgs__msg__MarkingSegment * data =
      (soccer_vision_3d_msgs__msg__MarkingSegment *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!soccer_vision_3d_msgs__msg__MarkingSegment__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          soccer_vision_3d_msgs__msg__MarkingSegment__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!soccer_vision_3d_msgs__msg__MarkingSegment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
