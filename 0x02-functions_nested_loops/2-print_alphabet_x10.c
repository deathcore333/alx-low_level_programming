#include "main.h"

/**
 * print_alphabet_x10 - a function that prints alphabet ten times
 */

void print_alphabet(void)
{
	int i;
	int c;

	i = 0;
	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	}
	i++;
	_putchar(c);
}
