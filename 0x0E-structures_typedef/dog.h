#ifndef DOG_H
#define DOG_H

/**
 * struct dog - New type
 * @name: name
 * @age: Age
 * @owner: owner
 */

struct dog

{
	char  *name;
	char *owner;
	float *age;
};

/**
 * dog_t - Typedef for dog structure
 */
type def struct dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
