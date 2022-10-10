#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of n
 * @: the number to find sqrt
 *
 * Return: square root othwrwise -1
 */
int sqrt_check;

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));

}

/**
 * sqrt_check - returns the natural square root of a digit
 * @g: guess sqrt
 * @c: number to check sqrt
 *
 * Return: natural square or -1
 */

int sqrt_check
{
	if (g * g == c)
		return (g);
	else if (g *g > c)
		return (-1);
	else
		return (srt_check(1, n));
}
