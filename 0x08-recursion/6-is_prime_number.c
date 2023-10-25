#include "main.h"

/**
 * factor - this checks if numbers are factors of n
 * @n: to check for factors
 * @check: starts with n - 1, to 1
 * Return: 1 if no factor, else 0
 */

int factor(int n, int check)
{
	if (check == 1)
		return (1);
	if (n % check == 0)
		return (0);

}

/**
 * is_prime_number - a function that checks if n is prime
 * @n: to check
 * Return: value to factor
 */

int is_prime_number(int n)
{
	int check = (n - 1);

	if (n <= 1)
		return (0);

	return (factor(n, check));
}
