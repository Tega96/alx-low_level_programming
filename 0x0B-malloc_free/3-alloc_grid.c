#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer ot 2 dimentional array
 * @width: the to of the array
 * @height: the length of the array
 * Return: returns a pointer
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int j;
	int k;
	int l;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		*(matrix + j) = (int *)malloc(width * sizeof(int));
		if ((*matrix + j) == NULL)
		{
			for (j = 0; j < height; j++)
			{
				p = matrix[j];
				free(p);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (k = 0; k < width; k++)
		{
			matrix[1][k] = 0;
		}
	}
	return (matrix);
}
