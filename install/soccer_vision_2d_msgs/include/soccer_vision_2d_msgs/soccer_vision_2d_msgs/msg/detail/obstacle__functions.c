// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from soccer_vision_2d_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice
#include "soccer_vision_2d_msgs/msg/detail/obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bb`
#include "vision_msgs/msg/detail/bounding_box2_d__functions.h"
// Member `confidence`
#include "soccer_vision_attribute_msgs/msg/detail/confidence__functions.h"

bool
soccer_vision_2d_msgs__msg__Obstacle__init(soccer_vision_2d_msgs__msg__Obstacle * msg)
{
  if (!msg) {
    return false;
  }
  // bb
  if (!vision_msgs__msg__BoundingBox2D__init(&msg->bb)) {
    soccer_vision_2d_msgs__msg__Obstacle__fini(msg);
    return false;
  }
  // confidence
  if (!soccer_vision_attribute_msgs__msg__Confidence__init(&msg->confidence)) {
    soccer_vision_2d_msgs__msg__Obstacle__fini(msg);
    return false;
  }
  return true;
}

void
soccer_vision_2d_msgs__msg__Obstacle__fini(soccer_vision_2d_msgs__msg__Obstacle * msg)
{
  if (!msg) {
    return;
  }
  // bb
  vision_msgs__msg__BoundingBox2D__fini(&msg->bb);
  // confidence
  soccer_vision_attribute_msgs__msg__Confidence__fini(&msg->confidence);
}

bool
soccer_vision_2d_msgs__msg__Obstacle__are_equal(const soccer_vision_2d_msgs__msg__Obstacle * lhs, const soccer_vision_2d_msgs__msg__Obstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bb
  if (!vision_msgs__msg__BoundingBox2D__are_equal(
      &(lhs->bb), &(rhs->bb)))
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
soccer_vision_2d_msgs__msg__Obstacle__copy(
  const soccer_vision_2d_msgs__msg__Obstacle * input,
  soccer_vision_2d_msgs__msg__Obstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // bb
  if (!vision_msgs__msg__BoundingBox2D__copy(
      &(input->bb), &(output->bb)))
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

soccer_vision_2d_msgs__msg__Obstacle *
soccer_vision_2d_msgs__msg__Obstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_2d_msgs__msg__Obstacle * msg = (soccer_vision_2d_msgs__msg__Obstacle *)allocator.allocate(sizeof(soccer_vision_2d_msgs__msg__Obstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(soccer_vision_2d_msgs__msg__Obstacle));
  bool success = soccer_vision_2d_msgs__msg__Obstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
soccer_vision_2d_msgs__msg__Obstacle__destroy(soccer_vision_2d_msgs__msg__Obstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    soccer_vision_2d_msgs__msg__Obstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
soccer_vision_2d_msgs__msg__Obstacle__Sequence__init(soccer_vision_2d_msgs__msg__Obstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_2d_msgs__msg__Obstacle * data = NULL;

  if (size) {
    data = (soccer_vision_2d_msgs__msg__Obstacle *)allocator.zero_allocate(size, sizeof(soccer_vision_2d_msgs__msg__Obstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = soccer_vision_2d_msgs__msg__Obstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        soccer_vision_2d_msgs__msg__Obstacle__fini(&data[i - 1]);
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
soccer_vision_2d_msgs__msg__Obstacle__Sequence__fini(soccer_vision_2d_msgs__msg__Obstacle__Sequence * array)
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
      soccer_vision_2d_msgs__msg__Obstacle__fini(&array->data[i]);
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

soccer_vision_2d_msgs__msg__Obstacle__Sequence *
soccer_vision_2d_msgs__msg__Obstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_2d_msgs__msg__Obstacle__Sequence * array = (soccer_vision_2d_msgs__msg__Obstacle__Sequence *)allocator.allocate(sizeof(soccer_vision_2d_msgs__msg__Obstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = soccer_vision_2d_msgs__msg__Obstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
soccer_vision_2d_msgs__msg__Obstacle__Sequence__destroy(soccer_vision_2d_msgs__msg__Obstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    soccer_vision_2d_msgs__msg__Obstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
soccer_vision_2d_msgs__msg__Obstacle__Sequence__are_equal(const soccer_vision_2d_msgs__msg__Obstacle__Sequence * lhs, const soccer_vision_2d_msgs__msg__Obstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!soccer_vision_2d_msgs__msg__Obstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
soccer_vision_2d_msgs__msg__Obstacle__Sequence__copy(
  const soccer_vision_2d_msgs__msg__Obstacle__Sequence * input,
  soccer_vision_2d_msgs__msg__Obstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(soccer_vision_2d_msgs__msg__Obstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    soccer_vision_2d_msgs__msg__Obstacle * data =
      (soccer_vision_2d_msgs__msg__Obstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!soccer_vision_2d_msgs__msg__Obstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          soccer_vision_2d_msgs__msg__Obstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!soccer_vision_2d_msgs__msg__Obstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
