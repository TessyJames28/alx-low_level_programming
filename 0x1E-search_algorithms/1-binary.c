#include "search_algos.h"

/**
 * binary_search - function for binary search algorithm
 * @array: pointer to the irst element of the array
 * @size: size of the array
 * @value: value to search for
 * Return: index where value is located or -1 if value is not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid;
	int i;

	if (array == NULL)
		return (-1);

	while (l < size)
	{
		printf("Searching in array");
		for (i = l; i <= (int)r; i++)
			printf("%s %d", (i == (int)l) ? ":" : ",", array[i]);
		printf("\n");

		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
