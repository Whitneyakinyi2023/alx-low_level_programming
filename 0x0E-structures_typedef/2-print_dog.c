#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)

	printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d == NULL)

	printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d == NULL)

	printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
