#include <stdio.h>
/**
 * main - entry point
 * Description : 'output of possible singke digit combinations'
 * Return: Always 0
 */

int main(void)
{

	int t;
	int x;

	for (t = '0'; t <=  9; t++)
	{
		for (x = 0; x <= '9'; x++)
		{
			if (x != t)
			{
				putchar(x);
				putchar(t);
				if  (x == '8' ||  t == '9')
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
