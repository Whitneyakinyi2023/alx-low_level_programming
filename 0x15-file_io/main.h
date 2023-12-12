#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

void error_98(int fd, char *buffer, char *filename);
void error_99(int fd, char *buffer, char *filename);
void error_100(int status, char *buffer);
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif
