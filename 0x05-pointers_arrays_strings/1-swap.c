#include "main.h"

/**
 * swap_int - swap two characters
 * @a: first value
 * @b: second value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
