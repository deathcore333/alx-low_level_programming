#include "main.h"

/**
 *_isuppper - a function that checks if a character is uppercase
 *
 * Return: c if character is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
