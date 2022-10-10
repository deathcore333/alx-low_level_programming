#include "main.h"

/**
 * factorial - a function that returns factorial of a given number
 * @n: the given number
 *
 * Return: factorial of n otherwise 1 if n is 0 and -1 if n less than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
