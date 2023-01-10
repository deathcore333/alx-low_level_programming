#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - prints a string before main function is executed
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

