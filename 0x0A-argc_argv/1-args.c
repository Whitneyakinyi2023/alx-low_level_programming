#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of arguments to be printed
 * @argv:array of arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	/*Function that ignores argv,suppress any warning indicating unsed variable*/
	printf("%d\n", argc - 1);

	/*Print the number of arguments passed but excludes the program name)*/
	return (0);
}
