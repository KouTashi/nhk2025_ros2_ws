# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wit_msgs:msg/ImuGpsRaw.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'acc'
# Member 'gyro'
# Member 'rpy'
# Member 'mag'
# Member 'ps'
# Member 'quarternion'
# Member 'dop'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImuGpsRaw(type):
    """Metaclass of message 'ImuGpsRaw'."""

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
            module = import_type_support('wit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wit_msgs.msg.ImuGpsRaw')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__imu_gps_raw
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__imu_gps_raw
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__imu_gps_raw
            cls._TYPE_SUPPORT = module.type_support_msg__msg__imu_gps_raw
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__imu_gps_raw

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImuGpsRaw(metaclass=Metaclass_ImuGpsRaw):
    """Message class 'ImuGpsRaw'."""

    __slots__ = [
        '_header',
        '_time',
        '_acc',
        '_gyro',
        '_rpy',
        '_mag',
        '_ps',
        '_temperature',
        '_altitude',
        '_ap',
        '_latitude',
        '_longtitude',
        '_gpsh',
        '_gpsy',
        '_gpsv',
        '_quarternion',
        '_sn',
        '_dop',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'time': 'double',
        'acc': 'sequence<double>',
        'gyro': 'sequence<double>',
        'rpy': 'sequence<double>',
        'mag': 'sequence<double>',
        'ps': 'sequence<uint16>',
        'temperature': 'double',
        'altitude': 'double',
        'ap': 'double',
        'latitude': 'double',
        'longtitude': 'double',
        'gpsh': 'double',
        'gpsy': 'double',
        'gpsv': 'double',
        'quarternion': 'sequence<double>',
        'sn': 'uint8',
        'dop': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.time = kwargs.get('time', float())
        self.acc = array.array('d', kwargs.get('acc', []))
        self.gyro = array.array('d', kwargs.get('gyro', []))
        self.rpy = array.array('d', kwargs.get('rpy', []))
        self.mag = array.array('d', kwargs.get('mag', []))
        self.ps = array.array('H', kwargs.get('ps', []))
        self.temperature = kwargs.get('temperature', float())
        self.altitude = kwargs.get('altitude', float())
        self.ap = kwargs.get('ap', float())
        self.latitude = kwargs.get('latitude', float())
        self.longtitude = kwargs.get('longtitude', float())
        self.gpsh = kwargs.get('gpsh', float())
        self.gpsy = kwargs.get('gpsy', float())
        self.gpsv = kwargs.get('gpsv', float())
        self.quarternion = array.array('d', kwargs.get('quarternion', []))
        self.sn = kwargs.get('sn', int())
        self.dop = array.array('d', kwargs.get('dop', []))

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
        if self.header != other.header:
            return False
        if self.time != other.time:
            return False
        if self.acc != other.acc:
            return False
        if self.gyro != other.gyro:
            return False
        if self.rpy != other.rpy:
            return False
        if self.mag != other.mag:
            return False
        if self.ps != other.ps:
            return False
        if self.temperature != other.temperature:
            return False
        if self.altitude != other.altitude:
            return False
        if self.ap != other.ap:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longtitude != other.longtitude:
            return False
        if self.gpsh != other.gpsh:
            return False
        if self.gpsy != other.gpsy:
            return False
        if self.gpsv != other.gpsv:
            return False
        if self.quarternion != other.quarternion:
            return False
        if self.sn != other.sn:
            return False
        if self.dop != other.dop:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time = value

    @builtins.property
    def acc(self):
        """Message field 'acc'."""
        return self._acc

    @acc.setter
    def acc(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'acc' array.array() must have the type code of 'd'"
            self._acc = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'acc' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._acc = array.array('d', value)

    @builtins.property
    def gyro(self):
        """Message field 'gyro'."""
        return self._gyro

    @gyro.setter
    def gyro(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'gyro' array.array() must have the type code of 'd'"
            self._gyro = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'gyro' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._gyro = array.array('d', value)

    @builtins.property
    def rpy(self):
        """Message field 'rpy'."""
        return self._rpy

    @rpy.setter
    def rpy(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'rpy' array.array() must have the type code of 'd'"
            self._rpy = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'rpy' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rpy = array.array('d', value)

    @builtins.property
    def mag(self):
        """Message field 'mag'."""
        return self._mag

    @mag.setter
    def mag(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'mag' array.array() must have the type code of 'd'"
            self._mag = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'mag' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._mag = array.array('d', value)

    @builtins.property
    def ps(self):
        """Message field 'ps'."""
        return self._ps

    @ps.setter
    def ps(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'ps' array.array() must have the type code of 'H'"
            self._ps = value
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
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'ps' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._ps = array.array('H', value)

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'temperature' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._temperature = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._altitude = value

    @builtins.property
    def ap(self):
        """Message field 'ap'."""
        return self._ap

    @ap.setter
    def ap(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ap' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ap' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ap = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longtitude(self):
        """Message field 'longtitude'."""
        return self._longtitude

    @longtitude.setter
    def longtitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longtitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longtitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longtitude = value

    @builtins.property
    def gpsh(self):
        """Message field 'gpsh'."""
        return self._gpsh

    @gpsh.setter
    def gpsh(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gpsh' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gpsh' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gpsh = value

    @builtins.property
    def gpsy(self):
        """Message field 'gpsy'."""
        return self._gpsy

    @gpsy.setter
    def gpsy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gpsy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gpsy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gpsy = value

    @builtins.property
    def gpsv(self):
        """Message field 'gpsv'."""
        return self._gpsv

    @gpsv.setter
    def gpsv(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gpsv' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gpsv' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gpsv = value

    @builtins.property
    def quarternion(self):
        """Message field 'quarternion'."""
        return self._quarternion

    @quarternion.setter
    def quarternion(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'quarternion' array.array() must have the type code of 'd'"
            self._quarternion = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'quarternion' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._quarternion = array.array('d', value)

    @builtins.property
    def sn(self):
        """Message field 'sn'."""
        return self._sn

    @sn.setter
    def sn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sn' field must be an unsigned integer in [0, 255]"
        self._sn = value

    @builtins.property
    def dop(self):
        """Message field 'dop'."""
        return self._dop

    @dop.setter
    def dop(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'dop' array.array() must have the type code of 'd'"
            self._dop = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'dop' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._dop = array.array('d', value)
