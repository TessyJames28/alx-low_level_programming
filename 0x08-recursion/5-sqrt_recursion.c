#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to be checked
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int _sqrt(int n, int m);

	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: int parameter
 * @m: int parameter
 * Return: sqrt
 */
int _sqrt(int n, int m)
{
	if ((n < 0) || ((m * m) > n))
		return (-1);
	else if (m * m == n)
		return (m);
	return (_sqrt(n, m + 1));
}
