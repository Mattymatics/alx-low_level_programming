#include "main.h"

/**
 * string_toupper - this function changes all lowercase letters
 * @s: to modify
 * Return: the string
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
	}

	return (s);
}
