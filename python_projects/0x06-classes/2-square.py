#!/usr/bin/env python3
class Square:
    """
    A class with only one attribute
    """
    def __init__(self, size=0):
        """
        initialises a private attribute
        """
        self.__size = size
        if not isinstance(size, int):
            raise TypeError("size must be integer")
        elif size < 0:
            raise ValueError("size must be >= 0")

