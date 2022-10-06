#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, n;
	int *range;

	if (min > max)
		return (NULL);

	n = ((max - min) + 1);

	range = malloc(sizeof(int) * n);
	if (range == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		range[i] = min + i;

	return (range);
}
