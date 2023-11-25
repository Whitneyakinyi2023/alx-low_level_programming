#include "main.h"

/**
 * set_bit - unction that sets the value of a bit to 1 at a given index.
 * set_bit - unction that sets the value of a bit to 1 at a given index.
 * @index: ..
 * @n: pointer: ..
 * Return: 1 if succussful -1 if otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > sizeof(unsigned int) + 8)
		return (-1);
	x = 1;
	x = x << index;
	*n = ((*n) | x);
	return (1);
}
