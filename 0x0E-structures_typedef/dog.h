#ifndef DOG_H
#define DOG_H

/**
 * struct dog - New type
 * @name: name
 * @age: Age
 * @owner: owner
 */

typedef struct dog
{
	float age;
	char *owner;
	char *name;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);
#endif
