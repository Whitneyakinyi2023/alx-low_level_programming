#include "main.h"

/**
 * times_table - prints the 9 times table
 * Description: prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int current_row;
	int current_column;
	int answer;
	int tens_digit;
	int units_digit;

	for (current_row = 0; current_row <= 9; current_row++)
	{
		for (current_column = 0; current_column <= 9; current_column++)
		{
			answer = current_row * current_column;
			tens_digit = answer / 10;
			units_digit = answer % 10;

			if (current_column == 0)
			{
				_putchar('0');
			}
			else if (answer < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(units_digit + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens_digit + '0');
				_putchar(units_digit + '0');
			}
		}
		_putchar('\n');
	}
}
