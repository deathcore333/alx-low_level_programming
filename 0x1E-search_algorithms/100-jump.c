#include "search_algos.h"

/**
 * jump_search - searches array using jump_search algo
 *
 * @array: pointer to first element
 * @size: number of elements in array
 * @value: search element
 *
 * Return: -1 if array is NULL or element is absent
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] = [%d]\n", i, jump);
	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
