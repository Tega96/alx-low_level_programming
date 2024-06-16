#include "main.h"

/**
 * puts2 - prints every other character of a string from the first character
 * @str: a string parameter
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		if (*(str + 1) != '\0')
			str += 2;
		else
			break;
	}
	_putchar('\n');
}
