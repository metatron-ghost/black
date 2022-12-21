#!/usr/bin/env python
def print_last_digit(number):
    if number >= 0:
        last = number % 10
    else:
        number = -(number)
        last = number % 10
    print(last,end="")
    return last
