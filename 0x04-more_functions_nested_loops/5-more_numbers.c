#include "main.h"
/**
 * more_numbers - Prints more numbers than previous
 * return: void
 */

void more_numbers(void)

{
	int q;
	int t;

	for (q = 1; q <= 10; q++)

	{
		for (t = 0; t <= 14; t++)
		{
			if (q <= 10)
				_putchar(t);
			_putchar (t % 10 + '0');
		}
		_putchar('\n');
	}
}
