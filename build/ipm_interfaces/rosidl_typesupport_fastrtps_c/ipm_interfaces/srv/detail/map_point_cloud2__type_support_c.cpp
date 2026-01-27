// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ipm_interfaces:srv/MapPointCloud2.idl
// generated code does not contain a copyright notice
#include "ipm_interfaces/srv/detail/map_point_cloud2__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ipm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ipm_interfaces/srv/detail/map_point_cloud2__struct.h"
#include "ipm_interfaces/srv/detail/map_point_cloud2__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // output_frame_id, plane_frame_id
#include "rosidl_runtime_c/string_functions.h"  // output_frame_id, plane_frame_id
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // points
#include "shape_msgs/msg/detail/plane__functions.h"  // plane

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ipm_interfaces
size_t get_serialized_size_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ipm_interfaces
size_t max_serialized_size_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ipm_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ipm_interfaces
size_t get_serialized_size_shape_msgs__msg__Plane(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ipm_interfaces
size_t max_serialized_size_shape_msgs__msg__Plane(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ipm_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shape_msgs, msg, Plane)();


using _MapPointCloud2_Request__ros_msg_type = ipm_interfaces__srv__MapPointCloud2_Request;

static bool _MapPointCloud2_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MapPointCloud2_Request__ros_msg_type * ros_message = static_cast<const _MapPointCloud2_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: plane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, shape_msgs, msg, Plane
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->plane, cdr))
    {
      return false;
    }
  }

  // Field name: points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->points, cdr))
    {
      return false;
    }
  }

  // Field name: plane_frame_id
  {
    const rosidl_runtime_c__String * str = &ros_message->plane_frame_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: output_frame_id
  {
    const rosidl_runtime_c__String * str = &ros_message->output_frame_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _MapPointCloud2_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MapPointCloud2_Request__ros_msg_type * ros_message = static_cast<_MapPointCloud2_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: plane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, shape_msgs, msg, Plane
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->plane))
    {
      return false;
    }
  }

  // Field name: points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->points))
    {
      return false;
    }
  }

  // Field name: plane_frame_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->plane_frame_id.data) {
      rosidl_runtime_c__String__init(&ros_message->plane_frame_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->plane_frame_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'plane_frame_id'\n");
      return false;
    }
  }

  // Field name: output_frame_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->output_frame_id.data) {
      rosidl_runtime_c__String__init(&ros_message->output_frame_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->output_frame_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'output_frame_id'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ipm_interfaces
size_t get_serialized_size_ipm_interfaces__srv__MapPointCloud2_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MapPointCloud2_Request__ros_msg_type * ros_message = static_cast<const _MapPointCloud2_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name plane

  current_alignment += get_serialized_size_shape_msgs__msg__Plane(
    &(ros_message->plane), current_alignment);
  // field.name points

  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->points), current_alignment);
  // field.name plane_frame_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->plane_frame_id.size + 1);
  // field.name output_frame_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->output_frame_id.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MapPointCloud2_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ipm_interfaces__srv__MapPointCloud2_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ipm_interfaces
size_t max_serialized_size_ipm_interfaces__srv__MapPointCloud2_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: plane
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_shape_msgs__msg__Plane(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: points
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: plane_frame_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: output_frame_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ipm_interfaces__srv__MapPointCloud2_Request;
    is_plain =
      (
      offsetof(DataType, output_frame_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MapPointCloud2_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ipm_interfaces__srv__MapPointCloud2_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MapPointCloud2_Request = {
  "ipm_interfaces::srv",
  "MapPointCloud2_Request",
  _MapPointCloud2_Request__cdr_serialize,
  _MapPointCloud2_Request__cdr_deserialize,
  _MapPointCloud2_Request__get_serialized_size,
  _MapPointCloud2_Request__max_serialized_size
};

static rosidl_message_type_support_t _MapPointCloud2_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MapPointCloud2_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ipm_interfaces, srv, MapPointCloud2_Request)() {
  return &_MapPointCloud2_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ipm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ipm_interfaces/srv/detail/map_point_cloud2__struct.h"
// already included above
// #include "ipm_interfaces/srv/detail/map_point_cloud2__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // points

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ipm_interfaces
size_t get_serialized_size_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ipm_interfaces
size_t max_serialized_size_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ipm_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2)();


using _MapPointCloud2_Response__ros_msg_type = ipm_interfaces__srv__MapPointCloud2_Response;

static bool _MapPointCloud2_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MapPointCloud2_Response__ros_msg_type * ros_message = static_cast<const _MapPointCloud2_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->points, cdr))
    {
      return false;
    }
  }

  // Field name: result
  {
    cdr << ros_message->result;
  }

  return true;
}

static bool _MapPointCloud2_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MapPointCloud2_Response__ros_msg_type * ros_message = static_cast<_MapPointCloud2_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->points))
    {
      return false;
    }
  }

  // Field name: result
  {
    cdr >> ros_message->result;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ipm_interfaces
size_t get_serialized_size_ipm_interfaces__srv__MapPointCloud2_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MapPointCloud2_Response__ros_msg_type * ros_message = static_cast<const _MapPointCloud2_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name points

  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->points), current_alignment);
  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MapPointCloud2_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ipm_interfaces__srv__MapPointCloud2_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ipm_interfaces
size_t max_serialized_size_ipm_interfaces__srv__MapPointCloud2_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: points
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ipm_interfaces__srv__MapPointCloud2_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MapPointCloud2_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ipm_interfaces__srv__MapPointCloud2_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MapPointCloud2_Response = {
  "ipm_interfaces::srv",
  "MapPointCloud2_Response",
  _MapPointCloud2_Response__cdr_serialize,
  _MapPointCloud2_Response__cdr_deserialize,
  _MapPointCloud2_Response__get_serialized_size,
  _MapPointCloud2_Response__max_serialized_size
};

static rosidl_message_type_support_t _MapPointCloud2_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MapPointCloud2_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ipm_interfaces, srv, MapPointCloud2_Response)() {
  return &_MapPointCloud2_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ipm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ipm_interfaces/srv/map_point_cloud2.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MapPointCloud2__callbacks = {
  "ipm_interfaces::srv",
  "MapPointCloud2",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ipm_interfaces, srv, MapPointCloud2_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ipm_interfaces, srv, MapPointCloud2_Response)(),
};

static rosidl_service_type_support_t MapPointCloud2__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MapPointCloud2__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ipm_interfaces, srv, MapPointCloud2)() {
  return &MapPointCloud2__handle;
}

#if defined(__cplusplus)
}
#endif
