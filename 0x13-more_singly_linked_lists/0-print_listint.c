#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: a pointer that points to the node address
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != 0)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
