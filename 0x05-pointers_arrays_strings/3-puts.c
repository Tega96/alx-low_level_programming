#include "main.h"

/**
 * puts - prints a string
 * @str: the parameter used
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}	
	_putchar('\n');
		
}
