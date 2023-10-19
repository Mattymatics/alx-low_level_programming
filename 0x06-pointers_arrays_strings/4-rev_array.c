#include "main.h"

/**
 * reverse_array - this function reverses the content of an array
 * @a: to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, j, bsd;

	j = n - 1;

	for  (i = 0; i < n / 2; i++)
	{
		bsd = a[i];
		a[i] = a[j];
		a[j--] = bsd;
	}
}
