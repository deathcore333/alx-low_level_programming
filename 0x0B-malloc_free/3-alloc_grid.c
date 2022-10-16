#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2d array of ints
 * @width: widht of the array
 * @height: height of the array
 *
 * Return: width and height on success NULL On failure or negative numbers
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	/* i is width index; j is height index */
	int **twoD;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		twoD[j] = malloc(sizeof(int) * width);

		if (twoD[j] == NULL)
		{
			for (; j >= 0; j--)
				free(twoD[j]);

			free(twoD);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			twoD[j][i] = 0;
	}

	return (twoD);
}
