# generated from rosidl_generator_py/resource/_idl.py.em
# with input from soccer_vision_attribute_msgs:msg/Goalpost.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Goalpost(type):
    """Metaclass of message 'Goalpost'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SIDE_UNKNOWN': 0,
        'SIDE_LEFT': 1,
        'SIDE_RIGHT': 2,
        'TEAM_UNKNOWN': 0,
        'TEAM_OWN': 1,
        'TEAM_OPPONENT': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('soccer_vision_attribute_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'soccer_vision_attribute_msgs.msg.Goalpost')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__goalpost
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__goalpost
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__goalpost
            cls._TYPE_SUPPORT = module.type_support_msg__msg__goalpost
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__goalpost

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SIDE_UNKNOWN': cls.__constants['SIDE_UNKNOWN'],
            'SIDE_LEFT': cls.__constants['SIDE_LEFT'],
            'SIDE_RIGHT': cls.__constants['SIDE_RIGHT'],
            'TEAM_UNKNOWN': cls.__constants['TEAM_UNKNOWN'],
            'TEAM_OWN': cls.__constants['TEAM_OWN'],
            'TEAM_OPPONENT': cls.__constants['TEAM_OPPONENT'],
        }

    @property
    def SIDE_UNKNOWN(self):
        """Message constant 'SIDE_UNKNOWN'."""
        return Metaclass_Goalpost.__constants['SIDE_UNKNOWN']

    @property
    def SIDE_LEFT(self):
        """Message constant 'SIDE_LEFT'."""
        return Metaclass_Goalpost.__constants['SIDE_LEFT']

    @property
    def SIDE_RIGHT(self):
        """Message constant 'SIDE_RIGHT'."""
        return Metaclass_Goalpost.__constants['SIDE_RIGHT']

    @property
    def TEAM_UNKNOWN(self):
        """Message constant 'TEAM_UNKNOWN'."""
        return Metaclass_Goalpost.__constants['TEAM_UNKNOWN']

    @property
    def TEAM_OWN(self):
        """Message constant 'TEAM_OWN'."""
        return Metaclass_Goalpost.__constants['TEAM_OWN']

    @property
    def TEAM_OPPONENT(self):
        """Message constant 'TEAM_OPPONENT'."""
        return Metaclass_Goalpost.__constants['TEAM_OPPONENT']


class Goalpost(metaclass=Metaclass_Goalpost):
    """
    Message class 'Goalpost'.

    Constants:
      SIDE_UNKNOWN
      SIDE_LEFT
      SIDE_RIGHT
      TEAM_UNKNOWN
      TEAM_OWN
      TEAM_OPPONENT
    """

    __slots__ = [
        '_side',
        '_team',
    ]

    _fields_and_field_types = {
        'side': 'uint8',
        'team': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.side = kwargs.get('side', int())
        self.team = kwargs.get('team', int())

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
        if self.side != other.side:
            return False
        if self.team != other.team:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def side(self):
        """Message field 'side'."""
        return self._side

    @side.setter
    def side(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'side' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'side' field must be an unsigned integer in [0, 255]"
        self._side = value

    @builtins.property
    def team(self):
        """Message field 'team'."""
        return self._team

    @team.setter
    def team(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'team' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'team' field must be an unsigned integer in [0, 255]"
        self._team = value
