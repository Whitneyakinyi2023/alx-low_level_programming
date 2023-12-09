#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: to be freed
 */
void free_list(list_t *head)
{
	list_t  *holder;

	while (head)
	{
		holder = head->next;
		free(head->str);
		free(head);
		heade = holder
	}
}
