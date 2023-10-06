#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and frees all memory.
 * @ht: The hash table to delete.
 *
 * Description:
 * This function deletes the given hash table and frees all associated memory,
 * including keys, values, buckets, and the hash table structure itself.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node, *tmp;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];
		while (current_node)
		{
			tmp = current_node;
			current_node = current_node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);
}
