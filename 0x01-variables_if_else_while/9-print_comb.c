#include <stdio.h>
/**
 * main - entry point
 * Description: 'all possible combinations of single digit numbers'
 * Return: Always 0
 */
int main(void)
{
	int w;

	for (w = 48; w <= 57; w++)
	{
		putchar (w);
		if (w == 57)
		{
			continue;
		}
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
}
