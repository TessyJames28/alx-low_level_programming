#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: a const pointer with type list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
