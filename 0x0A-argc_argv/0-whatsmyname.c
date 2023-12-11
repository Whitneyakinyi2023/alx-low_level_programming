#include <stdio.h>
#include "main.h"
/**
 * main - Entry point for the program.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to strings containing the arguments.
 * Return: Always 0 (Success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
  /* Print the program name using the first element of argv.*/
  /* Return 0 to indicate successful execution*/
}
