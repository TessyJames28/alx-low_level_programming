#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: double pointer to a char
 * @to: pointer to a char variable
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
