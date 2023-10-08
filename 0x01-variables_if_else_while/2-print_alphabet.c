#include <stdio.h>

/**
 * main - Prints lower case alphabets
 * Return: Always 0
 */

int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');

	return (0);
}
