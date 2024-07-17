#include <stdio.h>

/**
 * main - Entry point, program that adds two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (arg > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		print("%d\n", sum);
	}
	return (0);
}
