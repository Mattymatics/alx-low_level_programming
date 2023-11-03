#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first
 * @s2: second
 * @n: number of bytes
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ncat;
	unsigned int x1, x2, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n > len2)
		n = len2;
	ncat = malloc(sizeof(char) * (len1 + (n + 1)));
	if (!ncat)
		return (NULL);

	for (x1 = 0; x1 < len1; x1++)
		ncat[x1] = s1[x1];

	for (x2 = 0; x2 < n; x2++)
	{
		ncat[x1] = s2[x2];
		x1++;
	}
	ncat[x1] = '\0';

	return (ncat);
}


