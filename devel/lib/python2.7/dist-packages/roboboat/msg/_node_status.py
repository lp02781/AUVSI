# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from roboboat/node_status.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class node_status(genpy.Message):
  _md5sum = "d36a6a4442f3498759f12ca2b580445e"
  _type = "roboboat/node_status"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool override_status
bool image_front_status
bool image_back_status
bool green_hough_status
bool red_hough_status
bool blue_hough_status

"""
  __slots__ = ['override_status','image_front_status','image_back_status','green_hough_status','red_hough_status','blue_hough_status']
  _slot_types = ['bool','bool','bool','bool','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       override_status,image_front_status,image_back_status,green_hough_status,red_hough_status,blue_hough_status

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(node_status, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.override_status is None:
        self.override_status = False
      if self.image_front_status is None:
        self.image_front_status = False
      if self.image_back_status is None:
        self.image_back_status = False
      if self.green_hough_status is None:
        self.green_hough_status = False
      if self.red_hough_status is None:
        self.red_hough_status = False
      if self.blue_hough_status is None:
        self.blue_hough_status = False
    else:
      self.override_status = False
      self.image_front_status = False
      self.image_back_status = False
      self.green_hough_status = False
      self.red_hough_status = False
      self.blue_hough_status = False

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
      buff.write(_get_struct_6B().pack(_x.override_status, _x.image_front_status, _x.image_back_status, _x.green_hough_status, _x.red_hough_status, _x.blue_hough_status))
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
      end += 6
      (_x.override_status, _x.image_front_status, _x.image_back_status, _x.green_hough_status, _x.red_hough_status, _x.blue_hough_status,) = _get_struct_6B().unpack(str[start:end])
      self.override_status = bool(self.override_status)
      self.image_front_status = bool(self.image_front_status)
      self.image_back_status = bool(self.image_back_status)
      self.green_hough_status = bool(self.green_hough_status)
      self.red_hough_status = bool(self.red_hough_status)
      self.blue_hough_status = bool(self.blue_hough_status)
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
      buff.write(_get_struct_6B().pack(_x.override_status, _x.image_front_status, _x.image_back_status, _x.green_hough_status, _x.red_hough_status, _x.blue_hough_status))
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
      end += 6
      (_x.override_status, _x.image_front_status, _x.image_back_status, _x.green_hough_status, _x.red_hough_status, _x.blue_hough_status,) = _get_struct_6B().unpack(str[start:end])
      self.override_status = bool(self.override_status)
      self.image_front_status = bool(self.image_front_status)
      self.image_back_status = bool(self.image_back_status)
      self.green_hough_status = bool(self.green_hough_status)
      self.red_hough_status = bool(self.red_hough_status)
      self.blue_hough_status = bool(self.blue_hough_status)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6B = None
def _get_struct_6B():
    global _struct_6B
    if _struct_6B is None:
        _struct_6B = struct.Struct("<6B")
    return _struct_6B
