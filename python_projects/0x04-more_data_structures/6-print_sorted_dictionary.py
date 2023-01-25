#!/usr/bin/env python
def print_sorted_dictionary(a_dictionary):
    new_list = list(a_dictionary.keys())
    new_list.sort()
    for i in new_list:
        print(f"{i} : {a_dictionary.get(i)}")
