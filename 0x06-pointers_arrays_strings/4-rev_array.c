#include "main.h"

/**
 * reverse_array - Reverses  arrays of integers
 * @a: array of integers
 * @n: elements number to swap
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int t;
	int q;

	n = n - 1;
	q = 0;
	while (q <= n)
	{
		t = a[q];
		a[q++] = a[n];
		a[n--] = t;
	}
}
