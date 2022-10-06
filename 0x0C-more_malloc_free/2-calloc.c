#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: character type
 * @size: size of memory to be allocated
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calloc = malloc(nmemb * size);
	if (calloc == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		calloc[i] = 0;

	return (calloc);
}
