#!/usr/bin/env python
import sys
sum = 0
if len(sys.argv) < 2:
    print(sum)
else:
    count = len(sys.argv)
    for i in range(1,count):
        num = int(sys.argv[i])
        sum += num
    print(sum)
