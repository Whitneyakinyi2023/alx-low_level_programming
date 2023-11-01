#include "main.h"

/**
  * _strpbrk - function that searches a string for any of a set of bytes
  * @s: String
  * @accept: Return of byte
  * Return: 0.
  */
char *_strpbrk(char *s, char *accept)
{
	int b, a;

	for (b = 0; s[b] != '\0'; b++)
	{
	for (a = 0; accept[a] != '\0'; a++)
	{
	if (s[b] == accept[a])
	return (s + b);
	}
	}
	return (0);
}
