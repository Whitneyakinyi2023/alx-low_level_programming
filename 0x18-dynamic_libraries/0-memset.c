#include "main.h"
#include <stdio.h>
/**
 * *_memset - function fills the first n bytes of the memory area
 * @b: constant
 * @s: memory
 * @n: Number of type
 * Return: To the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
