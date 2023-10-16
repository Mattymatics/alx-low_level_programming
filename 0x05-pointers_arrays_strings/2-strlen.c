#include "main.h"

/**
 * _strlen - the functions returns the string length
 * @s: string
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
