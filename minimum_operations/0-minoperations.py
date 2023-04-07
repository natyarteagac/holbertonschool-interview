#!/usr/bin/python3
""" Multiple Operations Alghoritm
"""


def minOperations(n):
    res = 0
    index = 1

    if n == 0 or n != int:
        return 0

    while (index < n):
            res += i
            n = n / index
    return res
