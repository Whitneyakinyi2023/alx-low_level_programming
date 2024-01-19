#include "main.h"
/**
  * _strstr - main function
  * @needle: Sub-string
  * @haystack: String
  * Return: 0(Successful)
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *w = haystack;
	char *c = needle;

	while (*w == *c && *c != '\0')
	{
	w++;
	c++;
	}
	if (*c == '\0')
	return (haystack);
	}
	return (0);
}
