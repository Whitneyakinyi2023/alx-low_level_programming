#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: Hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *start = ht;
	hash_node_t *node;
	hash_node_t *temp;
	unsigned long int x;

	for (x = 0; ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			node = ht->array[x];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(start->array);
	free(start);
}
