#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to first string
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;

	while (*dest && ++count)
		++dest;
	while (*src && ++count)
		*dest++ = *src++;
	*dest = '\0';
	dest -= count;
	return (dest);
}
