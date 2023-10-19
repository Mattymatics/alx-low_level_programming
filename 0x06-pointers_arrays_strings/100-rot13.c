#include "main.h"

/**
 * rot13 - a function that encodes a string in rot13
 * @s: string to be encoded
 * Return: the resulting string
 */

char *rot13(char *s)
{
	int i, j;

	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghihklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = d[j];
				break;
			}
		}
	}

	return (s);
}
