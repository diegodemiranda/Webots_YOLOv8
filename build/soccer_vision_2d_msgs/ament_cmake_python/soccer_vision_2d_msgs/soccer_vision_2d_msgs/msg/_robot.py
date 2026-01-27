# generated from rosidl_generator_py/resource/_idl.py.em
# with input from soccer_vision_2d_msgs:msg/Robot.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Robot(type):
    """Metaclass of message 'Robot'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('soccer_vision_2d_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'soccer_vision_2d_msgs.msg.Robot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot

            from soccer_vision_attribute_msgs.msg import Confidence
            if Confidence.__class__._TYPE_SUPPORT is None:
                Confidence.__class__.__import_type_support__()

            from soccer_vision_attribute_msgs.msg import Robot
            if Robot.__class__._TYPE_SUPPORT is None:
                Robot.__class__.__import_type_support__()

            from vision_msgs.msg import BoundingBox2D
            if BoundingBox2D.__class__._TYPE_SUPPORT is None:
                BoundingBox2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Robot(metaclass=Metaclass_Robot):
    """Message class 'Robot'."""

    __slots__ = [
        '_bb',
        '_attributes',
        '_confidence',
    ]

    _fields_and_field_types = {
        'bb': 'vision_msgs/BoundingBox2D',
        'attributes': 'soccer_vision_attribute_msgs/Robot',
        'confidence': 'soccer_vision_attribute_msgs/Confidence',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['vision_msgs', 'msg'], 'BoundingBox2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['soccer_vision_attribute_msgs', 'msg'], 'Robot'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['soccer_vision_attribute_msgs', 'msg'], 'Confidence'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from vision_msgs.msg import BoundingBox2D
        self.bb = kwargs.get('bb', BoundingBox2D())
        from soccer_vision_attribute_msgs.msg import Robot
        self.attributes = kwargs.get('attributes', Robot())
        from soccer_vision_attribute_msgs.msg import Confidence
        self.confidence = kwargs.get('confidence', Confidence())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.bb != other.bb:
            return False
        if self.attributes != other.attributes:
            return False
        if self.confidence != other.confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bb(self):
        """Message field 'bb'."""
        return self._bb

    @bb.setter
    def bb(self, value):
        if __debug__:
            from vision_msgs.msg import BoundingBox2D
            assert \
                isinstance(value, BoundingBox2D), \
                "The 'bb' field must be a sub message of type 'BoundingBox2D'"
        self._bb = value

    @builtins.property
    def attributes(self):
        """Message field 'attributes'."""
        return self._attributes

    @attributes.setter
    def attributes(self, value):
        if __debug__:
            from soccer_vision_attribute_msgs.msg import Robot
            assert \
                isinstance(value, Robot), \
                "The 'attributes' field must be a sub message of type 'Robot'"
        self._attributes = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            from soccer_vision_attribute_msgs.msg import Confidence
            assert \
                isinstance(value, Confidence), \
                "The 'confidence' field must be a sub message of type 'Confidence'"
        self._confidence = value
