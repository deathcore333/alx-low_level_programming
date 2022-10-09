#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: the integer to print
 */

void print_number(int n)
{
	int a;

	if (n < 0)
	{
		_putchar('-');
		a = n * -1;
	}
	else
		a = n;

	if ((a / 10) > 0)
		print_number(a / 10);
	_putchar((a % 10) + '0');
}
