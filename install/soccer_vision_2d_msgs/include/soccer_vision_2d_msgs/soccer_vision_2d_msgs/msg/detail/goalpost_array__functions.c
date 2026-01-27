// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from soccer_vision_2d_msgs:msg/GoalpostArray.idl
// generated code does not contain a copyright notice
#include "soccer_vision_2d_msgs/msg/detail/goalpost_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `posts`
#include "soccer_vision_2d_msgs/msg/detail/goalpost__functions.h"

bool
soccer_vision_2d_msgs__msg__GoalpostArray__init(soccer_vision_2d_msgs__msg__GoalpostArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    soccer_vision_2d_msgs__msg__GoalpostArray__fini(msg);
    return false;
  }
  // posts
  if (!soccer_vision_2d_msgs__msg__Goalpost__Sequence__init(&msg->posts, 0)) {
    soccer_vision_2d_msgs__msg__GoalpostArray__fini(msg);
    return false;
  }
  return true;
}

void
soccer_vision_2d_msgs__msg__GoalpostArray__fini(soccer_vision_2d_msgs__msg__GoalpostArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // posts
  soccer_vision_2d_msgs__msg__Goalpost__Sequence__fini(&msg->posts);
}

bool
soccer_vision_2d_msgs__msg__GoalpostArray__are_equal(const soccer_vision_2d_msgs__msg__GoalpostArray * lhs, const soccer_vision_2d_msgs__msg__GoalpostArray * rhs)
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
  // posts
  if (!soccer_vision_2d_msgs__msg__Goalpost__Sequence__are_equal(
      &(lhs->posts), &(rhs->posts)))
  {
    return false;
  }
  return true;
}

bool
soccer_vision_2d_msgs__msg__GoalpostArray__copy(
  const soccer_vision_2d_msgs__msg__GoalpostArray * input,
  soccer_vision_2d_msgs__msg__GoalpostArray * output)
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
  // posts
  if (!soccer_vision_2d_msgs__msg__Goalpost__Sequence__copy(
      &(input->posts), &(output->posts)))
  {
    return false;
  }
  return true;
}

soccer_vision_2d_msgs__msg__GoalpostArray *
soccer_vision_2d_msgs__msg__GoalpostArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_2d_msgs__msg__GoalpostArray * msg = (soccer_vision_2d_msgs__msg__GoalpostArray *)allocator.allocate(sizeof(soccer_vision_2d_msgs__msg__GoalpostArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(soccer_vision_2d_msgs__msg__GoalpostArray));
  bool success = soccer_vision_2d_msgs__msg__GoalpostArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
soccer_vision_2d_msgs__msg__GoalpostArray__destroy(soccer_vision_2d_msgs__msg__GoalpostArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    soccer_vision_2d_msgs__msg__GoalpostArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
soccer_vision_2d_msgs__msg__GoalpostArray__Sequence__init(soccer_vision_2d_msgs__msg__GoalpostArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_2d_msgs__msg__GoalpostArray * data = NULL;

  if (size) {
    data = (soccer_vision_2d_msgs__msg__GoalpostArray *)allocator.zero_allocate(size, sizeof(soccer_vision_2d_msgs__msg__GoalpostArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = soccer_vision_2d_msgs__msg__GoalpostArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        soccer_vision_2d_msgs__msg__GoalpostArray__fini(&data[i - 1]);
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
soccer_vision_2d_msgs__msg__GoalpostArray__Sequence__fini(soccer_vision_2d_msgs__msg__GoalpostArray__Sequence * array)
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
      soccer_vision_2d_msgs__msg__GoalpostArray__fini(&array->data[i]);
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

soccer_vision_2d_msgs__msg__GoalpostArray__Sequence *
soccer_vision_2d_msgs__msg__GoalpostArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soccer_vision_2d_msgs__msg__GoalpostArray__Sequence * array = (soccer_vision_2d_msgs__msg__GoalpostArray__Sequence *)allocator.allocate(sizeof(soccer_vision_2d_msgs__msg__GoalpostArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = soccer_vision_2d_msgs__msg__GoalpostArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
soccer_vision_2d_msgs__msg__GoalpostArray__Sequence__destroy(soccer_vision_2d_msgs__msg__GoalpostArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    soccer_vision_2d_msgs__msg__GoalpostArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
soccer_vision_2d_msgs__msg__GoalpostArray__Sequence__are_equal(const soccer_vision_2d_msgs__msg__GoalpostArray__Sequence * lhs, const soccer_vision_2d_msgs__msg__GoalpostArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!soccer_vision_2d_msgs__msg__GoalpostArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
soccer_vision_2d_msgs__msg__GoalpostArray__Sequence__copy(
  const soccer_vision_2d_msgs__msg__GoalpostArray__Sequence * input,
  soccer_vision_2d_msgs__msg__GoalpostArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(soccer_vision_2d_msgs__msg__GoalpostArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    soccer_vision_2d_msgs__msg__GoalpostArray * data =
      (soccer_vision_2d_msgs__msg__GoalpostArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!soccer_vision_2d_msgs__msg__GoalpostArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          soccer_vision_2d_msgs__msg__GoalpostArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!soccer_vision_2d_msgs__msg__GoalpostArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
