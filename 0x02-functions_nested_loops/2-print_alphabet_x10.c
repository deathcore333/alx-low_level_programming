#include "main.h"

/**
 * print_alphabet_x10 - a function that prints alphabet ten times
 */

void print_alphabetx10(void)
{	
	int i;
	int c;

	for (i = 0;i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	}
	_putchar('\n');
}

