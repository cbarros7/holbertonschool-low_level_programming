#include "holberton.h"
/**
 * free_grid - allocates a grid, make space and free space
 * @gird: takes in width of grid
 * @height: height of grid
 * Return: grid with freed spaces
 */

void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
    {
        free (grid[i]);
    }

    free (grid);
}
