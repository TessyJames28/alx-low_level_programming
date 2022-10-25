#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts new node at a given position
 * @head: pointer to the list address
 * @idx: given position
 * @n: newnode data
 * Return: address of the new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int index = 0;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	temp = *head;
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (newnode);
	}

	while (index < idx - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
		index++;
	}
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
