#include <stdio.h>
/**
 * main - entry point
 * Description: 'output of possible singke digit combinations'
 * Return: Always 0
 */

int main(void)
{
	int t;
	int x;

	for (t = 0; t <=  8; t++)
	{
		for (x = t + 1; x <= 9; x++)
		{

			{
				putchar(x + '0');
				putchar(t + '0');
				if  (x != 8 || t != 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
		return (0);
}
