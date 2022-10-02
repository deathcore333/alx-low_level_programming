#include <stdio.h>
#include <stdlib.h>

/**
 * a function that prints all the numbers expect multiples of three and five
 *
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
