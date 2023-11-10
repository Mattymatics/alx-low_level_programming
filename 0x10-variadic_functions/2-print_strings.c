#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that print strings
 * @seperator: string
 * @n: number of variadic args
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	int i;
	char *tmp;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < (int)n; i++)
	{
		tmp = va_arg(nums, char *);
		if (tmp == NULL)
			printf("$s", tmp);
		else
			printf("%s", tmp);
		if (seperator != NULL && i < (int)n - 1)
			printf("%s", seperator);
	}
	putchar('\n');
}
