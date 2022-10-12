#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: parameter to print a name
 * @f: function pointer to a function with no return type and 1 argument
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
