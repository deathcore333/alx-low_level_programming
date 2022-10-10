#include "main.h"

/**
 * set_string - a function that sets the value of the pointer to char
 * @s: address to pointer to char*
 * @to: destination
 */

void set_string(char **s, char *to)
{
	*s = to;
}
