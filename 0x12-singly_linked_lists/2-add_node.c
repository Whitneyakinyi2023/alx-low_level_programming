#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* _strlen - function that returns the length of a string
* @s:..
* Return: value is i
*/
int _strlen(const char *s)
{
	int x = 0;
	
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
* add_node - add a new node at beginning of a list_t list.
* @head: head of a list_t list.
* @str: value to insert into element.
* Return: the number of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *tally;

	tally = malloc(sizeof(list_t));
	if (tally == NULL)
		return (NULL);
	tally->str = strdup(str);
	
	tally->len = _strlen(str);
	tally->next = *head;
	*head = add;
	
	return (tally);
}
