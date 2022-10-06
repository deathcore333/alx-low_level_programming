#include "main.h"
#include <string.h>

/**
 * print_rev - a program tha displays a string in reverse
 * @str: string
 * Return: void
 */

void print_rev(char *s)
{
	int len = strlen(s), i;

	for (i = len - 1; i >= 0; i--)
	{
		if (s[i] == ' ')
		{
			s[i] = '\0';
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}			
