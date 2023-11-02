#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - function that concatenates two strings.
 * @n: Unsigned int
 * @s1: Pointer to string 1
 * @s2: Pointer to string 2
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b =  0;
	unsigned int c = 0;
	unsigned int d = 0;
	char *string;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	while (s2[a])
		a++;

	while (s1[b])
		b++;

	if (n >= a)
		c = b + a;
	else
		c = b + n;

	string = malloc(sizeof(char) * c + 1);
	if (string == NULL)
		return (NULL);

	a = 0;
	while (d < c)
	{
		if (d <= b)
			string[d] = s1[d];
		if (d >= b)
		{
			string[d] = s2[a];
			a++;
		}
		d++;
	}
	string[d] = '\0';
	return (string);
}
