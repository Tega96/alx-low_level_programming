#include "main.h"

/**
 * factorial - Finds the factorial of a number
 * @n: The parameter used
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n <= 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
