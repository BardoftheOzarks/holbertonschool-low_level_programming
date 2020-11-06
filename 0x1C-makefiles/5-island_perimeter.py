#!/usr/bin/python3
'''Find the island perimeter'''


def island_perimeter(grid):
    '''returns perimeter of an island described in a grid'''
    perimeter = 0
    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] is 1:

                if row is 0:
                    perimeter += 1
                elif grid[row - 1][column] is 0:
                    perimeter += 1
                if row is len(grid) - 1:
                    perimeter += 1
                elif grid[row + 1][column] is 0:
                    perimeter += 1

                if column is 0:
                    perimeter += 1
                elif grid[row][column - 1] is 0:
                    perimeter += 1
                if column is len(grid[row]) - 1:
                    perimeter += 1
                elif grid[row][column + 1] is 0:
                    perimeter += 1
    return perimeter
