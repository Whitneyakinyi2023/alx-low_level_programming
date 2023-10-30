#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes it
 * @c: Character in use
 * @size: Array size
 * Return: pointer is successful NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
	return (NULL);

	t = malloc(size * sizeof(char));

			if (t == 0)
			return (NULL);
			for (i = 0; i < size; i++)
			i[t] = c;
			return (t);
}
