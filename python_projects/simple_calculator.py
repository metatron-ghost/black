#!/usr/bin/env python
num1, sign, num2 = input("Enter a simple maths problem, put space between numbers: ").split()
num1, num2 = int(num1), int(num2)
if sign == '+':
    answer = num1 + num2
    print(f"{num1} {sign} {num2} = {answer}")
elif sign == '-':
    answer = num1 - num2
    print(f"{num1} {sign} {num2} = {answer}")
elif sign == '/':
    answer = num1 / num2
    print(f"{num1} {sign} {num2} = {answer}")
elif sign == '*':
    answer = num1 * num2
    print(f"{num1} {sign} {num2} = {answer}")
else :
    print("Error in calculation")
