#!/usr/bin/env python
def no_c(my_string):
    new_str = ""
    for i in range(0,len(my_string)):
        if my_string[i] != 'C' and my_string[i] != 'c':
            new_str = new_str + my_string[i]
    return new_str
