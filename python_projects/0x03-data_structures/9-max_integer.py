#!/usr/bin/env python
def max_integer(my_list=[]):
    if len(my_list) == 0:
        return

    a = my_list[0]
    for i in range(len(my_list)):
        if a < my_list[i]:
            a = my_list[i]
    return a
