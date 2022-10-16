#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of char initializing with a
 * specific char
 * @size: the size to allocate
 * @c: characters to assign
 *
 * Return: Null if the size is 0 or function fails
 *	Otherwise - point to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
