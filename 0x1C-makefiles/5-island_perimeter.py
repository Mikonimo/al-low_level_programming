#!/usr/bin/python3
"""Contains a  function that calculates the perimeter grid
of an island"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A rectangular grid where 0 represents
        water and 1 represents land.

    Returns:
        int: The perimeter of the island.
    """
    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check adjacent cells (up, down, left, right)
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
