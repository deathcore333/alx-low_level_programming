#include <stdlib.h>
#include <time.h>
/**
 * main - A function that checks and prints whether a random number is
 * positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

		if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		else if (n = 0)
		{
			printf("%d is zero\n", n);
		}
		else 
		{
			printf("%d is positive\n", n);
		}
	return (0);
}
