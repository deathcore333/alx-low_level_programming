#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints out the leters of the alphabet
 * UPPERCASE and lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	
		putchar(i);
	
	putchar('\n');
	return (0);
}
