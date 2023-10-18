#include "main.h"
/**
 * _atoi - Function that turns string to integer
 * @s: String in question
 * Return: int
 */

int _atoi(char *s)
{
	int x;
	int w;
	int y;
	int z;
	int len;
	int num;

	w = 0;
	x = 0;
	y = 0;
	z = 0;
	len = 0;
	num = 0;

	while (s[len] != '\0')
	len++;

	while (w < len && z == 0)
{
	if (s[w] == '-')
		++x;
	{
		if (s[w] >= '0' && s[w] <= '9')
		{
			num  = s[w] - '0';
			if (x % 2)
				num = -num;
			y = y * 10 + num ;
			z = 1;
			if (s[w + 1] < '0' || s[w + 1] > '9')
				break;
			z = 0;
		}
		w++;
	}

	if (z == 0)
		return (0);
	return (y);
}

