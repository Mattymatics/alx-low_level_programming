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
	int a, num;

	va_list args;

	va_start(args, n);
	for (a = 0; a < (int)n; a++)
	{
		num = (int)va_arg(args, int);
		printd("%d", num);

		if (seperator != NULL && a < (int)n - 1)
			printf("%s", seperator);
	}

	putchar('\n');
}

