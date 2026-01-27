# generated from rosidl_generator_py/resource/_idl.py.em
# with input from soccer_vision_attribute_msgs:msg/Robot.idl
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
        'NUMBER_UNKNOWN': 0,
        'TEAM_UNKNOWN': 0,
        'TEAM_OWN': 1,
        'TEAM_OPPONENT': 2,
        'STATE_UNKNOWN': 0,
        'STATE_STANDING': 1,
        'STATE_FALLEN': 2,
        'STATE_KICKING': 3,
        'STATE_INACTIVE': 4,
        'FACING_UNKNOWN': 0,
        'FACING_THIS_WAY': 1,
        'FACING_AWAY': 2,
        'FACING_LEFT': 3,
        'FACING_RIGHT': 4,
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
                'soccer_vision_attribute_msgs.msg.Robot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NUMBER_UNKNOWN': cls.__constants['NUMBER_UNKNOWN'],
            'TEAM_UNKNOWN': cls.__constants['TEAM_UNKNOWN'],
            'TEAM_OWN': cls.__constants['TEAM_OWN'],
            'TEAM_OPPONENT': cls.__constants['TEAM_OPPONENT'],
            'STATE_UNKNOWN': cls.__constants['STATE_UNKNOWN'],
            'STATE_STANDING': cls.__constants['STATE_STANDING'],
            'STATE_FALLEN': cls.__constants['STATE_FALLEN'],
            'STATE_KICKING': cls.__constants['STATE_KICKING'],
            'STATE_INACTIVE': cls.__constants['STATE_INACTIVE'],
            'FACING_UNKNOWN': cls.__constants['FACING_UNKNOWN'],
            'FACING_THIS_WAY': cls.__constants['FACING_THIS_WAY'],
            'FACING_AWAY': cls.__constants['FACING_AWAY'],
            'FACING_LEFT': cls.__constants['FACING_LEFT'],
            'FACING_RIGHT': cls.__constants['FACING_RIGHT'],
        }

    @property
    def NUMBER_UNKNOWN(self):
        """Message constant 'NUMBER_UNKNOWN'."""
        return Metaclass_Robot.__constants['NUMBER_UNKNOWN']

    @property
    def TEAM_UNKNOWN(self):
        """Message constant 'TEAM_UNKNOWN'."""
        return Metaclass_Robot.__constants['TEAM_UNKNOWN']

    @property
    def TEAM_OWN(self):
        """Message constant 'TEAM_OWN'."""
        return Metaclass_Robot.__constants['TEAM_OWN']

    @property
    def TEAM_OPPONENT(self):
        """Message constant 'TEAM_OPPONENT'."""
        return Metaclass_Robot.__constants['TEAM_OPPONENT']

    @property
    def STATE_UNKNOWN(self):
        """Message constant 'STATE_UNKNOWN'."""
        return Metaclass_Robot.__constants['STATE_UNKNOWN']

    @property
    def STATE_STANDING(self):
        """Message constant 'STATE_STANDING'."""
        return Metaclass_Robot.__constants['STATE_STANDING']

    @property
    def STATE_FALLEN(self):
        """Message constant 'STATE_FALLEN'."""
        return Metaclass_Robot.__constants['STATE_FALLEN']

    @property
    def STATE_KICKING(self):
        """Message constant 'STATE_KICKING'."""
        return Metaclass_Robot.__constants['STATE_KICKING']

    @property
    def STATE_INACTIVE(self):
        """Message constant 'STATE_INACTIVE'."""
        return Metaclass_Robot.__constants['STATE_INACTIVE']

    @property
    def FACING_UNKNOWN(self):
        """Message constant 'FACING_UNKNOWN'."""
        return Metaclass_Robot.__constants['FACING_UNKNOWN']

    @property
    def FACING_THIS_WAY(self):
        """Message constant 'FACING_THIS_WAY'."""
        return Metaclass_Robot.__constants['FACING_THIS_WAY']

    @property
    def FACING_AWAY(self):
        """Message constant 'FACING_AWAY'."""
        return Metaclass_Robot.__constants['FACING_AWAY']

    @property
    def FACING_LEFT(self):
        """Message constant 'FACING_LEFT'."""
        return Metaclass_Robot.__constants['FACING_LEFT']

    @property
    def FACING_RIGHT(self):
        """Message constant 'FACING_RIGHT'."""
        return Metaclass_Robot.__constants['FACING_RIGHT']


class Robot(metaclass=Metaclass_Robot):
    """
    Message class 'Robot'.

    Constants:
      NUMBER_UNKNOWN
      TEAM_UNKNOWN
      TEAM_OWN
      TEAM_OPPONENT
      STATE_UNKNOWN
      STATE_STANDING
      STATE_FALLEN
      STATE_KICKING
      STATE_INACTIVE
      FACING_UNKNOWN
      FACING_THIS_WAY
      FACING_AWAY
      FACING_LEFT
      FACING_RIGHT
    """

    __slots__ = [
        '_player_number',
        '_team',
        '_state',
        '_facing',
    ]

    _fields_and_field_types = {
        'player_number': 'uint8',
        'team': 'uint8',
        'state': 'uint8',
        'facing': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.player_number = kwargs.get('player_number', int())
        self.team = kwargs.get('team', int())
        self.state = kwargs.get('state', int())
        self.facing = kwargs.get('facing', int())

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
        if self.player_number != other.player_number:
            return False
        if self.team != other.team:
            return False
        if self.state != other.state:
            return False
        if self.facing != other.facing:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def player_number(self):
        """Message field 'player_number'."""
        return self._player_number

    @player_number.setter
    def player_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'player_number' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'player_number' field must be an unsigned integer in [0, 255]"
        self._player_number = value

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

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @builtins.property
    def facing(self):
        """Message field 'facing'."""
        return self._facing

    @facing.setter
    def facing(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'facing' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'facing' field must be an unsigned integer in [0, 255]"
        self._facing = value
