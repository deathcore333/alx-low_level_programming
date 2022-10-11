#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multipliers arguments followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0, 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

		return (0);
	}
}
