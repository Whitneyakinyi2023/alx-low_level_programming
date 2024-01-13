#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function.
 * @h: head
 * @n: integer
 * @idx: index
 * Return: address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int x;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	current = *h;
	for (x = 0; x < idx - 1 && current; x++)
		current = current->next;
	if (!current)
	{
		free(new);
		return (NULL);
	}
	new->prev = current;
	new->next = current->next;

	if (current->next)
		current->next->prev = new;

	current->next = new;

	return (new);
}
