#!/usr/bin/env python
def safe_print_division(a, b):
    try:
        print("Inside result: {}".format(a/b))
        return a/b
    except ZeroDivisionError:
        print("Inside results: None")
        return None
