#include <stdlib.h>

/**
 * create_array - main function that creates an array of chars
 * and initialize it with specific character
 * @size: unsigned integer size to calculate size of data type
 * @c: variable that holds the specif char
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
