#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string destination
 * @s2: string source
 * @n: size required memory
 * The returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * Return: pointer to newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int a = 0, b = 0, i, j, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	if (n >= b)
		n = b;

	concat = malloc(sizeof(char) * (a + n) + 1);
	/* length of s1 and s2 + 1 to account for the null terminator*/
	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[l++] = s1[i];
	for (j = 0; j < n; j++)
		concat[l++] = s2[j];

	concat[l] = '\0';
	return (concat);
}
