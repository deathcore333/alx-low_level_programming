#include "main.h"

/**
 * print_numbers - a function that prints all numbers followed by a new line
 *
 */
void print_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
