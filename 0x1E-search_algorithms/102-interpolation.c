#include "search_algos.h"

/**
 * interpolation_search - function for interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: first index where value is located or -1 if NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;
	double v;

	if (array == NULL || size == 0)
		return (-1);
	while (size)
	{
		v = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + v);

		printf("Value checked array[%d] ", (int)pos);
		if (pos >= size)
		{
			printf("is out of range\n");
			break;
		}
		else
		{
			printf("= [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
