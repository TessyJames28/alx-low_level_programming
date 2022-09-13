#include "main.h"

/**
 * print_alphabet_x10 - function description to print alphaber 10x
 * print_alphabet_x10: print alphabet 10x using _putchar
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}

