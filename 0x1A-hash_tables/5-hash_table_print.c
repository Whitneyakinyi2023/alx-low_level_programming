#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 * Return: NULL if ht is nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash_node;
	unsigned long int w;
	unsigned char operator = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (w = 0; w < ht->size; w++)
	{
		if (ht->array[w] != NULL)
		{
			if (operator == 1)
				printf(", ");

			hash_node = ht->array[w];
			while (hash_node != NULL)
			{
				printf("'%s': '%s'", hash_node->key, hash_node->value);
				hash_node = hash_node->next;
				if (hash_node != NULL)
					printf(", ");
			}
			operator = 1;
		}
	}
	printf("}\n");
}
