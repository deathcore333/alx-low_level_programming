#include <stdio.h>

/**
 * main - a function that prints all the numbers expect multiples of three and five. Fizz for multiples of three and buzz for multiples of three. Fizzbuzz for
 * 	both
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		{
		if ((i %3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");

		else if ((i % 3) == 0)
			printf("Fizz ");

		else if ((i % 5) == 0)
			printf("Buzz ");

		else
			printf("%d ", i);
			continue;
		}
	}

	printf("\n");

	return (0);
}
