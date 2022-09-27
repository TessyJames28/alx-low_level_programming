#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string that contained char to be scanned
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, check, byte;

	byte = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				byte++;
				check = 1;
			}
		}
		if (check == 0)
			return (byte);
	}
	return (byte);
}
