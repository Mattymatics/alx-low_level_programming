#include "main.h"

/**
 * _strncat - this function concatenates say n bytes from a string to another
 * @dest: into
 * @src: outo
 * @n: number of bytes to concatenate
 * Return: a pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[i] = '\0';

	return (dest);
}
