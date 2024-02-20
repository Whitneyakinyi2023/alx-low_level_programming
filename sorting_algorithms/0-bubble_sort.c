#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "sort.h"
/**
 * bubble_sort - function that sorts an array using bubble sort
 * @array: Array
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	/* Outer loop iterates for each pass through the array*/
	for (a = 0; a < size - 1; a++)
	{
		bool swapped = false;
		/* Flag to track if any swaps occurred in the current pass*/

        /*Inner loop compares adjacent elements*/
        for (b = 0; b < size - a - 1; b++)
	{
		if (array[b] > array[b + 1])
		{
			/* Swap elements if they are in the wrong order*/
			int temp = array[b];
			array[b] = array[b + 1];
			array[b + 1] = temp;
			swapped = true; /* Set flag to indicate a swap occurred*/
		}
        }

        /* Optimization: If no swaps occurred in the current pass, the array is already sorted*/
	if (!swapped)
	{
		break;
        }
    }
}
