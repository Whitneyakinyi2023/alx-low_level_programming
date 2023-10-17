#include "main.h"
/**
 * puts_half - function prints second half of string
 * @str: string in question
 * Return: 0
 */
void puts_half(char *str)
{
	int full;
	int second;

	full = 0;
	while (str[full] != '\0')
		full++;

	second = full / 2;

	if (full % 2 == 1)
		second++;

	while (second < full)
		_putchar(str[second]);
	second++;
	_putchar ('\n');
}
