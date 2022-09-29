#include "main.h"

/**
 * factorial - function to return factorial of a given integer
 * @n: contains factorial value
 *
 * Return: -1 if n is lower than zero else return 1 and factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
