#include "main.h"

/**
 * _strncat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to apend to dest
 * @n: largest number of bytes to append
 *
 * Return: dest address
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
