#include "search_algos.h"
#include "math.h"

/**
 * jump_list - jump search algorithm function using sorted linked list
 * @list: poiter to the head of the list to search in
 * @size: size of the list
 * @value: value to search for
 * Return: a pointer to the first node where value is located or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_size = sqrt(size);
	listint_t *left = list, *right = list;
	size_t index = 0, c = 0;

	if (list == NULL || size == 0)
		return (NULL);

	while (index < size && right->next && right->n < value)
	{
		left = right;
		c++;
		index = c * jump_size;

		while (right->next && right->index < index)
			right = right->next;

		if (right->next == NULL && index != right->index)
			index = left->index;

		printf("Value checked at index [%d] = [%u]\n", (int)index, right->n);
	}
	printf("Value found between indexes [%lu] and", left->index);
	printf(" [%lu]\n", right->index);
	while (left && left->index <= right->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", left->index, left->n);
		if (left->n == value)
			return (left);
		left = left->next;
	}
	return (NULL);
}

