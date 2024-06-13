#include "main.h"

/**
 * print_triangle - this code prints triangle on the terminal
 * @size: Represents the size of the triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0 ; i <= size ; i++)
	{
		for (j = 0 ; j <= i ; j++)
		{
			_putchar('#');
		}
		if (size <= 0)
			_putchar('\n');
		_putchar('\n');
	}
}
