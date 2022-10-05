#include "main.h"

/**
 * swap_int - a function that swaps the values of two numbers
 *@*a: value of first number
 *@b: value of the second number
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
