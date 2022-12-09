#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list
 * @head: head pointer to the list
 * @n: list data
 * Return: address of the new element or NULL is it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tail;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = 0;

	tail = *head;

	if (*head == 0)
		*head = newnode;
	else
	{
		while (tail->next != 0)
			tail = tail->next;

		tail->next = newnode;
		newnode->prev = tail;
	}

	return (newnode);
}
