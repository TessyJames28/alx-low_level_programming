#include "main.h"

/**
 * _strchr - function to locate a character in a string
 * @s: the string to be searched
 * @c: the character to be located
 * Return: pointer to the first occurence, else NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
