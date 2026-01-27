// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from soccer_model_msgs:msg/Robot.idl
// generated code does not contain a copyright notice
#include "soccer_model_msgs/msg/detail/robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"
// Member `attributes`
#include "soccer_vision_attribute_msgs/msg/detail/robot__functions.h"

bool
soccer_model_msgs__msg__Robot__init(soccer_model_msgs__msg__Robot * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose)) {
    soccer_model_msgs__msg__Robot__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->twist)) {
    soccer_model_msgs__msg__Robot__fini(msg);
    return false;
  }
  // attributes
  if (!soccer_vision_attribute_msgs__msg__Robot__init(&msg->attributes)) {
    soccer_model_msgs__msg__Robot__fini(msg);
    return false;
  }
  return true;
}

void
soccer_model_msgs__msg__Robot__fini(soccer_model_msgs__msg__Robot * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose);
  // twist
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->twist);
  // attributes
  soccer_vision_attribute_msgs__msg__Robot__fini(&msg->attributes);
}

bool
soccer_model_msgs__msg__Robot__are_equal(const soccer_model_msgs__msg__Robot * lhs, const soccer_model_msgs__msg__Robot * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // attributes
  if (!soccer_vision_attribute_msgs__msg__Robot__are_equal(
      &(lhs->attributes), &(rhs->attributes)))
  {
    return false;
  }
  return true;
}

bool
soccer_model_msgs__msg__Robot__copy(
  const soccer_model_msgs__msg__Robot * input,
  soccer_model_msgs__msg__Robot * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // attributes
  if (!soccer_vision_attribute_msgs__msg__Robot__copy(
      &(input->attributes), &(output->attributes)))
  {
    return false;
  }
  return true;
}

soccer_model_msgs__msg__Robot *
soccer_model_msgs__msg__Robot__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_model_msgs__msg__Robot * msg = (soccer_model_msgs__msg__Robot *)allocator.allocate(sizeof(soccer_model_msgs__msg__Robot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(soccer_model_msgs__msg__Robot));
  bool success = soccer_model_msgs__msg__Robot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
soccer_model_msgs__msg__Robot__destroy(soccer_model_msgs__msg__Robot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    soccer_model_msgs__msg__Robot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
soccer_model_msgs__msg__Robot__Sequence__init(soccer_model_msgs__msg__Robot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_model_msgs__msg__Robot * data = NULL;

  if (size) {
    data = (soccer_model_msgs__msg__Robot *)allocator.zero_allocate(size, sizeof(soccer_model_msgs__msg__Robot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = soccer_model_msgs__msg__Robot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        soccer_model_msgs__msg__Robot__fini(&data[i - 1]);
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
soccer_model_msgs__msg__Robot__Sequence__fini(soccer_model_msgs__msg__Robot__Sequence * array)
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
      soccer_model_msgs__msg__Robot__fini(&array->data[i]);
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

soccer_model_msgs__msg__Robot__Sequence *
soccer_model_msgs__msg__Robot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_model_msgs__msg__Robot__Sequence * array = (soccer_model_msgs__msg__Robot__Sequence *)allocator.allocate(sizeof(soccer_model_msgs__msg__Robot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = soccer_model_msgs__msg__Robot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
soccer_model_msgs__msg__Robot__Sequence__destroy(soccer_model_msgs__msg__Robot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    soccer_model_msgs__msg__Robot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
soccer_model_msgs__msg__Robot__Sequence__are_equal(const soccer_model_msgs__msg__Robot__Sequence * lhs, const soccer_model_msgs__msg__Robot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!soccer_model_msgs__msg__Robot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
soccer_model_msgs__msg__Robot__Sequence__copy(
  const soccer_model_msgs__msg__Robot__Sequence * input,
  soccer_model_msgs__msg__Robot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(soccer_model_msgs__msg__Robot);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    soccer_model_msgs__msg__Robot * data =
      (soccer_model_msgs__msg__Robot *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!soccer_model_msgs__msg__Robot__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          soccer_model_msgs__msg__Robot__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!soccer_model_msgs__msg__Robot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
