#!/usr/bin/env python
investment = input('Enter your investment amount: $ ')
investment = float(investment)
interest = input('Enter your annual interest rate (%): ')
interest = float(interest)
interest = interest / 100
initial = investment
for i in range(11):
    investment += (investment * interest)
print(f"After 10 years your Investment of ${initial:.2f} would have earned ${investment - initial:.2f} to become ${investment:.2f}.") 
