#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints all single digit numbers of base ten starting
 * from zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
