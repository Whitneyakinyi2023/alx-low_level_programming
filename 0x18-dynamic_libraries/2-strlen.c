#include "main.h"
/**
 * _strlen - checks length of a string
 * @s :string used
 * Return:The length of the string
 */

int _strlen(char *s)
{
	int length = 0;

		while (s[length])
			length++;
	return (length);
}
