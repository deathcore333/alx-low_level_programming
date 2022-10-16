#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory
 * @str: the string to be copied
 *
 * Return: if str == NULL or _strdup function returns a pointer to
 * the duplicated string.
 */

char *_strdup(char *str)
{
	int i, l = 0;
	char *duplicate;

	if (str == 0)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	duplicate = malloc(sizeof(char) * (l + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[l] = '\0';

	return (duplicate);
}
