#!/usr/bin/env python
import random
number = random.randint(-10000, 10000)
last = number % 10
if number < 0:
    last = -(last)
if last > 5:
    print(f"Last digit of {number} is {last} and is greater than 5")
elif last == 0:
    print(f"Last digit of {number} is 0 and is 0")
else:
    print(f"Last digit of {number} is {last} and is less than 6 and not 0")
