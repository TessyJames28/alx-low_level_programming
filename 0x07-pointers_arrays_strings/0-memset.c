#include "main.h"

/**
 * _memset - function to fill memory with a constant byte
 * @s: pointer variable
 * @b: variable with the constant character value
 * @n: n byte to be filled
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
