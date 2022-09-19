#include "main.h"

/**
 * swap_int - function to swap the values of two integers
 * @a: first pointer integer
 * @b: second pointer integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
