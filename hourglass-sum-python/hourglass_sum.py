#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'hourglassSum' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def hourglassSum(arr):
    max_sum = None
    for row_index in range(len(arr) - 2):
        for col_index in range(len(arr[0]) - 2):
            sum = 0
            for index_offset in range(3):
                sum += arr[row_index][col_index + index_offset] + arr[row_index+2][col_index + index_offset]

            sum += arr[row_index+1][col_index+1]
            if max_sum == None or sum > max_sum:
                max_sum = sum

    return max_sum


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
