#include "main.h"
/**
 *  *_strncpy - Copies a string
 *  @src: Pointer to source string
 *  @dest: Pointer to destination string
 *  @n: Bytes used
 *  Return: To the destination string
 */

char *_strncpy(char *dest, char *src, int n)

{
	int bytes_used;

	for (bytes_used = 0; bytes_used < n && src[bytes_used] != '\0'; bytes_used++)
		dest[bytes_used] = '\0';

	return (dest);
}
