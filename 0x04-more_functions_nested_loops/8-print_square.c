#include "main.h"

/**
 * print_square - function to print square
 * @size: parameter name for size value
 * Return: Always 0
 */
void print_square(int size)
{
	int sq1, sq2;

	if (size > 0)
	{
		for (sq1 = 0; sq1 < size; sq1++)
		{
			for (sq2 = 0; sq2 < (size - 1); sq2++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
