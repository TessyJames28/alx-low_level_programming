#include "search_algos.h"

/**
 * b_search: binary search function
 * @array: pointer to first element of the array
 * @left: the leftmost element of the array
 * @right: the rightmost element of the array
 * @value: value to search for
 * Return: location of indices or -1 if NULL
 */

int b_search(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}


/**
 * exponential_search - function for exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: first index where value is located or -1 if NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, right;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (b_search(array, i / 2, right, value));
}
