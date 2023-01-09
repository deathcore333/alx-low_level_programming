#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - a program that prints a n
 *  @f: pointer to a function that prints the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
