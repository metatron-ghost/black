#!/usr/bin/env python
for i in range(122,96,-1):
    if i % 2 != 0:
        i = i - 32
    print(chr(i),end="")
