#include "main.h"

/**
 * _strncpy - a function that copies n bytes of src to the dest string
 * @dest: the destination string
 * @src: the string to copy
 * @n: largest number of bytes to copy
 *
 * Return: destination address
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
