#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a string
 * @haystack: contains needle character
 * @needle: checks haystack
 * Return: modified haystack, NULL if not
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0;

	while (*haystack)
	{
		a = 0;
		while (haystack[a] && needle[a] && haystack[a] == needle[a])
			a++;
		if (!needle[a])
			return (haystack);
		haystack++;
	}
	return (NULL);
}
