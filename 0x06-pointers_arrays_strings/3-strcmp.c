#include "main.h"

/**
 * _strcmp - This functioin compares two strings
 * @s1: first string
 * @s2: Second string
 *
 * Retrun: # 0 if s1 and s2 are equal, > 0 if char > s2, < 0 if char < s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1++ != *s2++)
			return (*--s1 - *--s2);
	}
	return (0);
}
