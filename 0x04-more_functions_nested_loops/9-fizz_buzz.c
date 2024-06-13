#include "main.h"

/**
 * main - prints fizz, buzz and fizzbuzz in multiple of 3, 5, and 15 reapectively
 *
 * Return: always zero
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % (3 * 5) == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
		      printf(" ");
	}
		printf("\n");

	return (0);
}
