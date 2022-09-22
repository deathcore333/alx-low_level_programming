#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *@n: starting number
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	}
	else
	{
		for (n = n; n >= 99; n--)
			printf("%d, ", n);
	}
	printf("98\n");
}
