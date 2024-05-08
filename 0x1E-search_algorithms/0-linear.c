#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers
 * @value: is the value to search for
 * @array: pointer to first element
 * @size: Number of elements in an array
 * Return: int
 */
 int linear_search(int *array, size_t size, int value)
{
    size_t x;

     if (array == NULL || size == 0)
     {
        return -1;
     }

    for (x = 0; x < size; x++)
    {
        printf("Value checked array[%lu] = [%d]\n", x, array[x]);
        }
        if (array[x] == value)
        {
            return x;
            }
            return -1;
}