#include "main.h"

/**
 * _strcpy - function to copy string pointed to by a varaible
 * @dest: pointer variable
 * @src: pointer variable
 * Return always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
