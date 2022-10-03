#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

	printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }
/* no incremment set for int i hence the program is stuck in a loop that prints 0 */
        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
