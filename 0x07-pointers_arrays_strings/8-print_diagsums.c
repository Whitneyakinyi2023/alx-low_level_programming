#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sum of the two diagonals
  * @size:size  parameter
  * @a: parameter
  * Return: 0 (Successful)
  */

void print_diagsums(int *a, int size)
{
	int calc1;
	int calc2;
	int t;

	calc1 = 0;
	calc2 = 0;

	for (t = 0; t < size; t++)
	{
	calc1 = calc1 + a[t * size + t];
	}
	for (t = size - 1; t >= 0; t--)
	{
	calc2 += a[t * size + (size - t - 1)];
	}
	printf("%d, %d\n", calc1, calc2);
}

