#include "main.h"

/**
 * _strcpy - afunction that copies the string pointed to by a src includiing the terminating null byte (\0)
 * @dest: destination
 * @src: source
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '0'; i++)
	{
		dest[i] = *(src + i);
	}

	dest[i] = '\0';

	return (dest);
}
