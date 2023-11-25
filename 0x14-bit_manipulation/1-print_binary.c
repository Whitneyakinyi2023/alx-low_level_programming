#include <stdio.h>
#include "main.h"
/**
 * print_binary - Prints binary representation of a number
 * @n:..
 * Return:Num
 */
void print_bi(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 0) == 0)
		_putchar('0');
}
/**
 * print_binary - Prints binary representation of a number
 * @n:..
 * Return:Num
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bi(n);
	}
}
