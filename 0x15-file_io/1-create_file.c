#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 * create_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content:the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int output = 1;


	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		output = write(fd, text_content, strlen(text_content));
	}
	if (output == -1)
		close(fd);
	return (1);
}
