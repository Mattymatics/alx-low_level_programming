#include <stdio.h>

/**
 * main - This prints the alphabets in lowercase and in reverse
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';
	char letters = 'z';

	for (letter <= letters; letters--)
		putchar(letters);
	putchar('\n');
	return (0);
}
