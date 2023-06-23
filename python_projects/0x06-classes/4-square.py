#!/usr/bin/env python3
class Square:
	"""
	A Class that defines a square
	"""
	@property
	def size(self):
		"""
		a property getter
		"""
		return self.__size

	@size.setter
	def size(self, value):
		"""
		sets the properties of the square
		"""
		if not isinstance(value, int):
			raise TypeError("size must be integer")
		elif value < 0:
			raise ValueError("size must be >= 0")
		self.__size = value

	def __init__(self, size=0):
		"""
		initialises a private attribute
		"""
		self.size = size

	def area(self):
		"""
		Return the area of the square
		"""
		return self.__size * self.__size
