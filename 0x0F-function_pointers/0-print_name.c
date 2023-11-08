#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: name
 * @f: pointer to above function
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
