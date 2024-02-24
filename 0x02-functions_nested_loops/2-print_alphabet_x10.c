#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times the alpha
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
char c;
int i;

for (i = 0; i < 10; i++)
{
	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
}

