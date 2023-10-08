#include <stdio.h>

/**
 * main - print all nmbers in base 16
 * Return: 0
 */
int main(void)
{
	int num;
	char al;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (al = 'a'; a' <= 'f'; al++)
		putchar(al);

	putchar('\n');
	return (0);
}
