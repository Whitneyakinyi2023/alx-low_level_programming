#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and prints it
 * @filename:Name of the file
 * @letters: Number of letters to be print and read
 * Return:If successful number of letters, -1 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t _READ;
	ssize_t _WRITE;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	_READ = read(fd, buffer, letters);
	if (_READ == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	_WRITE = write(STDOUT_FILENO, buffer, _READ);
	if (_WRITE == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (_READ);

}
