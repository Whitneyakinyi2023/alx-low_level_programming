#include <stdlib.h>
#include "dog.h"
/**
 *  _strlen - returns the length of a string
 *  @s: string
 *  Return: the length of the string
 */
int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer to the buffer in which we copy the string
 * @src: string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int c;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (c = 0; c < len; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: ..
 * @age: ..
 * @owner: ..
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *new_dog;

	int L1;
	int L2;

	L2 = _strlen(name);
	L1 = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->owner = malloc(sizeof(char) * (L1 + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * (L2 + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
