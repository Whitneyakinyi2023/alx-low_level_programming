#include "main.h"
/**
 * *_strncat - Concentanates two strings
 * @src: source string pointer
 * @dest: destination string pointer
 * @n: bytes to be concentated
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)

{
	int len;
	int a;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (a = 0; a < n && src[a] != '\0'; a++, len++)
	{
		dest[len] = src[a];
	}
	dest[len] = '\0';
	return (dest);
}
