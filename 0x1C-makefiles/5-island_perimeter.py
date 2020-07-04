#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """Search perimeter"""
    result = 2
    for i in range(len(grid[0])-1):
        j = i + 1
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                result += 2
    return(result)
