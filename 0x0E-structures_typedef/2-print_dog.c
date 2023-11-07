#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d : pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return
			printf("Name:(nil)\n");
	else
		printf("Name%s\n", d -> Name);
	if (d == NULL)
		return
			printf("Age:(nil)\n");
	else
		printf("Age%f\n", d -> Age);
	if (d == NULL)
		return
			printf("Owner:(nil)\n");
	else
		printf("Owner%s\n", d -> Owner);
}
