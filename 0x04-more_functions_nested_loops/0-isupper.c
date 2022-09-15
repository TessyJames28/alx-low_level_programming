#include "main.h"

/**
 * _isupper - main function to check uppercase char
 * @c: value of the variable type int
 * Return: on success 1
 * Otherwise, 0 is returned, and errno is set appropriately
 */
int _isupper(int c)
{
	if (c >=65 && c <= 90)
		return (1);
	else
		return (0);
}
