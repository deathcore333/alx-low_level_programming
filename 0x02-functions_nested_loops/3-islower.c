#include "main.h"

/**
 *_islower - checks if the c is lowercase
 *@c is the letter under test
 *
 *Return: Always 0 
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
