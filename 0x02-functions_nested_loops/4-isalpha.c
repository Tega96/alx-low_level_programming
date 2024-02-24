#include <stdio.h>
#include "main"

/**
 * _isalpha - This code checks alphabetic characters
 * @c: Character to be examined
 * Return: retunrs 0 if c is not an alphabet, else return 1
 */

int _isalpha(int c)
{
if ((c >64 && <91) || (c > 96 && < 123))
	return (1);
else
	return (0);
}

