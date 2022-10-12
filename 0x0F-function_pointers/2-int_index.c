#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * int_index returns the index of the first element for which the
 * cmp function does not return 0
 * @array: array of integers
 * @size: size of array
 * @cmp: a pointer to the function to be used to compare values
 * Return: if no element match 1, is size <= 0, return 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
