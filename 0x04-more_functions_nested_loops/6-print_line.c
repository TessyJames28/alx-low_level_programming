#include "main.h"

/**
 * print_line - main function to print a line
 * @n: parameter to assign number of printed line
 * Return: Always 0
 */
void print_line(int n)
{
	while (n > 0)
	{
		n--;
		_putchar('_');
	}
	_putchar('\n');
}
