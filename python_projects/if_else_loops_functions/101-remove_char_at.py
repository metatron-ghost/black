#!/usr/bin/env python
def remove_char_at(str, n):
    j = 0
    for i in str:
        if j == n:
            print("",end="")
        else:
            print(i,end="")
        j += 1
    return '' 
