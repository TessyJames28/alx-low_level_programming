#!/usr/bin/python3
""" define a function that measures island perimeter"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island

    0 represents water and 1 land in the grid

    Arguments:
        grid (lis) - a list of list of integers that represent an island
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4

                if (i > 0 and grid[i-1][j] == 1):
                    perimeter -= 2
                if (j > 0 and grid[i][j-1] == 1):
                    perimeter -= 2

    return perimeter
