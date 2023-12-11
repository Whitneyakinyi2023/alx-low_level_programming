#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @str: string to be converted
 * Return: the integer converted from the string
 */
int _atoi(char *str)
{
	int index, signCount, result, length, validDigitFound, currentDigit;

	index = 0;
	signCount = 0;
	result = 0;
	length = 0;
	validDigitFound = 0;
	currentDigit = 0;

	while (str[length] != '\0')

		length++;

	while (index < length && validDigitFound == 0)
	{
		if (str[index] == '-')
			++signCount;
		if (str[index] >= '0' && str[index] <= '9')
		{
			currentDigit = str[index] - '0';

			if (signCount % 2)
				currentDigit = -currentDigit;

			result = result * 10 + currentDigit;

			validDigitFound = 1;

			if (str[index + 1] < '0' || str[index + 1] > '9')
				break;

			validDigitFound = 0;
		}
		index++;
	}

	if (validDigitFound == 0)
		return (0);
	return (result);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int multiplicationResult, number1, number2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	number1 = _atoi(argv[1]);
	number2 = _atoi(argv[2]);

	multiplicationResult = number1 * number2;

	printf("%d\n", multiplicationResult);
	return (0);
}
