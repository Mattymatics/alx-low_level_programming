#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @seperator: string
 * @n: size
 * Return: 0
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;

	va_start(pa, n);

	if (seperator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d%", va_arg(pa, int));
		if (i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(pa);
}
