#include "main.h"

/**
 * _isdigit - checks if the inputted character is a digit
 *
 * @c : variable
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
