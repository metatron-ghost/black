#!/usr/bin/env python
if __name__ == "__main__":
    import sys
    from calculator_1 import add, sub, mul, div

    if len(sys.argv) != 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)
    else:
        a = int(sys.argv[1])
        b = int(sys.argv[3])
        if sys.argv[2] == '+':
            print(f"{a} + {b} = {add(a,b)}")
        elif sys.argv[2] == '-':
            print(f"{a} - {b} = {sub(a,b)}")
        elif sys.argv[2] == '/':
            print(f"{a} / {b} = {div(a,b)}")
        elif sys.argv[2] == '*':
            print(f"{a} * {b} = {mul(a,b)}")
        else:
            print("Unknown operator. Available operators: +, -, * and /")
            sys.exit(1)
