#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts lower case to upper case
 *
 * Return: 0
 */
char *string_toupper(char *)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
