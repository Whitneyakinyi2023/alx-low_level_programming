#include "main.h"
/**
  * _strspn - main function
  * @s: String
  * @accept: Byte retrieval
  * Return: Always 0.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int _strspn(char *s, char *accept);
	unsigned int x = 0;
	int t;

	while (*s)
	{
	for (t = 0; accept[t]; t++)
	{
	if (*s == accept[t])
	{
	x++;
	break;
	}
	else if (accept[t + 1] == '\0')
	return (x);
	}
	s++;
	}
	return (x);
}
