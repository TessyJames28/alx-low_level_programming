#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 * @h: a pointer that points to node address
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
