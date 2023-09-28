#!/usr/bin/python3
"""Island Perimeter"""



def island_perimeter(grid):

    """This returns the perimiter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): This is the lists of integers representing an island.
    Returns:
        The perimeter of the island is defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
                    return size * 4 - edged * 2
