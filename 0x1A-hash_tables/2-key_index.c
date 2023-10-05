#include "hash_tables.h"

/**
 * key_index - Computes the index of a key in a hash table.
 * @key: The key to be indexed.
 * @size: The size of the hash table's array.
 *
 * Return: The index at which the key should be stored in the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
