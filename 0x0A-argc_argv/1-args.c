#include "main.h"
#include <stdio.h>

/**
 * main - prints hte number of arguments passed into it
 * @argc: count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
