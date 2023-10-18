#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: First string pointer
 * @s2: Second string poiner
 * Return: 0 if less than other
 */

int _strcmp(char *s1, char *s2)

{
	int c;
	int q;
c = 0;

while (s1[c] == s2[c] && s1[c] != '\0')
{
	c++;
}
q = s1[c] - s2[c];
return (q);
}
