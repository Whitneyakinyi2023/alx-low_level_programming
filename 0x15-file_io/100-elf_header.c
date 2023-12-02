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
