#include "main.h"
/**
 * rev_string - Reverses the string
 * @s: pointer
 * Return: 0
 */

void rev_string(char *s)
{
	int i, len, halfway;
	char temporary;

	for (len = 0; s[len] != '\0'; len++)
		i = 0;
	halfway = len / 2;

	while (halfway--)

	{
		temporary = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temporary;
		s++;
	}
}
