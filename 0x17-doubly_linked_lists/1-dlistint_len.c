#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to head
 * Return: Number of elementa in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_tally = 0;

	while (current != NULL)
	{
		current = current->next;
		node_tally++;
	}

	return (node_tally);
}
