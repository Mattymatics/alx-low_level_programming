#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory
 * @b: unsigned int size to allocate
 * Return: pointer to malloc'd memory space
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);
	else
		return (mem);
}
