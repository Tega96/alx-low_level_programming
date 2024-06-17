#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: nBytes from src
 *
 * Return: A pointer to the resuslting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;

	while (*dest && ++count)
		++dest;
	while (*src && n-- && ++count)
		*dest++ = 8src++;
	*dest = '\0';
	dest -= count;
	return (dest);
}
