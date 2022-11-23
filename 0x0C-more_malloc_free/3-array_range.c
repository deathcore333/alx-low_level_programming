#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of int
 * @min: minimum int
 * @max: maximum int
 *
 * Return: pointer to new array
 * 	Otherwise if malloc fails or min > max: Null
 */

int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
