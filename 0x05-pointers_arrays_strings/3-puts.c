#include "main.h"

/**
 * _puts - function to print a string
 * @str: pointer variable str
 * Return: nothing
 */
void _puts(char *str)
{
	int ch;

	for (ch = 0; str[ch]; ch++)
		_putchar(str[ch]);
	_putchar('\n');
}
