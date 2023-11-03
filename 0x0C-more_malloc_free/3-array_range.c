#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range -  function that creates an array of integers.
 * @min: Minimum value
 * @max: Maximum value
 * Return: Pointer
 */

int *array_range(int min, int max)
{
	int b = 0;
	int *d;

	/*declaration of variables and initialization to zero*/

	if (min > max)
		return (NULL);
	/*Satisfies the function If min > max, return NULL*/

	d = malloc((sizeof(int) * (max - min)) + sizeof(int));

	/*
	 * allocates memory for a dynamic array of integer
	 * s, where the size of the array is equal to the maximum value minu
	 * s the minimum value, plus one.
	 * The extra sizeof(int) at the end is to allocate space for an
	 * additional integer element at the end of the array.
	 * This can be useful for sentinel values or other purposes
	 */
	if (d == NULL)
		return (NULL);

	while (min <= max)
	{
		d[b] = min;
		b++;
		min++;
	}

	return (d);
}
