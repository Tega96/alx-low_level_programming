#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 */

void print_number(int n)
{
	int ones;
	int digitcol;
	int multiplier;
	int nCopy;

	multiplier = 1;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	nCopy = n;
	while (n / 10 !=0)
	{
		multiplier *= 10;
		n /= 10;
	}
	n = nCopy;
	while (multiplier / 10 != 0)
	{
		digitCol = n / multiplier;
		_putchar(digitCol + '0');
		n %= multiplier;
		multiplier /= 10;
	}
	ones = n % 10;
	_putchar(ones + '0');
}
