#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to the comp. function
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)

	{
		for (i = o; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
