#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to the list address
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *nextnode = NULL;

	temp = *head;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);

		temp = temp->next;
		i++;
	}

	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);

	return (1);
}
