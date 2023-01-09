#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big endian 1 for little endian
 */

int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
