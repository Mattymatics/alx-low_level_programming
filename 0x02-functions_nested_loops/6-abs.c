#include "main.h"

/**
 * _abs -> a function that returns the absolute value
 * @n: parameter
 * Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
		n = (-n);
	return (n);
}
