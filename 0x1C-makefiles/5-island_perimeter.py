#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """This returns the perimeter of an island
    Grid is a list of integers in which
    0 represents a water zone
    1 represents a land zone"""

    width = len(grid[0])
    height = len(grid)
    size = 0
    margin = 0

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size +=1
                if (b > 0 and grid[a][b - 1] == 1):
                    margin +=1
                    if (a > 0 and grid[a - 1][b] == 1):
                    margin += 1
    return size * 4 - margin * 2


