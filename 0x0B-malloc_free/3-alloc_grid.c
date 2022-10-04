#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2-D array of integers
 * @width: array column
 * @height: array row
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int **alloc;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc = malloc(sizeof(int *) * height);
	if (alloc == NULL)
	{
		free(alloc);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		alloc[i] = malloc(sizeof(int) * width);

		if (alloc[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(alloc[j]);

			free(alloc);
			return (NULL);
		}

		for (k = 0; k < width; k++)
			alloc[i][k] = 0;
	}

	return (alloc);
}

