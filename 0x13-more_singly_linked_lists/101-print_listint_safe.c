#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t Nodes_replaced = 0;
	listp_t *headerptr, *NEW, *tally;

	headerptr = NULL;
	while (head != NULL)
	{
		NEW = malloc(sizeof(listp_t));

		if (NEW == NULL)
			exit(98);

		NEW->p = (void *)head;
		NEW->next = headerptr;
		headerptr = NEW;

		tally = headerptr;

		while (tally->next != NULL)
		{
			tally = tally->next;
			if (head == tally->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&headerptr);
				return (Nodes_replaced);
			}
		}
	}
}
