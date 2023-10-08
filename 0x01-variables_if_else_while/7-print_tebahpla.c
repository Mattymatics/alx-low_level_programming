#include <stdio.h>

/**
 * main - This prints the alphabets in lowercase and in reverse
 * Return: Always 0
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters--)
		putchar(letters);
	putchar('\n');
	return (0);
}
