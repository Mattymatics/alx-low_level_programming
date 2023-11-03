#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size in bytes
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int a = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);
	{
		arr[a] = 0;
		a++;
	}

	return (arr);
}

