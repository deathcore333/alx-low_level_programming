#include "main.h"
#include <stdlib.io>

/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to new memory containing s1 followed s2 NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_i = 0; l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	concat_str = malloc(sizeof(char) * l);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_index++]  = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_index++] = s2[i];

	return (concat_str);
}
