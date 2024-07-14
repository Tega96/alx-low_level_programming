#include "main.h"

/**
 * _pow_recursion - This function retruns the value of x raised to power of y
 * @x: the ingeter number
 * @y: x is raised to this number
 *
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
