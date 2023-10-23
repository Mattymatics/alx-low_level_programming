#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints sum of diagonals
 * @a: array to traverse
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += a[(size + 1) * i];
	for (j = 1; j <= size; j++)
		sum2 += a[(size - 1) * j];
	printf("%d, %d\n", sum1, sum2);
}

