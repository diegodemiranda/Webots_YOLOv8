// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from soccer_vision_2d_msgs:msg/Ball.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "soccer_vision_2d_msgs/msg/detail/ball__struct.h"
#include "soccer_vision_2d_msgs/msg/detail/ball__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool vision_msgs__msg__bounding_box2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * vision_msgs__msg__bounding_box2_d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool vision_msgs__msg__point2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * vision_msgs__msg__point2_d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool soccer_vision_attribute_msgs__msg__confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * soccer_vision_attribute_msgs__msg__confidence__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool soccer_vision_2d_msgs__msg__ball__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("soccer_vision_2d_msgs.msg._ball.Ball", full_classname_dest, 36) == 0);
  }
  soccer_vision_2d_msgs__msg__Ball * ros_message = _ros_message;
  {  // bb
    PyObject * field = PyObject_GetAttrString(_pymsg, "bb");
    if (!field) {
      return false;
    }
    if (!vision_msgs__msg__bounding_box2_d__convert_from_py(field, &ros_message->bb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // center
    PyObject * field = PyObject_GetAttrString(_pymsg, "center");
    if (!field) {
      return false;
    }
    if (!vision_msgs__msg__point2_d__convert_from_py(field, &ros_message->center)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    if (!soccer_vision_attribute_msgs__msg__confidence__convert_from_py(field, &ros_message->confidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * soccer_vision_2d_msgs__msg__ball__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Ball */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("soccer_vision_2d_msgs.msg._ball");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Ball");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  soccer_vision_2d_msgs__msg__Ball * ros_message = (soccer_vision_2d_msgs__msg__Ball *)raw_ros_message;
  {  // bb
    PyObject * field = NULL;
    field = vision_msgs__msg__bounding_box2_d__convert_to_py(&ros_message->bb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center
    PyObject * field = NULL;
    field = vision_msgs__msg__point2_d__convert_to_py(&ros_message->center);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence
    PyObject * field = NULL;
    field = soccer_vision_attribute_msgs__msg__confidence__convert_to_py(&ros_message->confidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
