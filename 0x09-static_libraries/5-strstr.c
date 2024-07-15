#include "main.h"

/**
 * _strstr - Locate a substring
 * @haystack: The string to be searched
 * @needle: The string to be located
 *
 * Retrun: a pointer in the beginning of the substring, else return NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index + 1] == '\0');
		}
		haystack++;
	}
	return ('\0');
}
