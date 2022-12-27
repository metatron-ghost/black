#!/usr/bin/env python
mulList = [[0]* 10 for i in range(10)]
for i in range(10):
    for j in range(10):
        mulList[i][j] = (i + 1) * (j + 1)
        print(f"{mulList[i][j]:3d}",end=" ")
    print("\n")


