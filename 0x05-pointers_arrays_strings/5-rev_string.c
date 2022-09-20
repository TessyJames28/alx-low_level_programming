#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: pointer variable for type char
 * Return: nothing
 */
void rev_string(char *s)
{
	int n, a, Aux;

	n = 0;
	a = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	n--;
	while (n > a)
	{
		Aux = s[n];
		s[n--] = s[a];
		s[a++] = Aux;
	}
}
