#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get -  function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: the key
 * Return: Value of key or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *hash_node;

	if (ht == NULL)
		return (NULL);
	if (*key == '\0')
		return (NULL);
	if (key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	hash_node = ht->array[i];
	while (hash_node && strcmp(hash_node->key, key) != 0)
		hash_node = hash_node->next;

	return ((hash_node == NULL) ? NULL : hash_node->value)
}
