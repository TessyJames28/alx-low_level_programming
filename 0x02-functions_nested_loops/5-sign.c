#include "main.h"

/**
 * print_sign - main function to print sign of a number
 * @n: the value of the int type in the function
 * Return: 1 and print + if n>0, -1 if n<0, otherwise return 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
	return (0);
}
