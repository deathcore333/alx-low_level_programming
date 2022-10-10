#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string of any bytes
 * @accept: pointer to a string
 *
 * Return: pointer to bytes in s
 */

char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
