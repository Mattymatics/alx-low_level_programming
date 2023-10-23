#include "main.h"

/**
 * _memcpy - a function that copies a string to another
 * @dest: into
 * @src: from
 * @n: number of bytes
 * Return: destinantion string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
