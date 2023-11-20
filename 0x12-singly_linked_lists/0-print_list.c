#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: Head of the node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int x;

	if (h == NULL)
		return (0);

	for (x = 1; h->next != NULL; x++)

	{
		if (h->str == NULL)

		printf("[%u] %s\n", h->len, "(nil)");

		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
printf("[%u] %s\n", h->len, "(nil)");
return (x);
}
