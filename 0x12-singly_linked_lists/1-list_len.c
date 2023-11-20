#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * list_len - function that returns the number of elemenents
 * @h: head node
 * Return: count the number of element
 */

size_t list_len(const list_t *h)

{
	int  count = 0;

	while (h != NULL)
	count++;

	h = h->next;

	return (count);

	if (h == NULL)
		return (0);

}
