#include "main.h"
/**
 * *_strcat - Concentates two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * Return: to the destination
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int c;

	len = 0;
	
	while (dest[len] != '\0')
	{
		len++;
	}
	
	for  (c = 0; src[c] != '\0'; c++, len++)
	{
		dest[len] = src[c];
	}
	dest[len] = '\0';
	return (dest);
}
