#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory 
 */

void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
