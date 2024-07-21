#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: rows of matrix
 * @height: columns of string
 * Return: a pointer to a 2 dimensiotnal of integers or null byte
 */
void free_grid(int **grid, int height)
{
	int j;
	int *p;

	for (j = 0; j < height; j++)
	{
		p = grid[j];
		free(p);
	}
	free(grid);
}
