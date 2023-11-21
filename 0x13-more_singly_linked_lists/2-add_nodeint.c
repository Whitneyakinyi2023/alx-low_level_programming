#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - unction that adds a new node at the start
 * @head: Pointer to the head node
 * @n:...
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Node_added = (listint_t *) malloc(sizeof(listint_t));

	{
		if (Node_added == NULL)
			return (NULL);
	}
	Node_added->n = n;

	{
		Node_added->next = *head;
		*head = Node_added;
	}
	return (Node_added);

}
