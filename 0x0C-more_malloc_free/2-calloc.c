#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb - number of elements
 * @size: byte of each array element
 *
 * Return: if nmemb = 0 or size = 0 runction fails else
 *	Pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (mem);
}
