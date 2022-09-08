#include <stdio.h>


/**
 * function main - Entry point
 *
 * Return : 0 (success)
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char j;
	float f;

	printf("Size of a char: %i byte(s)\n",(unsigned long)sizeof(j));
	printf("Size of an int: %i byte(s)\n",(unsigned long)sizeof(a));
	printf("Size of a long int: %d byte(s)\n",(unsigned long)sizeof(b));
	printf("Size of a long long int: %d byte(s)\n",(unsigned long)sizeof(c));
	printf("Size of a float: %d byte(s)\n,",(unsigned long)sizeof(f));
	return (0);
}
