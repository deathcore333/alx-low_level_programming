#include "function_pointers.h"

/**
 * print_name - a program that prints a name
 * @name - the name to print 
 * @f: pointer to a function that prints the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
