#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: pointer to the list
 * @index: the index of the node, starting at 0
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (n < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		n++;
	}
	return (head);
}
