#include <stdio.h>
/**
 * main - Entry point
 * Description 'single didgits to the base of 10'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar (n + '0');
	}

	putchar ('\n');
	return (0);
}
