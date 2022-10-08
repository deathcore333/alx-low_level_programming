#include "main.h"

/**
 * rot13 - a function that encodes rot13
 * @r: array
 *
 * Return: array r
 */

char *rot13(char *r)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i = 0;
	int j = 0;

	while (r[i] != '\0')
	{
		for (j = 0; a[j] != '\0' && r[i] != a[j]; j++)
			;
		if (j < 52)
		{
			a[i] = b[j];
		}
		i++;
	}

	return (r);
}
