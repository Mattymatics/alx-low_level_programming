#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: always 0
 */
int main(void)
{
	int first;
	int second = 1;

	while (first < 10)
	{
		while (second < 10)
		{
			putchar(48 + first);
			putchar(48 + second);
			if (first != 10 - 2)
			{
				putchar(',');
				putchar(' ');
			}
			second++;
		}
		first++;
		second = first + 1;
	}
	putchar('\n');
	return (0);
}
