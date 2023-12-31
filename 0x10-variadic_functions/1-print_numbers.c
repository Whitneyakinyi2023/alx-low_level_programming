#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - Prints numbers, followed by a new line.
* @separator: The string.
* @n: The number of integers passed to the function.
* @...: A variable number of numbers.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int dex;

	va_start(numbers, n);

	for (dex = 0; dex < n; dex++)
	{
		printf("%d", va_arg(numbers, int));
		
		if (dex != (n - 1) && separator != NULL)
			
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
