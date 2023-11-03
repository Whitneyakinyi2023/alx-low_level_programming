#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: Elements needig memory allocation
 * @size: bytes required
 * Return: NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
/*Check if the number of elements or the size of each element is zero*/
{
	int a = 0;
	int b = 0;
	/*Initialization of  all of the bytes in the allocated memory to zero*/
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = nmemb * size;

	/*Calculate the total amount of memory to allocate.*/

	t = malloc(a);
	/*Allocate the memory using malloc()*/

	if (t == NULL)
		return (NULL);
	while (b < a)
	{
		t[b] = 0;
		b++;
	}

	return (t);
}
