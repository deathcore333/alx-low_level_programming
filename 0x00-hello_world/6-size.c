#include <stdio.h>


/**
 * Main - Entry point
 *
 *
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

	printf("Size of a char is %i bytes\n",(unsigned long)sizeof(j));
	printf("Size of an int is %i bytes\n",(unsigned long)sizeof(a));
	printf("Size of a long int %d bytes\n",(unsigned long)sizeof(b));
	printf("Size of a long long int %d bytes\n",(unsigned long)sizeof(c));
	printf("Size of a float %d bytes\n,",(unsigned long)sizeof(f));
	return (0);
}
