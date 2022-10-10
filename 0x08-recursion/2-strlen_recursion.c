#include "main.h"

/**
 * _strlen_recursion - returns the string length
 * @s: the string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}

	return (count);
}
