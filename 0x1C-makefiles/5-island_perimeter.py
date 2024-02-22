#!/usr/bin/python3
"""
Module: island_perimeter
Function: island_perimeter

This function calculates the perimeter of an island in a grid.
The grid is a list of lists of integers, where  0 represents water and  1 represents land.
The function assumes that the grid is rectangular and completely surrounded by water.
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island in the grid.

    Args:
    grid (list): A list of lists of integers representing the grid.

    Returns:
    int: The perimeter of the island.
    """
    perimeter =  0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] ==  1:
                # Check the top, bottom, left, and right neighbors
                if i ==  0 or grid[i -  1][j] ==  0:  # Top
                    perimeter +=  1
                if i == len(grid) -  1 or grid[i +  1][j] ==  0:  # Bottom
                    perimeter +=  1
                if j ==  0 or grid[i][j -  1] ==  0:  # Left
                    perimeter +=  1
                if j == len(grid[i]) -  1 or grid[i][j +  1] ==  0:  # Right
                    perimeter +=  1
    return perimeter
