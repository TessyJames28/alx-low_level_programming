#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a dlistint_t list
 * @head: head pointer to the nodes
 * @n: data part of the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->prev = 0;
	newnode->n = n;
	newnode->next = *head;

	if (*head)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
