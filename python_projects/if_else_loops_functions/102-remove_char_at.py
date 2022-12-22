#!/usr/bin/env python
def remove_char_at(str, n):
    if n < 0 or n > len(str):
        return str
    else:
        str2 = ""
        for i in range(0,len(str)):
            if i != n:
                str2 = str2 + str[i]
        return str2

