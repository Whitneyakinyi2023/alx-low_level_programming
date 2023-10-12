#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n : Numer to be evaluated
 * Return: Value of last digit
 */

int print_last_digit(int n)

{

	int last;

	last = n % 10;
	if  (last < 0)
	{
	last = last * -1;
	}
_putchar(last + '0');
return (last);
}
