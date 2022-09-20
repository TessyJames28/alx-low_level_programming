#include "main.h"

/**
 * print_rev - function to reverse a string
 * @s: pointer variable of type char
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	for (; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
