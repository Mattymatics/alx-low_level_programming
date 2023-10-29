#include "main.h"

/**
 * *_strcat - this function concatenated two strings
 * @dest: into
 * @src: outo
 * Return: a pointer to dest
 */


char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
