#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  *array_range - a function that creates an array of integers
 *  @min: minimum value
 *  @max: maximum value
 *  Return: a pointer to a new array
 */

int *array_range(int min, int max)
{
	int *intarr;
	int i = 0, n;

	if (min > max)
		return (NULL);

	intarr = malloc(((max - min) + 1) * sizeof(int));

	if (intarr == NULL)
		return (NULL);
	for (n = min; n <= max; n++)
	{
		intarr[i] = n;
		i++;
	}

	return (intarr);
}
