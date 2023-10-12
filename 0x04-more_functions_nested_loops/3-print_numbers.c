#include "main.h"
/**
 * print_numbers - print out numbers
 * @x :Character to be used
 * Return: Always 0 Successful
 */

void print_numbers(void)

{
	char x;

	for (x = '0'; x <= '9'; x++)

	{
		_putchar(x);
	}
	_putchar('\n');
}
