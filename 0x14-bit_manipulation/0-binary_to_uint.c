#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Pointer to a charactyer string
 * Return: 0 or null
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int decVal = 0;

	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		decVal <<= 1;
		if (b[x] == '1')
			decVal += 1;
	}
	return (decVal);
}
