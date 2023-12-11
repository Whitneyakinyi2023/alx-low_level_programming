#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * isDigitString - check if a string contains only digits
 * @str: input string
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int isDigitString(char *str)
{
	unsigned int index;

	index = 0;
	while (index < strlen(str))
	{
		if (!isdigit(str[index]))
		{
			return (0);
		}
		index++;
	}
	return (1);
}

/**
 * main - Print the sum of valid integer arguments
 * @argc: Count of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int index;
	int strToInt;
	int sum = 0;

	index = 1;

	while (index < argc)
	{
		if (isDigitString(argv[index]))
		{
		strToInt = atoi(argv[index]);
		sum += strToInt;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		index++;
	}
	printf("%d\n", sum);
	return (0);
}
