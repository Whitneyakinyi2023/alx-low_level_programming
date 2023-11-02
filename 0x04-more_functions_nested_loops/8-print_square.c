#include "main.h"
/**
 * print_square - prints out squares
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int w;
	int x;

	if (size <= 0)
		_putchar('\n');

	for (w = 0; w < size; w++)
	{
		for (x = 0; x < (size); x++)
		{
			_putchar ('#');
		}
	}
}
