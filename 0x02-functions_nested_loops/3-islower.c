#include "main.h"

/**
 * _islower - main function using _putchar
 * @c: The character in ANSCII code
 * Return: on success 1.
 * Otherwise, 0 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
