#include "main.h"
#include <stddef.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: unsigned integer index
 * Return: 1 if successful -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	x = 1;
	x = x << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = x ^ *n;

	return (1);
}
