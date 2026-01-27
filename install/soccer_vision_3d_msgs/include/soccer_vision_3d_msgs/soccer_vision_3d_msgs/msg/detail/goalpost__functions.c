// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from soccer_vision_3d_msgs:msg/Goalpost.idl
// generated code does not contain a copyright notice
#include "soccer_vision_3d_msgs/msg/detail/goalpost__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bb`
#include "vision_msgs/msg/detail/bounding_box3_d__functions.h"
// Member `attributes`
#include "soccer_vision_attribute_msgs/msg/detail/goalpost__functions.h"
// Member `confidence`
#include "soccer_vision_attribute_msgs/msg/detail/confidence__functions.h"

bool
soccer_vision_3d_msgs__msg__Goalpost__init(soccer_vision_3d_msgs__msg__Goalpost * msg)
{
  if (!msg) {
    return false;
  }
  // bb
  if (!vision_msgs__msg__BoundingBox3D__init(&msg->bb)) {
    soccer_vision_3d_msgs__msg__Goalpost__fini(msg);
    return false;
  }
  // attributes
  if (!soccer_vision_attribute_msgs__msg__Goalpost__init(&msg->attributes)) {
    soccer_vision_3d_msgs__msg__Goalpost__fini(msg);
    return false;
  }
  // confidence
  if (!soccer_vision_attribute_msgs__msg__Confidence__init(&msg->confidence)) {
    soccer_vision_3d_msgs__msg__Goalpost__fini(msg);
    return false;
  }
  return true;
}

void
soccer_vision_3d_msgs__msg__Goalpost__fini(soccer_vision_3d_msgs__msg__Goalpost * msg)
{
  if (!msg) {
    return;
  }
  // bb
  vision_msgs__msg__BoundingBox3D__fini(&msg->bb);
  // attributes
  soccer_vision_attribute_msgs__msg__Goalpost__fini(&msg->attributes);
  // confidence
  soccer_vision_attribute_msgs__msg__Confidence__fini(&msg->confidence);
}

bool
soccer_vision_3d_msgs__msg__Goalpost__are_equal(const soccer_vision_3d_msgs__msg__Goalpost * lhs, const soccer_vision_3d_msgs__msg__Goalpost * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bb
  if (!vision_msgs__msg__BoundingBox3D__are_equal(
      &(lhs->bb), &(rhs->bb)))
  {
    return false;
  }
  // attributes
  if (!soccer_vision_attribute_msgs__msg__Goalpost__are_equal(
      &(lhs->attributes), &(rhs->attributes)))
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
soccer_vision_3d_msgs__msg__Goalpost__copy(
  const soccer_vision_3d_msgs__msg__Goalpost * input,
  soccer_vision_3d_msgs__msg__Goalpost * output)
{
  if (!input || !output) {
    return false;
  }
  // bb
  if (!vision_msgs__msg__BoundingBox3D__copy(
      &(input->bb), &(output->bb)))
  {
    return false;
  }
  // attributes
  if (!soccer_vision_attribute_msgs__msg__Goalpost__copy(
      &(input->attributes), &(output->attributes)))
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

soccer_vision_3d_msgs__msg__Goalpost *
soccer_vision_3d_msgs__msg__Goalpost__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_3d_msgs__msg__Goalpost * msg = (soccer_vision_3d_msgs__msg__Goalpost *)allocator.allocate(sizeof(soccer_vision_3d_msgs__msg__Goalpost), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(soccer_vision_3d_msgs__msg__Goalpost));
  bool success = soccer_vision_3d_msgs__msg__Goalpost__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
soccer_vision_3d_msgs__msg__Goalpost__destroy(soccer_vision_3d_msgs__msg__Goalpost * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    soccer_vision_3d_msgs__msg__Goalpost__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
soccer_vision_3d_msgs__msg__Goalpost__Sequence__init(soccer_vision_3d_msgs__msg__Goalpost__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_3d_msgs__msg__Goalpost * data = NULL;

  if (size) {
    data = (soccer_vision_3d_msgs__msg__Goalpost *)allocator.zero_allocate(size, sizeof(soccer_vision_3d_msgs__msg__Goalpost), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = soccer_vision_3d_msgs__msg__Goalpost__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        soccer_vision_3d_msgs__msg__Goalpost__fini(&data[i - 1]);
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
soccer_vision_3d_msgs__msg__Goalpost__Sequence__fini(soccer_vision_3d_msgs__msg__Goalpost__Sequence * array)
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
      soccer_vision_3d_msgs__msg__Goalpost__fini(&array->data[i]);
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

soccer_vision_3d_msgs__msg__Goalpost__Sequence *
soccer_vision_3d_msgs__msg__Goalpost__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_3d_msgs__msg__Goalpost__Sequence * array = (soccer_vision_3d_msgs__msg__Goalpost__Sequence *)allocator.allocate(sizeof(soccer_vision_3d_msgs__msg__Goalpost__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = soccer_vision_3d_msgs__msg__Goalpost__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
soccer_vision_3d_msgs__msg__Goalpost__Sequence__destroy(soccer_vision_3d_msgs__msg__Goalpost__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    soccer_vision_3d_msgs__msg__Goalpost__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
soccer_vision_3d_msgs__msg__Goalpost__Sequence__are_equal(const soccer_vision_3d_msgs__msg__Goalpost__Sequence * lhs, const soccer_vision_3d_msgs__msg__Goalpost__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!soccer_vision_3d_msgs__msg__Goalpost__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
soccer_vision_3d_msgs__msg__Goalpost__Sequence__copy(
  const soccer_vision_3d_msgs__msg__Goalpost__Sequence * input,
  soccer_vision_3d_msgs__msg__Goalpost__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(soccer_vision_3d_msgs__msg__Goalpost);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    soccer_vision_3d_msgs__msg__Goalpost * data =
      (soccer_vision_3d_msgs__msg__Goalpost *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!soccer_vision_3d_msgs__msg__Goalpost__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          soccer_vision_3d_msgs__msg__Goalpost__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!soccer_vision_3d_msgs__msg__Goalpost__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
