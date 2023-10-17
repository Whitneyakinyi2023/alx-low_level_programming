#include "main.h"
/**
 * print_rev - Prints string in reverse
 * @s: string in function
 * Return: 0
 */

void print_rev(char *s)
{
	int original_start_point = 0;

	while (s[original_start_point])
		original_start_point++;
	while (original_start_point--)
		_putchar(s[original_start_point]);
	_putchar ('\n');
}
