#!/usr/bin/python3

import sys

count = 0
count200 = 0
count401 = 0
count403 = 0
count404 = 0
count405 = 0
count500 = 0
suma = 0
for lines in sys.stdin:
    x = lines.split(" ")
    suma += int(x[8])
    count += 1
    if (int(x[7]) == 200):
        count200 += 1
    if (int(x[7]) == 401):
        count401 += 1
    if (int(x[7]) == 403):
        count403 += 1
    if (int(x[7]) == 404):
        count404 += 1
    if (int(x[7]) == 405):
        count405 += 1
    if (int(x[7]) == 500):
        count500 += 1
    if count == 10:
        print("File size: ", suma)
        print("200: ", count200)
        print("401: ", count401)
        print("403: ", count403)
        print("404: ", count404)
        print("405: ", count405)
        print("500: ", count500)
