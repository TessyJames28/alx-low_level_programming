#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds new node at the beginning of a list_t lists
 * @head: pointer that points to the first node
 * @str: pointer to new node
 * Return: address of the new element, or NU if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str1;
	int len = 0;
	list_t *newnode;

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
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
