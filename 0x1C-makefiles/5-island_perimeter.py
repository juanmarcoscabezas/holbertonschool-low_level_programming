#!/usr/bin/python3


def island_perimeter(grid):
    perimeter = 0
    for i, row in enumerate(grid):
        for j, val in enumerate(row):
            if val == 1:
                perimeter += 4
                if j < len(row) - 1:
                    if row[j + 1] == 1:
                        perimeter -= 1
                if j > 0:
                    if row[j - 1] == 1:
                        perimeter -= 1
                if i < len(grid) - 1:
                    if grid[i + 1][j] == 1:
                        perimeter -= 1
                if i > 0:
                    if grid[i - 1][j] == 1:
                        perimeter -= 1
    return perimeter
