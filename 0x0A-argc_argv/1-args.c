#include <stdio.h>

/**
 * main - a function that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: argument count
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%i\n", argc - 1);

	return (0);
}
