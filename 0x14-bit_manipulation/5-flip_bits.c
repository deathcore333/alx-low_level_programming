#include "main.h"

/**
 * flip_bits - function that returns number of bits needed to flip one number to another 
 * @n: the number
 * @m: the number to flip n to 
 *
 * Return: the Necessary number of bits to flip n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
