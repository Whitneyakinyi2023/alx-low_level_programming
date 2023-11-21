#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: Head node pointer
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t tally = 0;

	if  (h != NULL)
	{
		tally++;
		h = h->next;
	}
	return (tally);
}
