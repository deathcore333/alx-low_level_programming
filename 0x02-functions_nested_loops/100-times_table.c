#include "main.h"

/**
 * print_times_table - a function that prints the times table of a num
 *@n: the value  to be multiplied
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n <= 0 && n >= 16)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				_putchar('.');
				_putchar(' ');

				z = x * y;
			
				if (z >= 100)
				{
					_putchar((z / 10) + '0');
					_putchar(((z / 10)) % 10 + '0');
				}
				if (z <= 99)
				{
					_putchar(' ');
				}
				if (z <= 9)
				{
					_putchar(' ');
				}
				else if (z <= 99 && z >= 10)
				{
					_putchar((z / 10) + '0');
				}
				_putchar((z % 10) + '0');
			}
		_putchar('\n');
		}
	}
}
