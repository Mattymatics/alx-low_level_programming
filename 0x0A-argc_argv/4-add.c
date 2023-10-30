#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two positive numbers
 * @argc: count
 * @argv: vector
 * Description: if no number, print 0.
 * if one of the number is non-digit, print Error
 * Return: 1 if error, 0 if success
 */

int main(int argc, char *argv[])
{
	int sum, i;
	char *p;
	int num;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
