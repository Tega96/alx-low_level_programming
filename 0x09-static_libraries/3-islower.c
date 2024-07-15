#include <stdio.h>
#include "main.h"
/**
 * _islower - This code checks for lower character
 * @c: character to be checked
 * Return: Always 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
