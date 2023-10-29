#include "main.h"

/**
 * _memset - a function that fills a string to a limit
 * @s: to modify
 * @b: to fill with
 * @n: number of bytes
 * Return: modifies string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
