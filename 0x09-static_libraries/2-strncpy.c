#include "main.h"

/**
 * _strncpy - this function copies a sring
 * @dest: into
 * @src: outo
 * @n: number of bytes
 * Return: pointer to the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
