#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 1024
#include <sys/stat.h>
/**
 * main - function that program that copies the content of a file to another file..
 * @argc: the number of arguments
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char **argv)
{
	int file_from;
	int r1;
	int r2;
	int file_to;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);
	file_from = open(argv[1], O-RDONLY);
	error_98 = (file_from, buffer, argv[1]);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99 = (file_tp, buffer, argv[2]);
	return(0);

}
