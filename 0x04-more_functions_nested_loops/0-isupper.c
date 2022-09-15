#include "main.h"

/**
 * _isupper - main function to check uppercase char
 * @c: value of the variable type int
 * Return: 1 if successful, otherwise 0
 */
int _isupper(int c)
{
	if (c >=65 && c <= 90)
		return (1);
	else
		return (0);
	_putchar('\n');
}
