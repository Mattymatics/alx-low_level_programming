#include <stdio.h>

/**
 * main - prints the alphabets in lowercase except q and e
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}