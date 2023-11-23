#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temporary_holder;
	listp_t *current_holder;

	if (head != NULL)
	{
		current_holder = *head;

		while ((temporary_holder = current_holder) != NULL)
		{
			current_holder = current_holder->next;

			free(temporary_holder);

		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t Nodes_replaced = 0;
	listp_t *headerptr, *NEW, *tally;
	listint_t *curr_holder;

	headerptr = NULL;

	while (*h != NULL)
	{
		NEW = malloc(sizeof(listp_t));

		if (NEW == NULL)
			exit(98);

		NEW->p = (void *)*h;
		NEW->next = headerptr;
	 headerptr = NEW;

		tally = headerptr;

		while (tally->next != NULL)
		{
			tally = tally->next;
			if (*h == tally->p)
			{
				*h = NULL;
				free_listp2(headerptr);
				return (Nodes_replaced);
			}
		}

		curr_holder = *h;
		*h = (*h)->next;
		free(curr_holder);
		Nodes_replaced++;
	}

	*h = NULL;
	free_listp2(headerptr);
	return (Nodes_replaced);
}
