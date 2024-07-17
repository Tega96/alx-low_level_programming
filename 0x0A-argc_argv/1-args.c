#include <stdio.h>

/**
 * main - Entry point. This prints the number of arguments passed into it
 *
 * @argc: The number of argument
 * @argv: The string of argument in the command line
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
