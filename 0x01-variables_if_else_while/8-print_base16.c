#include <stdio.h>
/**
 * main - Start point
 * Description: 'print numbers to the base of 16'
 * Return: always 0
 */
int main(void)
{
	int n;
	int q;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (q = 97; q <= 102; q++)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
