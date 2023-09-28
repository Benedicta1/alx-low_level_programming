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
        for b in range(len(grid[a])):
            if grid[a][b] == 1:
                if a - 1 < 0 or grid[a - 1][b] == 0:
                    perimeter += 1
                if b - 1 < 0 or grid[a][b - 1] == 0:
                    perimeter += 1
                if b + 1 >= len(grid[a]) or grid[a][b + 1] == 0:
                    perimeter += 1
                if a + 1 >= len(grid) or grid[a + 1][b] == 0:
                    perimeter += 1
    return perimeter
