#!/usr/bin/python3
"""
Function to print the file sent from stdin
with the requirements of Holberton School

"""
import sys
import signal


def keyboardInterruptHandler(signal, frame):
    print("File size: {:d}".format(add_size))
    print("200: {:d}".format(count_200))
    print("401: {:d}".format(count_401))
    print("403: {:d}".format(count_403))
    print("404: {:d}".format(count_404))
    print("405: {:d}".format(count_405))
    print("500: {:d}".format(count_500))
    exit(0)


signal.signal(signal.SIGINT, keyboardInterruptHandler)

count = 0
add_size = 0
count_200 = 0
count_401 = 0
count_403 = 0
count_404 = 0
count_405 = 0
count_500 = 0

for lines in sys.stdin:
    try:
        x = lines.split(" ")
        add_size += int(x[8])
        count += 1
        if (int(x[7]) == 200):
            count_200 += 1
        if (int(x[7]) == 401):
            count_401 += 1
        if (int(x[7]) == 403):
            count_403 += 1
        if (int(x[7]) == 404):
            count_404 += 1
        if (int(x[7]) == 405):
            count_405 += 1
        if (int(x[7]) == 500):
            count_500 += 1
        if (count == 10):
            print("File size: {:d}".format(add_size))
            print("200: {:d}".format(count_200))
            print("401: {:d}".format(count_401))
            print("403: {:d}".format(count_403))
            print("404: {:d}".format(count_404))
            print("405: {:d}".format(count_405))
            print("500: {:d}".format(count_500))
            count = 1
    except KeyboardInterrupt():
        keyboardInterruptHandler(signal, frame)
