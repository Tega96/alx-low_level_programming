#include "main.h"

/**
 * print_square - prints a block figure
 * @size:
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0 ; i <= size ; i++)
			_putchar('#');
		_putchar('\n');
	}
}
