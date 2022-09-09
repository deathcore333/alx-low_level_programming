#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that outputs the letters of the alphabet both lowercase
 * and UPPERCASE
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)

		putchar(i);

	for (i = 'A'; i <= 'Z'; i++)

		putchar(i);

	putchar('\n');

	return (0);
}
	

