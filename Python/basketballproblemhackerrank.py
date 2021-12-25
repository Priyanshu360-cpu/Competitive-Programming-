#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'breakingRecords' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY scores as parameter.
#

def breakingRecords(s):
    h = 0
    l = 0
    c = 0
    co = 0
    for i in range(len(s)):
        if i == 0:
            h = l = s[i]
        elif s[i] > h:
            h = s[i]
            c += 1
        elif s[i] < l:
            l = s[i]
            co += 1
    
    return c, co

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
