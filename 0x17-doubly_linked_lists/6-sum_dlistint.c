#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * @head: head node
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int tally = 0;

	for (dlistint_t *current = head; current != NULL; current = current->next)

	{
		tally += current->n;
	}
	return (tally);
}
