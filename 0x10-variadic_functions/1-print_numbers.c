#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @seperator: string
 * @n: size
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int a;

	va_list args;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (seperator != NULL && a != (n - 1))
			printf("%s", seperator);
	}

	printf('\n');
	va_end(args);
}

