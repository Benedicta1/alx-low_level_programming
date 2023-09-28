#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """Get the result of the  perimeter of an "island" of 1s in an "ocean" of 0s.

    The  2D grid of 0s and 1s, get the result of the perimeter of the contiguous area of
    1, with negative space in 0s.

    Args:
        grid (list of lists of ints): 2D list representation of island

    Attributes:
        perimeter (int): The total units of cell length around island edge

    """
    perimeter = 0
    for a in range(len(grid)):
        for b in range(len(grid[0])):
            if grid[a][b]:
                if b == 0 or not grid[a][b - 1]:
                    perimeter += 1
                    if b == len(grid[0]) - 1 or not grid[a][b + 1]:
                        perimeter += 1
                        if a == 0 or not grid[a - 1] [b]:
                            perimeter += 1
                            if a == len(grid) - 1 or not grid[a + 1] [b]:
                                perimeter += 1
                                return perimeter
