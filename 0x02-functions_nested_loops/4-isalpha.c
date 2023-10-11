#include "main.h"

/**
 * _isalpha - Checks for alphabetic character presence
 * @c: Character to be checked
 * Return: 1 for alphabet character or 0 for non-alphabetic
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))

	{
		return (1);
	}

	return (0);
}
