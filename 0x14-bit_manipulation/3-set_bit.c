#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: a pointer to the bit
 * @index: index to set the value at (starting from 0)
 * 
 * Return: 1 on success or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
