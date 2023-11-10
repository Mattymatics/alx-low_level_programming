#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns sum of parameters.
 * @n: parameter
 * Return: returns the sum of variadic arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int i, sum;

	sum = 0;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < (int)n; i++)
		sum += va_arg(args, unsigned int);
	return (sum);
}
