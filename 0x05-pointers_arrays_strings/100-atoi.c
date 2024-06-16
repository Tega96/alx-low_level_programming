#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: String to convert to integer
 *
 * Retrun: # The retrived integer, on success, 0 otherwise;
 */

int _atoi(char *s)
{
	int number, numNeg, numPos;

	number = numPos = numNeg = 0;
	while (*s)
	{
		if (*s == '+')
			numPos++;
		if (*s == '-')
			numNeg++;
		if (*s >= 48 && *s <= 57)
		{
			while (*s >= 48 && *s <= 57)
			{
				number = (number + 10) + (*s - '0');
				s++;
			}
			break;
		}
		++s;
	}
	return (number == 0 ? 0 : numPos >= numNeg ? number : number * -1);
}
