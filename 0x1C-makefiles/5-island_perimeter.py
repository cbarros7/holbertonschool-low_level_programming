#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """Search perimeter"""
    g = grid
    result = 0
    for i in range(len(g)-1):
        for j in range(1, len(g[0])-1):
            if (g[i][j-1] == 0 and
                    g[i][j] == 1 and (g[i][j+1] == 0 or g[i][j+1] == 1)):
                result += 2
            if (g[i][j-1] == 0 and
                    g[i][j] == 1 and g[i][j+1] == 0 and g[i-1][j] == 0):
                result += 3
            if (g[i][j-1] == 1 and g[i][j] == 1 and
                    g[i][j+1] == 0 and g[i-1][j] == 0):
                result += 3
    return(result)
