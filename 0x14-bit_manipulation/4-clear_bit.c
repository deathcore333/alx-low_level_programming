#include "main.h"

/**
 * clear_bit - function that sets teh value of a bit to 0 at a given index
 * @n: A pointer to the bit
 * @index: index to set the value at (indice starts as 0)
 *
 * Return: -1 on error 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
