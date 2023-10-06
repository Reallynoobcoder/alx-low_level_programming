#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 *
 * Description: This function prints the contents of the hash table in the
 * format "{key: value, key: value, ...}". If the hash table is NULL, it does
 * not print anything.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node;
	int flag = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];
		while (current_node != NULL)
		{
			if (!flag)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			flag = 0;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
