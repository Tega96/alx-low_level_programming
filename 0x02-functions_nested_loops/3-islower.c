#include <stdio.h>
#include "main.h"
/**
 * _islower - This code checks for lower character
 * @c - character to be checked
 * Return: Always 0
 */

int _islower(int c)
{
	if (c <= 97)
		return (0);
	else
		return (1);
}
