#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - function to print a char
 * @args: function argument
 * Return: void
 */
void print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	printf("%c", ch);
}

/**
 * print_int - function to print an integer
 * @args: argument variable
 * Return: void
 */
void print_int(va_list args)
{
	int digit;

	digit = va_arg(args, int);
	printf("%d", digit);
}

/**
 * print_float - function that prints float
 * @args: argument variable
 * Return: void
 */
void print_float(va_list args)
{
	float doub;

	doub = va_arg(args, double);
	printf("%f", doub);
}

/**
 * print_string - function that print string
 * @args: argument variable
 * Return: void
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("nil");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: type of arguments passed which cannot not be modified
 * Return; nothing
 */
void print_all(const char * const format, ...)
{
	funcspec_t func[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_list args;
	int i = 0, j;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (func[j].all == format[i])
			{
				printf("%s", separator);
				func[j].function(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
