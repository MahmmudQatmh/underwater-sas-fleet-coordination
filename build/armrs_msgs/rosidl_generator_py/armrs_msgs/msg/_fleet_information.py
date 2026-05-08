# generated from rosidl_generator_py/resource/_idl.py.em
# with input from armrs_msgs:msg/FleetInformation.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'robot_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FleetInformation(type):
    """Metaclass of message 'FleetInformation'."""

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
            module = import_type_support('armrs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'armrs_msgs.msg.FleetInformation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fleet_information
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fleet_information
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fleet_information
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fleet_information
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fleet_information

            from geometry_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FleetInformation(metaclass=Metaclass_FleetInformation):
    """Message class 'FleetInformation'."""

    __slots__ = [
        '_robot_ids',
        '_fleet_size',
        '_centroid_formation',
    ]

    _fields_and_field_types = {
        'robot_ids': 'sequence<int64>',
        'fleet_size': 'int64',
        'centroid_formation': 'geometry_msgs/Pose2D',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_ids = array.array('q', kwargs.get('robot_ids', []))
        self.fleet_size = kwargs.get('fleet_size', int())
        from geometry_msgs.msg import Pose2D
        self.centroid_formation = kwargs.get('centroid_formation', Pose2D())

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
        if self.robot_ids != other.robot_ids:
            return False
        if self.fleet_size != other.fleet_size:
            return False
        if self.centroid_formation != other.centroid_formation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_ids(self):
        """Message field 'robot_ids'."""
        return self._robot_ids

    @robot_ids.setter
    def robot_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'robot_ids' array.array() must have the type code of 'q'"
            self._robot_ids = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'robot_ids' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._robot_ids = array.array('q', value)

    @builtins.property
    def fleet_size(self):
        """Message field 'fleet_size'."""
        return self._fleet_size

    @fleet_size.setter
    def fleet_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fleet_size' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'fleet_size' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._fleet_size = value

    @builtins.property
    def centroid_formation(self):
        """Message field 'centroid_formation'."""
        return self._centroid_formation

    @centroid_formation.setter
    def centroid_formation(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'centroid_formation' field must be a sub message of type 'Pose2D'"
        self._centroid_formation = value
