#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer
 * @array - array of integers
 * @size - number of elements in the array
 * @cmp - pointer to the function used to compare values
 *
 *
 * Return: -1 if no lements match or 0 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{

		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
		}
	}
	return (-1);
}
