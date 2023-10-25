#include "main.h"

/**
 * _strlen_recursion - a function that returns the lenght of string
 * @s: the string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int c;

	c = 0;

	if (*s == '\0')
		return (0);
	c = 1 + _strlen_recursion(s + 1);
	return (c);
}
