#include <stdio.h>
#include "main.h"
/**
 * get_bit - unction that returns the value of bit
 * @index: index..
 * @n: integer..
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (index > sizeof(size_t) + 8)
		return (-1);

	for (x = 0; x < index; x++)
		n = n >> 1;
	return ((n & 1));
}
