#include <stdio.h>

void print(void) __attribute__((constructor));

/**
 * print - function that prints a string before the main function is executed.
 * Return: nothing
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
