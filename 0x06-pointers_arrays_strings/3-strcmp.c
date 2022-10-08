#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: integer j
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0;
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	j += s1[i] - s2[i];

	return (j);
}
