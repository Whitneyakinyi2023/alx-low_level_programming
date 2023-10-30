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
	unsigned int q;

	t = malloc(sizeof(*t));

			if (t == 0)
			return (NULL);
			for (q = 0; q < size; q++)
			q[t] = c;
			return (t);
			if (size == 0)
			return (NULL);
			}
