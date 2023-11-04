#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _print - functionn that pushes sring to left and print
 * @string: String in question
 * @h: string size
 * Rerurn: void
 */
void _print(char *string, int h)
{
	int m;
	int k;

	m = k = 0;

	while (m < h)
	{
		if (string[m] != '0')
			k = h;
		if (k || m == h - 1)
			_putchar(string[m]);
		m++;
	}
	_putchar('\n');
	free(string);
}

/**
 * mul - multiplies char with string
 * then places anser to dest (destination)
 * @x: char to multiply
 * @number: string to multiply
 * @num_index: final NULL index
 * @dest: Destination
 * @dest_index: greatest to start addition
 * Return: To destination
 */
char *mul(char x, char *number, int num_index, char *dest, int dest_index)
{
	int a;
	int b;
	int plus;
	int multipication;
	int ar;
	int mr;

	mr = ar = 0;

	for (a = num_index, b = dest_index; a >= 0; a--, b--)
{
	multipication = (x - '0') * (number[a] - '0') + mr;
	mr = multipication / 10;
	plus = (dest[b] - '0') + (multipication % 10) + ar;
	ar = plus / 10;
	dest[b] = plus % 10 + '0';
}
for (ar += mr; b >= 0 && ar; b--)
{
	plus = (dest[b] - '0') + ar;
	ar = plus / 10;
	dest[b] = plus % 10 + '0';
}
if (ar)
{
	return (NULL);
}
return (dest);
}
