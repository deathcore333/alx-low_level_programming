#include "main.h"

/**
 *_isuppper - a function that checks if a character is uppercase
 *@c: the character under assessment
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
}
