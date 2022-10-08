#include "main.h"

/**
 * reverse_array - a function that reverses the contents of an array
 * @n: number of elements in the array
 * @a: the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, b, j;

	i = b = j = 0;
	n -= 1;

	while (i < n)
	{
		j = a[i];
		b = a[n];

		a[n] = j;
		a[i] = b;
		i++;
		n--;
	}
}
