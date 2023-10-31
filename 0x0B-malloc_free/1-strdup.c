#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup -  returns a pointer to a new string
 * @str: Duolicated string
 * @s: New destination
 * @t: Integer
 * @w: integer
 * Return: NULL if str is NULL or there is insufficient memory
 */

char *_strdup(char *str)
{
	char *s;
	int w = 0;
	int t = 1;

	if (str == NULL)
	return (NULL);

	while (str[t])
	{
		t++;
	}
	s = malloc((sizeof(char) * t) + 1);

	if (s == NULL)
		return (NULL);

	while (w < t)
	{
		str[w] = s[w];
		w++;
	}
	s[w] = '\0';
	return (s);

}
