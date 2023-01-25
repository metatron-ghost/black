#!/usr/bin/env python
def safe_print_list(my_list=[], x=0):
    try:
        print(my_list[:x])
        return x
    except IndexError:
        if x > len(my_list):
            print(my_list)
            return len(my_list)
