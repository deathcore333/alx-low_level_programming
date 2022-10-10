#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string 
 * @c: character
 *
 * Return: c or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + 1); i++)
	{
		if (*(s + 1) == c)
			return (s + i);
	}
	if (*(s + 1) == c)
		return (s + i);
	return (0);
}
