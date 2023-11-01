#include "main.h"
/**
  *_strchr - function that locates a character in a string
  * @s: String in question
  * @c: Character in question
  * Return: 0 (Successful).
  */
char *_strchr(char *s, char c)
{
	int w;

	for (w = 0; s[w] >= '\0'; w++)
	{
	if (s[w] == c)
	return (s + w);
	}
	return (0);
}


