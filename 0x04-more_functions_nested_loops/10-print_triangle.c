#include "main.h"

/**
 * print_triangle - a function that prints triangles followed by a new line
 *@size - the number of times it prints
 */

void print_triangles(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i = size; i++)
		{
			for (j = size; j = 0; j--)
			{
				_putchar(' ');
			}
			_putchar('#');
		}
		_putchar('\n');
	}
}
