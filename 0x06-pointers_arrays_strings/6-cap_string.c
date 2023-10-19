#include "main.h"

/**
 * *cap_string - things function caps every word of a string
 * @s: to modify
 * Return: the string
 */

char *cap_string(char *s)
{
	int a, b;

	char bsd[13] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a == 0 && s[a] >= 'a' && s[a] <= 'z')
			s[a] -= 32;
		for (b = 0; b < 13; b++)
		{
			if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
			{
				s[a + 1] -= 32;
			}
		}
	}

	return (s);

}
