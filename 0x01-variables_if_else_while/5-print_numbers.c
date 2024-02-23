#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char w = '0';

	while (w <= '9')
	{
		putchar(w);
		w++;
	}
	putchar('\n');

	return (0);
}
