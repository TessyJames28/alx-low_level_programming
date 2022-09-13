#include "main.h"

/**
 * _isalpha - main function
 * @c: the value for function type
 * Return: 1 if successful, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
	_putchar('\n');
}
