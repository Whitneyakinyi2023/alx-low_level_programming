#include "main.h"
/**
 * void reset_to_98 - updates pointer to 98
 * @n :integer in question
 * Return: Always 0 (Successful)
 */

void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	
	_putchar("Address of 'n': %p\n", &n);
	return (0);
}
