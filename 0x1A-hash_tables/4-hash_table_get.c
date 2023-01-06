#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table to be search
 * @key: key to lookup
 *
 * Return: value associated with key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	if (node == NULL)
		return (NULL);

	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return (node->value);
}
