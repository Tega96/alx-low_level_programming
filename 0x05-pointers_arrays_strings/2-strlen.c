#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: a string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
