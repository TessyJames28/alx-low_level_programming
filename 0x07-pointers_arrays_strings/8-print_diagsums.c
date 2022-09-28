#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - functions that prints sum of two diagnoals
 * of a square matrix of integers
 * @a: pointer variable for the array
 * @size: array size
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}

