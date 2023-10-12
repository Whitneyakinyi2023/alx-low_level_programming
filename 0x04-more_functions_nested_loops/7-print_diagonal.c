#include "main.h"
/**
 * print_diagonal - puts out a diagonal line
 * @n :variable in use
 * Return : void
 */

void print_diagonal(int n)
{
	int x;
	int p;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; n++)
	{
		for (p = 0; p < x; p++)
		{
			_putchar(' ');

		}
		_putchar('\\');
		_putchar('\n');
	}
}
