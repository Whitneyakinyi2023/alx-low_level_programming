#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content:the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t written_bytes;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	written_bytes = write(fd, text_content, strlen(text_content));
	if (written_bytes != strlen(text_content))
	{
		return (-1);
	}
	close(fd);
	return (1);
}
