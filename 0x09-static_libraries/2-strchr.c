#include "main.h"
#include <stdlib.h>

/**
 * _strchr - a function that selects part of a string
 * @s: to check
 * @c: to look for
 * Return: s is success, null is char not found
 */

char *_strchr(char *s, char c)
{
	int yes;

	while (1)
	{
		yes = *s++;
		if (yes == c)
			return (s - 1);
		if (yes == 0)
			return (NULL);
	}
}
