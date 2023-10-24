#include "main.h"
/**
  * _memcpy - main function prototype
  * @src: Source pointer
  * @dest: Destination pointer
  * @n: Number of times
  * Return: Destination
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
	dest[j] = src[j];
	}
	return (dest);
}
