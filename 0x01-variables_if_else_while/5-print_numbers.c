#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints all the single digit numbers starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
