#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: head node of a list
 * @str: To be dupilcated
 * Return: New node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *holder = *head;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (holder->next)
		holder = holder->next;
	holder->next = new_node;
	return (new_node);
}

/**
* _strlen - finds the length of a string
* @str: string to find the length of
*
* Return: length of string
*/
unsigned int _strlen(char *str)
{
	unsigned int x;

	for (x = 0; str[x]; x++)
	return (x);
}
