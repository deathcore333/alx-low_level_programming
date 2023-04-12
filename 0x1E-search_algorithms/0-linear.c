#include "search_algos.h"

/**
 * linear_search - conduct linear search in array
 *
 * @array: pointer to the searched array
 * @size: number of elements in the array
 * @value: value of search item
 *
 * Return: -1 if not found or array is Null
 *		first index if found
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
		return (i);
	}

	return (-1);
}
