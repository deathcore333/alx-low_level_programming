#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of
 * integers followed by a new line
 * @a: value of integer's array
 * @n: the number of eleents to print
 */

void print_array(int *a, int n)
{
	int i, count;

	i = 0;
	count = 1;
	if (n < 0)
		n = 0;
	if (n > 0)
	{

		while (a[i] != '\0' && count < n)
		{
			printf("%d, ", a[i]);
			i++;
			count++;
		}

		printf("%d\n", a[i]);
	}
}
