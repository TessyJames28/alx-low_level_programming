#include "hash_tables.h"

/**
 * key_index - a hash function that gives the index of a key
 * @key: the hash key
 * @size: array size
 *
 * Return: index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2((unsigned char *)key);
	index %= size;

	return (index);
}
