#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    sort=sorted(arr)
    
    largest = 0
    smallest = 0
    
    for i in sort[:len(arr)-1]:
        smallest+=i
    
    for j in sort[1:]:
        largest+=j
        
    print(smallest, largest)
        

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)

