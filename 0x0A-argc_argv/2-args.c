#include <stdio.h>
#include "main.h"
/**
 * main -  program that prints all arguments it receives.
 * @argc: Number of arguements
 * @argv: Argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int w;


	for (w = 0; w < argc; w++)
		/*Loop through all elements of the command line arguements*/
	{
		printf("%s\n", argv[w]);
	}
	return (0);
}
