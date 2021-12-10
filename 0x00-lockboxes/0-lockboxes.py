#!/usr/bin/python3
"""
method that determines if all the boxes can be opened
- boxeds is a list of lists
- a key with the same number as box open that box
- The first box is unlocked
- Return True if all boxes can be opened, else return False
"""


def canUnlockAll(boxes):
    new_list = []
    for rows in range(len(boxes)):
        for columns in range(len(boxes[rows])):
            if len(boxes[rows]) == 0:
                return False
            else:
                return True
