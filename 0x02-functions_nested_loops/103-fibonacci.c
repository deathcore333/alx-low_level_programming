#include <stdio.h>

/**
 * main - a program that adds the fibonanci even numbers
 *
 * Return: Always 0
 */

int main(void)
{

	float sum = 0;
	unsigned long fib1, fib2, fibsum;

	fib1 = 0;
	fib2 = 1;

	while (1)
	{

		fibsum = fib1 + fib2;
		{
		if (fibsum > 4000000)
			break;
		}
		{
		if ((fibsum % 2) == 0)
			sum = fibsum + sum;
		}

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", sum);

	return (0);
}
