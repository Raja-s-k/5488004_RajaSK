#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    a=0
    b=0
    c=0
    for i in arr:
        if i<0:
            a+=1
        elif i==0:
            b+=1
        else:
            c+=1
    
    print(round(c/len(arr),6), end = "\n")
    print(round(a/len(arr),6), end = "\n")
    print(round(b/len(arr),6), end = "\n")

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
