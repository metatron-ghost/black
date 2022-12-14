#!/usr/bin/env python
num = input('How tall is the tree? : ')
num = int(num)
length = num + 1
point, count = 1, 1
for i in range(2,length):
    count += 2
start, stop = (count + 1) / 2, (count + 1) / 2
while (point < length):
    for j in range(1,count + 1):
        if (j < start) or (j > stop):
            print(" ",end = " ")
        else :
            print("#",end = " ")
    print("\n")
    start -= 1
    stop += 1
    point += 1
if (point == length):
    for k in range(1,count + 1):
        if (k == ((count + 1) / 2)):
            print("#",end =" ")
        else :
            print(" ",end =" ")
print("\n")
