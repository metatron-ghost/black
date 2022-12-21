#!/usr/bin/env python
def uppercase(str):
    for i in str:
        i = ord(i)
        if i >= 97 and i <= 122:
            i = i - 32
        print(chr(i),end="")
    print()
