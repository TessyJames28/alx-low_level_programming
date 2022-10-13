#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of arguments
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n); /* initialize argument list */

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
	}

	if (n)
		printf("%d\n", va_arg(args, int));
	else
		printf("\n");

	va_end(args);
}
