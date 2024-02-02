#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create -  function that creates a hash table.
 * @size: Size of the array
 * Return: pointer to the newly created hash table NULL otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int x;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		hash->array[x] = NULL;

	return (hash);
}
