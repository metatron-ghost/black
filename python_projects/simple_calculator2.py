#!/usr/bin/env python
num1, sign, num2 = input("Enter a simple maths problem, put space between numbers: ").split()
num1, num2 = int(num1), int(num2)
if sign == '+':
    print(f"{num1} {sign} {num2} = {num1 + num2}")
elif sign == '-':
    print(f"{num1} {sign} {num2} = {num1 - num2}")
elif sign == '/':
    print(f"{num1} {sign} {num2} = {num1 / num2}")
elif sign == '*':
    print(f"{num1} {sign} {num2} = {num1 * num2}")
else :
    print("Error in calculation")
