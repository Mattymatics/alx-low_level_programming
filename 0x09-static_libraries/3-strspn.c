#include "main.h"

/**
 * _strspn - a function that searches a string
 * @s: string
 * @accept: to check bytes
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;

	a = 0;
	c = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			b++;
		}
		if (accept[b] == '\0')
			break;

		a++;
	}
	return (c);
}
