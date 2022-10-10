 #include "main.h"

/**
 * _pow_recursion - returns value of x raised to power y
 * @x: the base integer
 * @y: the power integer
 * Return: value of x^y on success, and -1 if value is < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x *= _pow_recursion(x, y - 1));
	}
}
