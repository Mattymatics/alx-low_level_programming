#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars
 * @size: size of the array
 * @c: to fill the array
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	int a;
	char *name;

	name = malloc(sizeof(char) * size);
	if (name == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (a = 0; a < (int)size; a++)
	{
		name[a] = c;
	}
	return (name);
}
