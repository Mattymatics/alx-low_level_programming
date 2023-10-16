#include "main.h"

/**
 * print_array - a function that prints n of int array
 * @a: pointer
 * @n: n
 */

void print_array(int *a, int n)
{
	int etc;

	for (etc = 0; etc < n ; etc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[etc]);
		else
			printf("%d", a[etc]);
	}
	putchar(10);
}
