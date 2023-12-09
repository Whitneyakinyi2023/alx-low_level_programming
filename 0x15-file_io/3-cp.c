#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);
	file_from = open(argv[1], O_RDONLY);
	error_98(file_from, buffer, argv[1]);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(file_to, buffer, argv[2]);

	do
	{
		r1 = read(file_from, buffer, argv[1]);
		if  (r1 == 0)
			break;
		error_98(r1, buffer, argv[1]);
		r2 = write (file_from, buffer, r1);
		error_99(r1, buffer, argv[2]);
	}
	while (r2 >= BUF_SIZE);
	r1 = close(file_from);
	error_100(r1, buffer);
	r1 = close(file_to);
	error_100(r1, buffer);
	free(buffer);
	return (0);

}
