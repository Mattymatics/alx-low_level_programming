#include <stdio.h>

/**
 * main - this prints all possible combinations of single digits numbers
 * Return: Always 0
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		putchar(48 + num);
		if (num != 10 -1)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
