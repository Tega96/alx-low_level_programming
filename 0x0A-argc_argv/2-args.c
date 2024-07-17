#include <stdio.h>

/**
 * main - Entry point. program prints every arguments it receives
 *
 * @argc: the number of arguments to be printed
 * @argv: The string of argument to be printed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
		printf("\n");
	}
	return (0);
}
