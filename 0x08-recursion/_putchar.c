#include <unistd.h>

/**
 * _putchar - a function that prints character c
 * @c: character to print
 *
 * Return: 1 on success -1 otherwise
 */

int _putchar(char c)
{
	return(write(1, &c, 1);
}
