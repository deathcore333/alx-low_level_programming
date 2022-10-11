#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on succcess 1 on error
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{

			if (isdigit(argv[i][j] == 0))
			{
				printf("Error\n");

				return (0);
			}

		}
	}
	for (i = 0; i < argc; i++)
	{
			sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
