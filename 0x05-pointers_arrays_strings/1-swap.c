#include "main.h"

/**
 * swap_int - a function that swaps integers
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
