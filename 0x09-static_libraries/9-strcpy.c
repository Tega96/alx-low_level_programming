#include "main.h"

/**
 * *_strcpy - copies the string pointed by src to the dest
 * @dest: destination
 * @src: source
 * Retrun: The pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*src)
		*(dest + count++) = *src++;
	*(dest + count) = '\0';
	return (dest);
}
