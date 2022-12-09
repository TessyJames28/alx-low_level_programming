#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * index of a dlistint_t linked list
 * @head: head pointer to the list
 * @index: position to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;

	if (*head == NULL && temp == NULL)
		return (-1);

	if (index == 0)
	{
		if (temp->next)
			temp->next->prev = NULL;
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;

	free(temp);

	return (1);
}
