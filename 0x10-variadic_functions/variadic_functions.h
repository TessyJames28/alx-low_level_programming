#ifndef VARIADIC_FUNCTION
#define VARIADIC_FUNCTION
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @all: arguments
 * @function: pointer to the function that prints all
 */
typedef struct print_all
{
	char all;
	void (*function)(va_list args);
} funcspec_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
