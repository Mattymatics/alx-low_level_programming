#include <stdio.h>

/**
 * Fizz_buzz - prints fizz for multiples of 3, and buzz for 5
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar("FizzBuzz ");
		}
		else if ( i % 3 == 0)
		{
			_putchar("Fizz ");
		}
		else if ( i % 5 == 0)
		{
			_putchar("Buzz ");
		}
		else
		{
			_putchar('0' + i);
		}
	}
}


