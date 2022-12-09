#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: head pointer to the list
 * @index: the index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nextnode = head;
	unsigned int idx = 0;

	while (nextnode != NULL)
	{
		if (idx == index)
			return (nextnode);

		nextnode = nextnode->next;
		idx++;
	}
	return (nextnode);
}
