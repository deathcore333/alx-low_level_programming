#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed in the function 
 *
 * @...:variable numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n, i++)
	{
		printf("%d", va_arg(ap, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
