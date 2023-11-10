#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int t, sum = 0;

	va_start(vl, n);

	for (t = 0; t < n; t++)
		sum += va_arg(vl, int);
	va_end(vl);
	return (sum);
}
