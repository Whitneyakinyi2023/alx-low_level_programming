#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialization
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if(d != NULL)
	{
		d -> owner = owner;
		d -> age = age;
		d -> name = name;
	}
}
