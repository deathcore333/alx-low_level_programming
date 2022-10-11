#include "main.h"

/**
 * is_prime_number - function that checks for prime numbers
 * @n: number to check
 *
 * Return: 1 for prime numbers, 0 otherwise
 */

int prime_check(int f, int p);

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else 
		return (prime_check(2, n));
}


/**
 * prime_check - checks prime numbers 
 * @f: factor check
 * @p: possible prime
 *
 * Return: 1 for prime, 0 otherwise
 */

int prime_check(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return(prime_check(f + 1, p));
}
