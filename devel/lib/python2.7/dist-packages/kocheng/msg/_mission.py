# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kocheng/mission.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class mission(genpy.Message):
  _md5sum = "2ed7d7d69b51a422c56195bb0025beea"
  _type = "kocheng/mission"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool navigation_status
bool go_to_speed_status
bool speed_status
"""
  __slots__ = ['navigation_status','go_to_speed_status','speed_status']
  _slot_types = ['bool','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       navigation_status,go_to_speed_status,speed_status

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(mission, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.navigation_status is None:
        self.navigation_status = False
      if self.go_to_speed_status is None:
        self.go_to_speed_status = False
      if self.speed_status is None:
        self.speed_status = False
    else:
      self.navigation_status = False
      self.go_to_speed_status = False
      self.speed_status = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3B().pack(_x.navigation_status, _x.go_to_speed_status, _x.speed_status))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 3
      (_x.navigation_status, _x.go_to_speed_status, _x.speed_status,) = _get_struct_3B().unpack(str[start:end])
      self.navigation_status = bool(self.navigation_status)
      self.go_to_speed_status = bool(self.go_to_speed_status)
      self.speed_status = bool(self.speed_status)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3B().pack(_x.navigation_status, _x.go_to_speed_status, _x.speed_status))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 3
      (_x.navigation_status, _x.go_to_speed_status, _x.speed_status,) = _get_struct_3B().unpack(str[start:end])
      self.navigation_status = bool(self.navigation_status)
      self.go_to_speed_status = bool(self.go_to_speed_status)
      self.speed_status = bool(self.speed_status)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3B = None
def _get_struct_3B():
    global _struct_3B
    if _struct_3B is None:
        _struct_3B = struct.Struct("<3B")
    return _struct_3B
