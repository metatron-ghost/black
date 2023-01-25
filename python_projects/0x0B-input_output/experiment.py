#!/usr/bin/env python
with open("experiment.txt", mode = "w", encoding = "utf-8") as f:
    f.write("Hello there!\nThis is my new python experiment\nBy Kudzai Zoh Zoraunye!")
with open("experiment.txt", encoding = "utf-8") as f:
    print(f.read())
