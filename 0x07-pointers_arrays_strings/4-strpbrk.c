#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for bytes
 * @s: to check
 * @accept: acceptable bytes
 * Return: a modified string, NULL if not
 */

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}

	}
	return (NULL);
}
