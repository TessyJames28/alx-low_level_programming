# include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to be searched
 * @needle: string containing characters to be matched
 * Return: a pointer to the beginning of located string
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *ptrhay = haystack;
		char *ptrneed = needle;

		while (*ptrhay == *ptrneed && *ptrneed != '\0')
		{
			ptrhay++;
			ptrneed++;
		}
		if (*ptrneed == '\0')
			return (haystack);
	}
	return (NULL);
}
