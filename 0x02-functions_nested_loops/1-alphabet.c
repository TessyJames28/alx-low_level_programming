#include "main.h"

/**
 * print_alphabet - Entry point
 * print_alphabet: function that prints alphabet using _putchar
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
