#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to list address
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextnode, *prevnode = 0;

	nextnode = *head;

	while (*head != 0)
	{
		*head = (*head)->next;
		nextnode->next = prevnode;
		prevnode = nextnode;
		nextnode = *head;
	}
	*head = prevnode;

	return (*head);
}

