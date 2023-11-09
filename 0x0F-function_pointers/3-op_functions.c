#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition function
 * @a: first
 * @b: second
 * Return: sum of two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: first i
 * @b: second i
 * Return: difference of two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of 2 numbers
 * @a: first in
 * @b: second in
 * Return: product of 2 numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first
 * @b: second
 * Return: division of 2 numbers
 */

int op_div(int a, int b)

{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder
 * @a: first int
 * @b: second int
 * Return: remainder of division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
