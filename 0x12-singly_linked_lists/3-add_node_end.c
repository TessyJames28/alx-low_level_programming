#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: a pointer to the head of list_t list
 * @str: the string to be added to the list_t list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str1;
	int len = 0;
	list_t *newnode, *temp;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	str1 = strdup(str);
	if (str1 == NULL)
	{
		free(str1);
		return (NULL);
	}

	while (str[len])
		len++;

	newnode->str = str1;
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (*head);
}
