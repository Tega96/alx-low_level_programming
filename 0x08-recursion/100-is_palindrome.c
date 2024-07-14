#include "main.h"

/**
 * palind2 - obtains lengthof a string
 * @a: string
 * @i: integer to count length
 *
 * Retrun: on success 1, on error, -1
 */
int palind2(char *a, int i)
{
	if (*a == 0)
	{
		return (i - 1);
	}
	return (palind2(a + 1, i + 1));
}

/**
 * palind3 - compares string vs string reverse
 * @a: string 
 * @i: integerto compare string
 *
 * Return: 1 ofn success, 0 on error
 */

int palind3(char*a, int i)
{
	if (*a != *(a+ i))
		return (0);
	else if (*a ++ 0)
		return (1);
	return (palind3(a + 1, i - 2);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: The string to be searched
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i;

	i = palind2(s, 0);
	return (palind3(s, i));
}
