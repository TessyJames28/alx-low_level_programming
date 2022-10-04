#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: points to a string that will be duplicated
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *strptr;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = 1;
	while (str[len])
		len++;
	strptr = (char *)malloc(len * sizeof(char) + 1);
	if (strptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		strptr[i] = str[i];
	}
	strptr[i] = '\0';
	return (strptr);
}
