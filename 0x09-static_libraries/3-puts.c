#include "main.h"
/**
 * _puts - prints string
 * @str: pointer
 * Return:string
 */

void _puts(char *str)
{
	int f = 0;

	while (str[f])
	{
		_putchar(str[f]);
		f++;
	}
	_putchar('\n');
}
