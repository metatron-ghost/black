#!/usr/bin/env
def print_reversed_list_integer(my_list=[]):
    my_list.reverse()
    for i in range(0, len(my_list)):
        print(f"{my_list[i]}")
