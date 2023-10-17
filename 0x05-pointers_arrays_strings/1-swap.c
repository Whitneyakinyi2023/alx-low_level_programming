#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @a :second integer
 * @b :Second integer
 * Returns: 0 (Always)
 */

void swap_int(int *a, int *b)
{
	int u;

	u = *a;
	*a = *b;
	*b = u;
}
