// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from soccer_vision_3d_msgs:msg/MarkingEllipse.idl
// generated code does not contain a copyright notice
#include "soccer_vision_3d_msgs/msg/detail/marking_ellipse__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `confidence`
#include "soccer_vision_attribute_msgs/msg/detail/confidence__functions.h"

bool
soccer_vision_3d_msgs__msg__MarkingEllipse__init(soccer_vision_3d_msgs__msg__MarkingEllipse * msg)
{
  if (!msg) {
    return false;
  }
  // diameter
  // center
  if (!geometry_msgs__msg__Pose__init(&msg->center)) {
    soccer_vision_3d_msgs__msg__MarkingEllipse__fini(msg);
    return false;
  }
  // confidence
  if (!soccer_vision_attribute_msgs__msg__Confidence__init(&msg->confidence)) {
    soccer_vision_3d_msgs__msg__MarkingEllipse__fini(msg);
    return false;
  }
  return true;
}

void
soccer_vision_3d_msgs__msg__MarkingEllipse__fini(soccer_vision_3d_msgs__msg__MarkingEllipse * msg)
{
  if (!msg) {
    return;
  }
  // diameter
  // center
  geometry_msgs__msg__Pose__fini(&msg->center);
  // confidence
  soccer_vision_attribute_msgs__msg__Confidence__fini(&msg->confidence);
}

bool
soccer_vision_3d_msgs__msg__MarkingEllipse__are_equal(const soccer_vision_3d_msgs__msg__MarkingEllipse * lhs, const soccer_vision_3d_msgs__msg__MarkingEllipse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // diameter
  if (lhs->diameter != rhs->diameter) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->center), &(rhs->center)))
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
soccer_vision_3d_msgs__msg__MarkingEllipse__copy(
  const soccer_vision_3d_msgs__msg__MarkingEllipse * input,
  soccer_vision_3d_msgs__msg__MarkingEllipse * output)
{
  if (!input || !output) {
    return false;
  }
  // diameter
  output->diameter = input->diameter;
  // center
  if (!geometry_msgs__msg__Pose__copy(
      &(input->center), &(output->center)))
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

soccer_vision_3d_msgs__msg__MarkingEllipse *
soccer_vision_3d_msgs__msg__MarkingEllipse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_3d_msgs__msg__MarkingEllipse * msg = (soccer_vision_3d_msgs__msg__MarkingEllipse *)allocator.allocate(sizeof(soccer_vision_3d_msgs__msg__MarkingEllipse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(soccer_vision_3d_msgs__msg__MarkingEllipse));
  bool success = soccer_vision_3d_msgs__msg__MarkingEllipse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
soccer_vision_3d_msgs__msg__MarkingEllipse__destroy(soccer_vision_3d_msgs__msg__MarkingEllipse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    soccer_vision_3d_msgs__msg__MarkingEllipse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence__init(soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_3d_msgs__msg__MarkingEllipse * data = NULL;

  if (size) {
    data = (soccer_vision_3d_msgs__msg__MarkingEllipse *)allocator.zero_allocate(size, sizeof(soccer_vision_3d_msgs__msg__MarkingEllipse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = soccer_vision_3d_msgs__msg__MarkingEllipse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        soccer_vision_3d_msgs__msg__MarkingEllipse__fini(&data[i - 1]);
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
soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence__fini(soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence * array)
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
      soccer_vision_3d_msgs__msg__MarkingEllipse__fini(&array->data[i]);
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

soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence *
soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence * array = (soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence *)allocator.allocate(sizeof(soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence__destroy(soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence__are_equal(const soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence * lhs, const soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!soccer_vision_3d_msgs__msg__MarkingEllipse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence__copy(
  const soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence * input,
  soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(soccer_vision_3d_msgs__msg__MarkingEllipse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    soccer_vision_3d_msgs__msg__MarkingEllipse * data =
      (soccer_vision_3d_msgs__msg__MarkingEllipse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!soccer_vision_3d_msgs__msg__MarkingEllipse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          soccer_vision_3d_msgs__msg__MarkingEllipse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!soccer_vision_3d_msgs__msg__MarkingEllipse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
