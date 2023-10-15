#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9, then a new line
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_putchar('0' + a);

	_putchar('\n');
}
