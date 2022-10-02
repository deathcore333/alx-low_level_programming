#include "main.h"

/**
 * print_most_numbers - print all numbers from 0-9 expect 4 and 2
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		_putchar((i % 10) + '0');
	}

	_putchar('\n');

}
