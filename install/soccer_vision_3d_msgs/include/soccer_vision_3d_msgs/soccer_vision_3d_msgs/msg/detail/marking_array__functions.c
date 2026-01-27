// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from soccer_vision_3d_msgs:msg/MarkingArray.idl
// generated code does not contain a copyright notice
#include "soccer_vision_3d_msgs/msg/detail/marking_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ellipses`
#include "soccer_vision_3d_msgs/msg/detail/marking_ellipse__functions.h"
// Member `intersections`
#include "soccer_vision_3d_msgs/msg/detail/marking_intersection__functions.h"
// Member `segments`
#include "soccer_vision_3d_msgs/msg/detail/marking_segment__functions.h"

bool
soccer_vision_3d_msgs__msg__MarkingArray__init(soccer_vision_3d_msgs__msg__MarkingArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    soccer_vision_3d_msgs__msg__MarkingArray__fini(msg);
    return false;
  }
  // ellipses
  if (!soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence__init(&msg->ellipses, 0)) {
    soccer_vision_3d_msgs__msg__MarkingArray__fini(msg);
    return false;
  }
  // intersections
  if (!soccer_vision_3d_msgs__msg__MarkingIntersection__Sequence__init(&msg->intersections, 0)) {
    soccer_vision_3d_msgs__msg__MarkingArray__fini(msg);
    return false;
  }
  // segments
  if (!soccer_vision_3d_msgs__msg__MarkingSegment__Sequence__init(&msg->segments, 0)) {
    soccer_vision_3d_msgs__msg__MarkingArray__fini(msg);
    return false;
  }
  return true;
}

void
soccer_vision_3d_msgs__msg__MarkingArray__fini(soccer_vision_3d_msgs__msg__MarkingArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ellipses
  soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence__fini(&msg->ellipses);
  // intersections
  soccer_vision_3d_msgs__msg__MarkingIntersection__Sequence__fini(&msg->intersections);
  // segments
  soccer_vision_3d_msgs__msg__MarkingSegment__Sequence__fini(&msg->segments);
}

bool
soccer_vision_3d_msgs__msg__MarkingArray__are_equal(const soccer_vision_3d_msgs__msg__MarkingArray * lhs, const soccer_vision_3d_msgs__msg__MarkingArray * rhs)
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
  // ellipses
  if (!soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence__are_equal(
      &(lhs->ellipses), &(rhs->ellipses)))
  {
    return false;
  }
  // intersections
  if (!soccer_vision_3d_msgs__msg__MarkingIntersection__Sequence__are_equal(
      &(lhs->intersections), &(rhs->intersections)))
  {
    return false;
  }
  // segments
  if (!soccer_vision_3d_msgs__msg__MarkingSegment__Sequence__are_equal(
      &(lhs->segments), &(rhs->segments)))
  {
    return false;
  }
  return true;
}

bool
soccer_vision_3d_msgs__msg__MarkingArray__copy(
  const soccer_vision_3d_msgs__msg__MarkingArray * input,
  soccer_vision_3d_msgs__msg__MarkingArray * output)
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
  // ellipses
  if (!soccer_vision_3d_msgs__msg__MarkingEllipse__Sequence__copy(
      &(input->ellipses), &(output->ellipses)))
  {
    return false;
  }
  // intersections
  if (!soccer_vision_3d_msgs__msg__MarkingIntersection__Sequence__copy(
      &(input->intersections), &(output->intersections)))
  {
    return false;
  }
  // segments
  if (!soccer_vision_3d_msgs__msg__MarkingSegment__Sequence__copy(
      &(input->segments), &(output->segments)))
  {
    return false;
  }
  return true;
}

soccer_vision_3d_msgs__msg__MarkingArray *
soccer_vision_3d_msgs__msg__MarkingArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_3d_msgs__msg__MarkingArray * msg = (soccer_vision_3d_msgs__msg__MarkingArray *)allocator.allocate(sizeof(soccer_vision_3d_msgs__msg__MarkingArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(soccer_vision_3d_msgs__msg__MarkingArray));
  bool success = soccer_vision_3d_msgs__msg__MarkingArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
soccer_vision_3d_msgs__msg__MarkingArray__destroy(soccer_vision_3d_msgs__msg__MarkingArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    soccer_vision_3d_msgs__msg__MarkingArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
soccer_vision_3d_msgs__msg__MarkingArray__Sequence__init(soccer_vision_3d_msgs__msg__MarkingArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_3d_msgs__msg__MarkingArray * data = NULL;

  if (size) {
    data = (soccer_vision_3d_msgs__msg__MarkingArray *)allocator.zero_allocate(size, sizeof(soccer_vision_3d_msgs__msg__MarkingArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = soccer_vision_3d_msgs__msg__MarkingArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        soccer_vision_3d_msgs__msg__MarkingArray__fini(&data[i - 1]);
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
soccer_vision_3d_msgs__msg__MarkingArray__Sequence__fini(soccer_vision_3d_msgs__msg__MarkingArray__Sequence * array)
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
      soccer_vision_3d_msgs__msg__MarkingArray__fini(&array->data[i]);
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

soccer_vision_3d_msgs__msg__MarkingArray__Sequence *
soccer_vision_3d_msgs__msg__MarkingArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_3d_msgs__msg__MarkingArray__Sequence * array = (soccer_vision_3d_msgs__msg__MarkingArray__Sequence *)allocator.allocate(sizeof(soccer_vision_3d_msgs__msg__MarkingArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = soccer_vision_3d_msgs__msg__MarkingArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
soccer_vision_3d_msgs__msg__MarkingArray__Sequence__destroy(soccer_vision_3d_msgs__msg__MarkingArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    soccer_vision_3d_msgs__msg__MarkingArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
soccer_vision_3d_msgs__msg__MarkingArray__Sequence__are_equal(const soccer_vision_3d_msgs__msg__MarkingArray__Sequence * lhs, const soccer_vision_3d_msgs__msg__MarkingArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!soccer_vision_3d_msgs__msg__MarkingArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
soccer_vision_3d_msgs__msg__MarkingArray__Sequence__copy(
  const soccer_vision_3d_msgs__msg__MarkingArray__Sequence * input,
  soccer_vision_3d_msgs__msg__MarkingArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(soccer_vision_3d_msgs__msg__MarkingArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    soccer_vision_3d_msgs__msg__MarkingArray * data =
      (soccer_vision_3d_msgs__msg__MarkingArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!soccer_vision_3d_msgs__msg__MarkingArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          soccer_vision_3d_msgs__msg__MarkingArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!soccer_vision_3d_msgs__msg__MarkingArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
