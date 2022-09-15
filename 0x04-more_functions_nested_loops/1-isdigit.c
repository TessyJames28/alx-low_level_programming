#include "main.h"

/**
 * _isdigit - main function using _putchar
 * @c: The character in ANSCII code
 * Return: on success 1.
 * Otherwise, 0 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
