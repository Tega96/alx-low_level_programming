#include "main.h"
#define MARGIN 32

/**
 * string_toupper - changes all lowercase letters of a string
 * @str: A string
 *
 *Retrun: A pointer to the resulting str.
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (*str && ++count)
	{
		if (*str >= 97 && *str <= 122)
			*str -= MARGIN;
		++str;
	}
	str -= count;
	return (str);
}
