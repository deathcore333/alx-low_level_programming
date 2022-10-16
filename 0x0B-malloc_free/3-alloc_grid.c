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
	int **2D;

	if (width <= 0 || height <= 0)
		return (NULL);

	2D = malloc(sizeof(int *) * height);

	if (2D == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		2D[j] = malloc(sizeof(int) * width);

		if (2D[j) == NULL)
		{
			for (; j >= 0; j--)
				free(2D[j]);

			free(2D);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			2D[j][i] = 0;
	}

	return (2D);
}
