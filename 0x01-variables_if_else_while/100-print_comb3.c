#include <stdio.h>
/**
 * main - entry point
 * Description : prints possible combination of single digits
 * Return: 0
 */
int main(void)
{
	int x = '0';
	int w;

	while (x <= '9')
	{
		w = '0';
			while  (w <= '9')
			{
				if (x < w)
				putchar(x);
				putchar(w);
				if (x != '8' || (x == '8' && w != '9')
						}
						putchar(',');
						putchar(' ');
						}
						w++;
						}
						x++;
						putchar('\n');
						return (0);
}
