#include <stdio.h>

/**
 * main - Prints all single digits numbers of base 10
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
