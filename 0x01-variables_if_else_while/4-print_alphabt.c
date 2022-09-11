#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all the letters of the alphabet 
 * expect q and e
 *
 * Return: Always  0 (Successs)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		putchar(i);
	}

	putchar('\n');

	return (0);
}
