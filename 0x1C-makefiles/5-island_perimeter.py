#!/usr/bin/python3
"""Island Perimeter"""

def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    Grid is a list of integers, 0 represents a water zone
    1 represents a land zone, One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100"""

    perimeter = 0
    for a in range(len(grid)):
        for b in range(len(grid[0])):
            if grid[a][b]:
                if b  == 0 or not grid[a][b - 1]:
                    perimeter += 1
                    if b == len(grid[0]) - 1 or not grid[a][b + 1]:
                        perimeter += 1
                        if a == 0 or not grid[a - 1][b]:
                            perimeter += 1
                            if a == len(grid) - 1 or not grid[a + 1][b]:
                                perimeter += 1
                                return perimeter
