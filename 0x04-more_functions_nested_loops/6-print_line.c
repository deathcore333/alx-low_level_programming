#include "main.h"

/**
 * a function that draws a straight line in the terminal
 *@n: number of times a number should be printed
 */

void print_line(int n)
{
	int l;

	if (n < 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}

	_putchar('\n');
}
