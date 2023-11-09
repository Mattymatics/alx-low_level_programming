#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)

		return;

	for (i = 0; i < size; i++)

		action(array[i]);
}
