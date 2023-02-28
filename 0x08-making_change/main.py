#!/usr/bin/python3
"""
Main file for testing
"""


import time


makeChange = __import__('0-making_change').makeChange

start = time.time()

for i in range(10):
    makeChange([2, 4, 6, 10], 1278653)

end = time.time()

avg = (end - start) / 10

if avg > 3:
    print("Runtime too long")
else:
    print("OK")
    
