#include "main.h"

/**
 * more_numbers - a function that prints numbers ten times
 */

void more_numbers(void)
{
	int i, j;
	
	i = 0;
	while (i <= 9)
	{
		for(j = 0; j <= 14; j++)
		{
			while (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
	i++;
	}
	
	_putchar('\n');

}
