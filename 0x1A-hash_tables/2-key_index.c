#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: the key
 * @size: the size o the array of the hash table
 *
 * Return: index at which the k/v pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);

	return (hash_djb2(key) % size);
}

