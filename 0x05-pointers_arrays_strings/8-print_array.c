#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: an array parameter
 * @n: The number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int count = 0;

	if (n > 0)
	{
		while (count < n)
		{
			printf("%d", *(a + count++));
			if (count != n)
				printf(", ");
			else
				printf("\n");
		}
	}
	else
		printf("\n");
}
