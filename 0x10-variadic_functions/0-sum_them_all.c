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

	unsigned int i, sum;

	sum = 0;

	va_start(args, n);
	
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
