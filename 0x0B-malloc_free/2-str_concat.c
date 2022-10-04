#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string destination and a pointer
 * @s2: string source and a pointer
 * Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1) != '\0')
		len1++;

	while (*(s2 + len2) != '\0')
		len2++;

	str = malloc(1 + (len1 * sizeof(*s1)) + (len2 * sizeof(*s2)));
	if (str == NULL)
		return ('\0');

	for (i = 0; i < len1; i++)
		str[i] = *(s1 + i);

	for (j = 0; j < len2; j++, i++)
		str[i] = *(s2 + j);

	return (str);
}
