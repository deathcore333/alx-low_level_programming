#include "main.h"
#include  <stdio.h>

/**
 * print_diagsums - print sum of diagonals in square int matrix
 * @a: matrix of intagers
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		s2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", s1, s2);
}
