#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer
 * @str: to copy
 * Return: returns a pointer
 */

char *_strdup(char *str)
{
	int str_size, a;
	char *new_str;

	str_size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + str_size) != '\0')
	{
		str_size++;
	}
	str_size++;
	new_str = malloc(sizeof(char) * str_size);

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < str_size; a++)
	{
		*(new_str + a) = *(str + a);
	}
	*(new_str + str_size) = '\0';
	return (new_str);
}
