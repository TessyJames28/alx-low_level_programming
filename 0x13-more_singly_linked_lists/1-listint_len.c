#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the list address
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
