#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - Returns a pointer to the allocated memory
 * @b: Size
 * Return: pointer to storage
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98); /*Exit with error code 98 if allocation fails.*/
	return (x); /* Return a pointer to the allocated memory if successful.*/
}
