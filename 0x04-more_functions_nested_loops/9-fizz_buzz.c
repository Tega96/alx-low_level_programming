#include "main.h"

/**
 * main - prints fizz, buzz and fizzbuzz in multiple of 3, 5, and 15 reapectively
 *
 * Return: always zero
 */

int main(void)
{
	int i;

	for (i = 1 ; 1 <= 100 ; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", i);
		if (i != 100)
		      printf(" ");
	}
		printf("\n");	
}
