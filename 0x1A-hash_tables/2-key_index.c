#include "hash_tables.h"

/**
 * key_index - a function that gives the index of a key.
 * @key: is the key to find its index.
 * @size: is the size of the array of the hash table.
 *
 * Return:  index at which the key/value pair should be
 * stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
		return (0);

	hash = hash_djb2(key);

	return (hash % size);
}
