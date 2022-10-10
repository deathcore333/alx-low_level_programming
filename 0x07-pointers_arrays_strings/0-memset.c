#include "main.h"

/**
 * _memeset - a function that fills memory with a constant byte
 * @n: number of bytes in the memory area
 * @s: pointer
 * @b: the constant byte
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
