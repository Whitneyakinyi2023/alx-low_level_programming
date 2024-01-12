#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head node
 * @index: index of the node, starting from 0
 * Return: Node and if it  does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *current = head;

	while (current != NULL && n < index)
	{
		current = current->next;
		n++;
	}
	return (current);
}
