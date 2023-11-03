#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - a function that reallocates a memory block
 * @ptr: pointer to previous memory
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *x;
	unsigned int a;
	unsigned int b;
	char *old = ptr;

	a = b = new_size;
	
	if (ptr == NULL)
	{
	x = malloc(new_size);
	return (x);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	x = malloc(new_size);
	if (x == NULL)
		return (NULL);
	if (new_size > old_size)
		b = old_size;
	for (a = 0; a < b; a++)
		x[a] = old[a];
	free(ptr);
	return (x);
}
