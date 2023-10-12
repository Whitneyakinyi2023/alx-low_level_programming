#include "main.h"

/**
 * print_sign - Sign of a number will be printed out
 * @n: Number to be checked
 * Return: 1 for postive, -1 for negative and zero for all others
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);

}
