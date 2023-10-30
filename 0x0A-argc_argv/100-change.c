#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints minimum number of coins to make change
 * @argc: count
 * @argv: vector
 * Return: 1 if error, 0 if success
 */

int main(int argc, char *argv[])
{
	int sum, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = strtol(argv[1], &p, 10);
	count = 0;
	if (!*p)
	{
		while (sum > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (sum >= cents[i])
				{
					count += sum / cents[i];
					sum = sum % cents[i];
				}
			}
		}
		if (sum == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", count);
	return (0);
}
