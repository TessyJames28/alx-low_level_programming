#include "main.h"

/**
 * puts2 - function to print every other number
 * @str: pointer variable for the string
 * Return: nothing
 */
void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
