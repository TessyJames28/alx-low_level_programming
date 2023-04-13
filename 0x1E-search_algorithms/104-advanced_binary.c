#include "search_algos.h"

int recursive_bsearch(int *array, size_t l, size_t r, int value);

/**
 * advanced_binary - function for advanced binary search algorithm
 * @array: pointer to the irst element of the array
 * @size: size of the array
 * @value: value to search for
 * Return: index where value is located or -1 if value is not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_bsearch(array, 0, size - 1, value));
}


/**
 * recursive_bsearch - function for recursive use of binary search algorithm
 * @array: pointer to the irst element of the array
 * @size: size of the array
 * @value: value to search for
 * Return: index where value is located or -1 if value is not found
 */

int recursive_bsearch(int *array, size_t l, size_t r, int value)
{
	size_t mid;
	int i;

	if (l <= r)
	{
		mid = l + (r - l) / 2;

	printf("Searching in array");
	for (i = l; i <= (int)r; i++)
		printf("%s %d", (i == (int)l) ? ":" : ",", array[i]);
	printf("\n");

	if (array[mid] == value)
	{
		if (mid > l && array[mid - 1] == value)
			return (recursive_bsearch(array, l, mid, value));
		return (mid);
	}

	if (array[mid] < value)
		return (recursive_bsearch(array, mid + 1, r, value));
	else
		return (recursive_bsearch(array, l, mid - 1, value));
	}
	return (-1);
}
