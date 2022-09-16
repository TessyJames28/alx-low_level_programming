#include "main.h"

/**
 * print_triangle - main function to print triangle
 * @size: function parameter name used as variable
 * Return: Always 0
 */
void print_triangle(int size)
{
	int triag1, triag2;

	if (size > 0)
	{
		for (triag1 = 1; triag1 <= size; triag1++)
		{
			for ((triag2 = size - triag1); triag2 > 0; triag2--)
			{
				_putchar(' ');
			}

			for (triag2 = 0; triag2 < triag1; triag2++)
			{
				_putchar('#');
			}

			if (triag1 == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
