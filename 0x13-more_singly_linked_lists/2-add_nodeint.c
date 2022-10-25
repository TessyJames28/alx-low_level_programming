#include "lists.h"

/**
 * add_nodeint - function that adds new node at the beginning of a linked list
 * @head: pointer that points to the list address
 * @n: new node
 * Return: address of the new element or null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
